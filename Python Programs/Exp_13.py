# Python program to perform inorder tree traversal

# Perform inorder traversal of a tree with root 25 , left child 15 and write child 30

class Node:
	def __init__(self, key):
		self.left = None
		self.right = None
		self.val = key
def printInorder(root):
	if root:
		printInorder(root.left)
		print(root.val,end=''),
		printInorder(root.right)
T1=input()
root = Node("25,")
root.left = Node("15,")
root.right = Node("30")
printInorder(root)

# Input :
#  root 25 , left child 15 ,write child 30

# Output :
# 15,25,30
