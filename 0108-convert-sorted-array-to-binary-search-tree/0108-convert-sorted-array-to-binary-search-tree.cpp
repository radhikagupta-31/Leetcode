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
  public:
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        return convert(arr , 0 , arr.size()-1);
    }
    TreeNode * convert(vector<int>&arr , int low , int high){
        if (low>high)
        return nullptr;
        int mid = (high + low) / 2;
        TreeNode * root = new TreeNode (arr[mid]);
        root -> right = convert(arr ,mid +1 , high);
        root -> left = convert(arr , low , mid -1);
        return root;
    }
};