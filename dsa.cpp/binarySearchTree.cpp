// #include <iostream>
// #include <vector>
// using namespace std;

// class Node{                                    //same as BT code
// public :
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };

// Node* insert(Node* root , int val){              //0(log n)
//     if(root == NULL){
//         root = new Node(val);
//         return root;
//     }

//     if(val < root->data){
//         root->left = insert(root->left , val);
//     }else{
//         root->right = insert(root->right , val);
//     }

//     return root;
// }

// Node* buildBST(int arr[] , int n){                     //n = size of array , 0(nlog n) approx
//     Node* root = NULL;
//     for(int i=0 ; i<n ; i++){
//         root = insert(root , arr[i]);
//     }
//     return root;

// }

// void inOrder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inOrder(root->left);
//     cout << root->data << " ";
//     inOrder(root->right);

// }

// bool search(Node* root , int key){               //o(height) , avg case = 0(log n)
//     if(root == NULL){
//         return false;
//     }

//     if(root->data == key){
//         return true;
//     }

//     if(root->data > key){
//         return search(root->left , key);
//     }else{
//         return search(root->right , key);
//     }
// }

// Node* getInOrderSuccessor(Node* root){
//     while(root->left != NULL){
//         root = root->left;
//     }
//     return root;                                //IS
// }

// Node* delNode(Node* root , int val){
//     if(root == NULL){
//         return NULL;
//     }

//     if(val < root->data){
//         root->left = delNode(root->left , val);
//     }else if(val > root->data){
//         root->right = delNode(root->right , val);
//     }else{
//         //root == val : case
//         //case 1 : 0 child
//         if(root->left == NULL && root->right == NULL){
//             delete root;
//             return NULL;
//         }
//         //case 2 : 1 child
//         if(root->left == NULL || root->right == NULL){
//             return root->left == NULL ? root->right : root->left;
//         }
//         //case 3 : 2 children
//         Node* IS = getInOrderSuccessor(root->right);
//         root->data = IS->data;
//         root->right = delNode(root->right , IS->data);
//         return root;
//     }
//     return root;                           //just to avoid error, btw this statement is never going to be executed
// }

// void printInRange(Node* root , int start , int end){
//     if(root==NULL){
//         return;
//     }
//     if(start<=root->data && root->data<=end){
//         printInRange(root->left , start , end);
//         cout << root->data << " ";
//         printInRange(root->right , start , end);
//     }else if(start > root->data){
//         printInRange(root->right , start , end);
//     }else{
//         printInRange(root->left , start , end);
//     }
// }

// //root to leaf path
// void printPath(Node* root , vector<int> path){
//     for(int i=0 ; i<path.size() ; i++){
//         cout << path[i] << " ";
//     }
//     cout << endl;
// }
// void pathHelper(Node* root , vector<int> &path){
//     if(root == NULL){
//         return;
//     }
//     path.push_back(root->data);

//     if(root->left==NULL && root->right==NULL){
//         printPath(root , path);
//         path.pop_back();
//         return;
//     }
//     pathHelper(root->left , path);
//     pathHelper(root->right , path);

//     path.pop_back();

// }
// void rootToLeafPath(Node* root){
//     vector<int> path;
//     pathHelper(root , path);
// }

// //VALIDATE BST
// bool validateHelper(Node* root , Node* max, Node* min){
//     if(root==NULL){
//         return true;
//     }

//     if(min!=NULL && root->data < min->data){
//         return false;
//     }
//     if(max!=NULL && root->data > max->data){
//         return false;
//     }

//     return validateHelper(root->left , root , min)
//         && validateHelper(root->right , max , root);
// }
// bool validateBST(Node* root){
//     return validateHelper(root,NULL,NULL);
// }
// int main(){
//     int arr[6] = {5,1,3,4,2,7};
//     int arr2[9] = {8,5,3,1,4,6,10,11,14};
//     Node* root = buildBST(arr2 , 9);
//     root->data = 15;
//     // inOrder(root);
//     // cout << endl;

//     // delNode(root , 10);

//     // inOrder(root);
//     // cout << endl;

//    //  printInRange(root , 5 , 12);
//     cout <<  validateBST(root);
//     return 0;
// }






















#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

Node* buildBSTfromSorted(int arr[] , int start , int end){
    if(start > end){
        return NULL;
    }

    int mid = start + (end - start)/2;
    Node* curr = new Node(arr[mid]);
    curr-> left = buildBSTfromSorted(arr, start , mid-1);
    curr-> right = buildBSTfromSorted(arr , mid+1 , end);
    
    return curr;

}

void preorder(Node* root){
    if(root == NULL){
        return ;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//BST to balanced BST
Node* BSTfromSortedVec(vector<int> arr , int start , int end){
    if(start > end){
        return NULL;
    }

    int mid = start + (end - start)/2;
    Node* curr = new Node(arr[mid]);
    curr-> left = BSTfromSortedVec(arr, start , mid-1);
    curr-> right = BSTfromSortedVec(arr , mid+1 , end);
    
    return curr;

}
void getInorder(Node* root , vector<int> &nodes){
    if(root==NULL){
        return;
    }
    getInorder(root->left , nodes);
    nodes.push_back(root->data);
    getInorder(root->right , nodes);
}
Node* balancedBST(Node* root){
    vector<int> nodes;
    getInorder(root , nodes);

    return BSTfromSortedVec(nodes , 0 , nodes.size()-1);
}
int main(){
    // int arr[7] = {3,4,5,6,7,8,9};
    // Node* root = buildBSTfromSorted(arr,0,6);
    // preorder(root);
    // cout << endl;


    Node* root = new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);
    
    root->right = new Node(7);
    root->right->right= new Node(8);
    root->right->right->right = new Node(9);

    root = balancedBST(root);
    preorder(root);
    cout << endl;
    return 0;
}