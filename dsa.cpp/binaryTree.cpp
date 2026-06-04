#include <iostream>
#include <queue>
#include <vector>
#include <map>
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

//subtree of another tree que 👇🏻
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

//topview of tree
void topView(Node* root){
    queue<pair<Node* , int>> Q;
    map<int,int> m;            //(horizontal distance , Node*)

    Q.push(make_pair(root,0));
    while(!Q.empty()){
        pair<Node* , int> curr = Q.front();
        Q.pop();

        Node* currNode = curr.first;
        int currHD = curr.second;
        if(m.count(currHD) == 0){
            m[currHD] = currNode -> data;
        }
        if(currNode->left != NULL){
            pair<Node* ,int> left = make_pair(currNode->left , currHD-1);
            Q.push(left);
        }
        if(currNode->right != NULL){
            pair<Node* ,int> right = make_pair(currNode->right , currHD+1);
            Q.push(right);
        }
    }
    for(auto it : m){
        cout << it.second << " ";
    }
    cout << endl;
}

//kth level of a tree
void kthHelper(Node* root , int k , int currLevel){
    if(root == NULL){
        return;
    }
    if(currLevel == k){
        cout << root->data << " ";
        return;
    }
    kthHelper(root->left , k , currLevel+1);
    kthHelper(root->right , k , currLevel+1);
}
void kthLevel(Node* root , int k){
    kthHelper(root , k , 1);
    cout << endl;
    
}

//lowest common ancestor
bool rootToNode(Node* root , int n , vector<int> &path){    //pass by reference so that changes will be made in org path vectors
    if(root == NULL){                                    //o(n)
        return false;
    }

    path.push_back(root->data);
    if(root->data == n){
        return true;
    }
    int isLeft = rootToNode(root->left , n , path);
    int isRight = rootToNode(root->right , n , path);
    
    if(isLeft || isRight){
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(Node* root , int n1 , int n2){                 // 0(n) , 0(n)
    vector<int> path1;
    vector<int> path2;

    rootToNode(root , n1 , path1);
    rootToNode(root , n2 , path2);

    int lca = -1;
    for(int i=0,j=0 ; i<path1.size() ,j<path2.size() ; i++,j++){
        if(path1[i] != path2[j]){
            return lca;
        }
        lca = path1[i];
    }
    return lca;
}
 //approach 2 of LCA
 Node* LCA2(Node* root , int n1 , int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* leftLCA = LCA2(root->left ,n1,n2);
    Node* rightLCA = LCA2(root->right, n1,n2);

    if(leftLCA!=NULL && rightLCA!=NULL){
        return root;
    }
    return leftLCA = NULL?rightLCA : leftLCA;
 }
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = build(nodes);
    
    int n1 = 4 , n2 = 5;
    cout << LCA2(root , n1 , n2) -> data << endl;
    
    return 0;
}







