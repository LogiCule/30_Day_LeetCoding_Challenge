class Solution {
public:
    TreeNode* bst(vector<int> nodes,int low,int high)
    {
        if(low>high)
            return NULL;
        int i;
        TreeNode* temp=new TreeNode(nodes[low]);
        for(i=low+1;i<=high;i++)
        {
            if(nodes[i]>nodes[low])
            {
                break;
            }
        }
        temp->left=bst(nodes,low+1,i-1);
        temp->right=bst(nodes,i,high);
        return temp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return bst(preorder,0,preorder.size()-1);
    }
};
