/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int depthX = 0;
    int depthY = 0;
    TreeNode *parentX = nullptr;
    TreeNode *parentY = nullptr;
public:
    bool isCousins(TreeNode* root, int x, int y) {
    DFS(root , root , 0,x ,y);
    return (depthX == depthY && parentX != parentY);

    }
    void DFS(TreeNode *root ,TreeNode *parent, int depth ,int x,int y){
        if (root == nullptr){
            return;
        }
        else if (root ->val == x){
            depthX = depth;
            parentX = parent;
        }
        else if (root -> val == y){
             depthY = depth;
            parentY = parent;
        }
        DFS(root ->right , root ,depth +1, x ,y);
        DFS(root -> left , root , depth +1 ,x,y);
    }

};