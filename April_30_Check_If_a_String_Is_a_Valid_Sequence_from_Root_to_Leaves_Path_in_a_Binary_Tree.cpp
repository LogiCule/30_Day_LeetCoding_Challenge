lass Solution {
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr,int i=0) 
    {
        if(root && i>=arr.size())
            return false;
        if(root->val==arr[i])
        {
            if(root->left && root->right)
                return isValidSequence(root->left,arr,i+1)||isValidSequence(root->right,arr,i+1);
            else if(root->left)
                return isValidSequence(root->left,arr,i+1);
            else if(root->right)
                return isValidSequence(root->right,arr,i+1);
            else if(i==arr.size()-1)
                return true;
            else return false;
        }
        return false;
    }
};
