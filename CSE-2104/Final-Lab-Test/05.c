#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(char data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to search for a given value in inorder array
int search(char arr[], int start, int end, char value) {
    int i;
    for (i = start; i <= end; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1; // This should never happen if the input is correct
}

// Recursive function to construct binary tree from given inorder and preorder traversals
struct Node* buildTree(char inorder[], char preorder[], int inStart, int inEnd, int* preIndex) {
    if (inStart > inEnd)
        return NULL;

    // Pick current node from preorder traversal using preIndex and increment preIndex
    struct Node* tNode = newNode(preorder[*preIndex]);
    (*preIndex)++;

    // If this node has no children, return it
    if (inStart == inEnd)
        return tNode;

    // Else find the index of this node in inorder traversal
    int inIndex = search(inorder, inStart, inEnd, tNode->data);

    // Using index in inorder traversal, construct left and right subtrees
    tNode->left = buildTree(inorder, preorder, inStart, inIndex - 1, preIndex);
    tNode->right = buildTree(inorder, preorder, inIndex + 1, inEnd, preIndex);

    return tNode;
}

// Function to print inorder traversal of a binary tree
void printInorder(struct Node* node) {
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%c ", node->data);
    printInorder(node->right);
}

int main() {
    char inorder[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
    char preorder[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
    int len = sizeof(inorder) / sizeof(inorder[0]);
    int preIndex = 0;

    struct Node* root = buildTree(inorder, preorder, 0, len - 1, &preIndex);

    printf("Inorder traversal of the constructed tree:\n");
    printInorder(root);

    return 0;
}
