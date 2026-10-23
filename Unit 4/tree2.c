// Write a program to perform following operations on a binary tree:
// 1. Insert a node
// 2. Delete a node
// 3. Height of the tree
// 4. Total no. of Nodes in the tree

#include <stdio.h>
#include <stdlib.h>

// Structure for a BST Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Helper function to create a new node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// a. Insert a node into the BST
struct Node* insert(struct Node* root, int val) {
    if (root == NULL) {
        return createNode(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    // Duplicate values are ignored
    return root;
}

// Helper function to find the minimum value node (used for deletion)
struct Node* findMin(struct Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

// b. Delete a node from the BST
struct Node* deleteNode(struct Node* root, int val) {
    if (root == NULL) {
        return root;
    }

    // Locate the node to be deleted
    if (val < root->data) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->data) {
        root->right = deleteNode(root->right, val);
    } else {
        // Node found: handle the 3 deletion cases

        // Case 1 & 2: No child or Only one child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Two children
        // Get the inorder successor (smallest in the right subtree)
        struct Node* temp = findMin(root->right);

        // Copy the inorder successor's value to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// c. Calculate the height of the tree
int getHeight(struct Node* root) {
    if (root == NULL) {
        return -1; // Height of an empty tree is -1 (based on edges)
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

// d. Count the total number of nodes in the tree
int countNodes(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Helper function to display the tree (In-order traversal)
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void main() {
    struct Node* root = NULL;
    int choice, value;

    printf("------ Binary Search Tree Operations ------\n");
    while (1) {
        printf("\n1. Insert Node\n");
        printf("2. Delete Node\n");
        printf("3. Get Height of Tree\n");
        printf("4. Count Total Nodes\n");
        printf("5. Display Tree (In-order)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                printf("%d inserted.\n", value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                printf("Operation processed.\n");
                break;
            case 3:
                printf("Height of the tree: %d\n", getHeight(root));
                break;
            case 4:
                printf("Total number of nodes: %d\n", countNodes(root));
                break;
            case 5:
                printf("In-order Traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    getch();
}