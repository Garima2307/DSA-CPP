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

int diam1(Node* root){
    if(root == NULL){    //base case (if no root exists)
        return 0;
    }

    int currDiam = height(root->left) + height(root->right) + 1;
    int leftDiam = diam1(root->left);
    int rightDiam = diam1(root->right);
    return max(max(leftDiam , rightDiam) , currDiam);
}

pair<int,int> diam2(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }
    //(diameter,height)
    pair<int,int> leftinfo = diam2(root->left);
    pair<int,int> rightinfo = diam2(root->right);

    int currDiam = leftinfo.second + rightinfo.second + 1 ;
    int finalDiam = max(currDiam ,max(leftinfo.first , rightinfo.first));
    int finalHeight = max(leftinfo.second, rightinfo.second) + 1;

    return make_pair(finalDiam , finalHeight);

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

//subtree of another tree que

bool isIdentical(Node* root1 , Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }else if(root1==NULL || root2==NULL){
        return false;
    }
    
    if(root1 -> data != root2 -> data){
        return false;
    }

    return isIdentical(root1 -> left , root2 -> left)
        && isIdentical(root1 -> right , root2 -> right);
}
bool isSubtree(Node* root , Node* subroot){
    if(root==NULL && subroot==NULL){
        return true;
    }else if(root==NULL || subroot==NULL){
        return false;
    }

    if(root->data == subroot-> data){
        //check identical for subtrees?
        if(isIdentical(root , subroot)){
            return true;
        }
    }

    int isLeftSubtree = isSubtree(root->left , subroot);
    if(!isLeftSubtree){
        return isSubtree(root->right , subroot);
    }
    return true;

}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = build(nodes);

    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);
    subRoot->right = new Node(5);

    cout << "Subtree (yes/no) = " << isSubtree(root , subRoot) << endl;

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
    
    cout << "height=" << height(root) << endl;

    cout << "count=" << count(root) << endl;

    cout << "sum=" << rootsum(root) << endl;

    cout << "Diameter = " << diam1(root) << endl;

    cout << "Diam2 = " << diam2(root).first << endl;
    return 0;
}