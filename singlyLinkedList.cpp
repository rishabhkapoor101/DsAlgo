#include "all.h"
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

class Linky{
    Node* head;

    public:

        Linky(){
            head = NULL;
        }

        void push(int data){
            Node* temp = new Node(data);

            if(head == NULL){
                head = temp;
            }
            else{
                Node *h = head;

                while(h->next!=NULL){
                    h = h->next;
                }
                h->next = temp;
            }
        }

        void display(){

            Node* temp;
            temp = head;

            if(temp==NULL){
                cout<<"Nothing to display, list is empty."<<endl;
                return;
            }

            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp = temp->next;
            }
            // cout<<endl;
        }


        void pop(){
            Node* temp;
            temp = head;

            if(temp==NULL){
                cout<<"Nothing to pop, list is already empty."<<endl;
                return;
            }

            while (temp->next->next!=NULL){
                temp = temp->next;
            }

            delete temp->next->next;
            temp->next = NULL;
        }

};


int main(){

    Linky list1, list2;

    // for(int i=1; i<=10; i++){
    //     list1.push(i*2);
    //     list2.push(i*3);
    // }

    list1.pop();
    list2.pop();
    list1.display();
    list2.display();

    return 0;
}
