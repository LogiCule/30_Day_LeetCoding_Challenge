int maxVal;
class Solution {
public:
    TreeNode* trim(TreeNode* root)
    {
        if(root==NULL)
            return NULL;
            maxVal=max(maxVal,root->val);
        root->left=trim(root->left);
        root->right=trim(root->right);
        if(root->val<0 && !root->left && !root->right)
        {
            //cout<<root->val;
            return NULL;
        }
        return root;
    }
    int maxSum(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return root->val+max(maxSum(root->left),maxSum(root->right));
    }
    int maxPathSum(TreeNode* root) {
        queue<TreeNode*> nodes;
        maxVal=root->val;
        nodes.push(root);
        trim(root);
        while(!nodes.empty())
        {
            TreeNode* temp=nodes.front();
            nodes.pop();
            if(temp->left && temp->right)
            {
                nodes.push(temp->left);
                nodes.push(temp->right);
            }
            else if(temp->right)
            {
                nodes.push(temp->right);
            }
            else if(temp->left)
            {
                nodes.push(temp->left);
            }
            maxVal=max(max(max(max(maxVal,temp->val),(temp->val+maxSum(temp->left))),(temp->val+maxSum(temp->right))),(temp->val+maxSum(temp->left)+maxSum(temp->right)));
        }
        return maxVal;
    }
};
