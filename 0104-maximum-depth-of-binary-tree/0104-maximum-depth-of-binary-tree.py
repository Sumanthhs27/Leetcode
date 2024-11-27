# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        res = 0

        def helper(node, res):
            if not node:
                return res
            
            left = helper(node.left, res + 1)
            right = helper(node.right, res + 1)
            return max(left, right)
        
        return helper(root, res)