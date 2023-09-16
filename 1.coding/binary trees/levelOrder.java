import java.util.*;
import java.lang.Math;
class Node 
{
	int data;
	Node left, right;
	public Node(int item)
	{
		data = item;
		left = right = null;
	}
}

class BinaryTree 
{
	// Root of the Binary Tree
	Node root;

	public BinaryTree() { root = null; }

	void printLevelOrder()
	{
		int h = height(root);
		int i;
		for (i = 1; i <= h; i++)
			printCurrentLevel(root, i);
	}


	int height(Node root)
	{
		if (root == null)
			return 0;
		else 
        {
            return 1 + Math.max(height(root.left), height(root.right));
		}
	}

	/* Print nodes at the current level */
	void printCurrentLevel(Node root, int level)
	{
		if (root == null)
			return;
		if (level == 1)
			System.out.print(root.data + " ");
		else if (level > 1) {
			printCurrentLevel(root.left, level - 1);
			printCurrentLevel(root.right, level - 1);
		}
	}

	public static void main(String args[])
	{
		BinaryTree tree = new BinaryTree();
		tree.root = new Node(3);
		tree.root.left = new Node(9);
		tree.root.right = new Node(20);
		tree.root.right.left = new Node(15);
		tree.root.right.right = new Node(7);

        System.out.println("Level order traversal of binary tree is ");
        tree.printLevelOrder();
	}
}
