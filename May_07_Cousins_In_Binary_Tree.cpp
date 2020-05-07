int order;
int sign=1;
class Solution {
public:
    TreeNode* findParent(TreeNode *root,int val,int level)
    {
        if(root->left && root->right)
        {
            if(root->left->val==val || root->right->val==val)
            {
                order+=(sign*level);
                sign*=-1;
                return root;
            }
            else
            {
                TreeNode* temp1 = findParent(root->left,val,level+1);
                TreeNode* temp2 = findParent(root->right,val,level+1);
                if(temp1)
                    return temp1;
                return temp2;
            }
        }
        else if(root->left)
        {
            if(root->left->val==val)
            {
                order+=(sign*level);
                sign*=-1;
                return root;
            }
            else
            {
                return findParent(root->left,val,level+1);
            }
        }
        else if(root->right)
        {
            if(root->right->val==val)
            {
                order+=(sign*level);
                sign*=-1;
                return root;
            }
            else
            {
                return findParent(root->right,val,level+1);
            }
        }
        else
        {
            return NULL;
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        order=0;
        sign=1;
        TreeNode* parent1=findParent(root,x,1); 
        cout<<order;
        TreeNode* parent2=findParent(root,y,1);
        cout<<order;
        
        if(order==0 && parent1 && parent2 && parent2!=parent1)
            return true;
        return false;
    }
};
/*
Explaination: To be cousins we have to kno the parent and the level
So I used a helper function that gets the parent node of the node of value X
and adds the level of the node or subtracts it if you call the function even-th time
so if the value of global variable order is 0 then both nodes are of same level
now to the parents if their parents are same ,then they cannot be cousins. 

*/
