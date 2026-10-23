#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Structure for a Binary Tree Node so this is the first step iykyk
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;        //IYKYK
    newNode->right = NULL;

    return newNode;
}

// Function to insert a new node in the binary tree
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function to perform preorder traversal of the binary tree
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Function to perform inorder traversal of the binary tree
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function to perform postorder traversal of the binary tree
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void main() {
    struct Node* root = NULL;
    root = insert(root, 6);
    insert(root, 5);
    insert(root, 9);
    insert(root, 10);
    insert(root, 11);
    insert(root, 13);
    insert(root, 4);
    insert(root, 3);
    insert(root, 7);
    insert(root, 12);

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    getch();
}

