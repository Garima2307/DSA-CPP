//build tree from preorder
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node* build(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode -> left = build(nodes);
    currNode -> right = build(nodes);

    return currNode;
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }

    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }

    
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            cout << endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            cout << curr->data << " ";
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }
    //cout << endl;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currht = max(leftHt , rightHt) +  1;
    return currht;
}

int count(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);
    return leftCount + rightCount + 1;
}

int rootsum(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftSum = rootsum(root->left);
    int rightSum = rootsum(root->right);
    return leftSum + rightSum + root->data;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root = build(nodes);
    //cout << " root = " << root->data << endl;
    cout << "Preorder = ";
    preorder(root);
    cout << endl;

    cout << "inorder = ";
    inorder(root);
    cout << endl;

    cout << "postorder = ";
    postorder(root);
    cout << endl;

    cout << "level order = ";
    levelorder(root);
    //cout << endl;
    
    cout << "height=" << height(root);
    cout << endl;

    cout << "count=" << count(root);
    cout << endl;

    cout << "sum=" << rootsum(root);
    cout << endl;
    return 0;
}