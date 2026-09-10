class Solution {
public:

    int sum(TreeNode* root) {
        if (root == nullptr)
            return 0;

        return root->val + sum(root->left) + sum(root->right);
    }

    int countNodes(TreeNode* root) {
        if (root == nullptr)
            return 0;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int average(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int avg = sum(root) / countNodes(root);

        int count = 0;

        if (avg == root->val)
            count++;

        count += average(root->left);
        count += average(root->right);

        return count;
    }

    int averageOfSubtree(TreeNode* root) {
        return average(root);
    }
};