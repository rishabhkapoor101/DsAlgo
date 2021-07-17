#include "all.h"
using namespace std;

struct Leaf{
    int data;
    Leaf* left;
    Leaf* right;

    Leaf(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

class Bst{

    Leaf* root;

    public:
        Bst(){
            root = NULL;
        }

        void addLeaf(int data){
            cout<<"Adding "<<data<<endl;
            Leaf* temp = new Leaf(data);

            if(root==NULL){
                root = temp;
            }
            else{
                Leaf* po = root;

                while((po->left!=NULL && po->data>data) || (po->right!=NULL && po->data<data)){

                    if(po->data>data) po=po->left;

                    else po = po->right;
                }

                if(po->data>data) po->left = temp;

                else po->right = temp;

            }
        }

        void printInorder(Leaf* root){
            if(root==NULL) return;

            printInorder(root->left);
            cout<<root->data<<"  ";
            printInorder(root->right);

        }

        Leaf* getRoot(){
            return this->root;
        }

};

int main(){

    Bst tree1;

    for(int i=0; i<10; i++){
        tree1.addLeaf(int(rand()%110));
    }


    tree1.printInorder(tree1.getRoot());

    return 0;

}
