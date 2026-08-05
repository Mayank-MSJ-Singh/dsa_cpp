#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
        }
    };

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
        }
    Node* root = new Node(preorder[idx]);

    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;

    }

int height(Node* root){
    queue<Node*> q;
    int h = 0;
    q.push(root);
    q.push(NULL);
    while (q.size() > 0){
        Node* curr = q.front();
        q.pop();
        if(curr == NULL){
            h++;
            if (!q.empty()){
                q.push(NULL);
                continue;
                }
            break;
            }
        if(curr->left != NULL){
            q.push(curr->left);
            }
        if(curr->right !=NULL ){
            q.push(curr->right);
            }
        }
    return h;
    }

int height_rec(Node* root){
    if(root==NULL){
        return 0;
        }

    return max(height_rec(root->left), height_rec(root->right))+1;
    }

int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);

    //cout<<root->data<<endl;
    cout<< height_rec(root)<<endl;

    return 0;
    }