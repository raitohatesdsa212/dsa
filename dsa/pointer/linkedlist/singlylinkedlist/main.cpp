#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val): data(val), next(nullptr) {}
};

class LinkedList{
    //encapsulation data 
    private:
        Node* head;
        Node* tail;
    //function
    public:
        //constructor
        LinkedList(): head(nullptr), tail(nullptr){}
        //destructor
        ~LinkedList(){
            //how to traverse and delete all node at the same time?
            Node* traverse = head;
            while (traverse != nullptr){
                Node* temp = traverse->next;
                delete traverse;
                traverse = temp;
            }
        }
        /*
        LinkedList manipulation:
        push_back()
        display()
        deleteByIndex(val, index)
        InsertByindex(val, index)
        pop_tail()
        pop_head()
        reverse()
        */
        void push_back(int val){
            Node* newnode = new Node(val);
            if (head == nullptr){
                head = tail = newnode;
            }
            else {
                tail->next = newnode;
                tail = newnode;
            }
        }
        
        void display(){
            Node* traverse = head;
            while (traverse != nullptr){
                cout << traverse->data << " ";
                traverse = traverse->next;
            }cout << endl;
        }
        
        void pop_tail(){
            if (head == nullptr) return;
            if (head->next == nullptr){
                delete head;
                head = nullptr;
                return;
            }
            Node* traverse = head;
            while (traverse->next->next != nullptr){
                traverse = traverse->next;
            }
            Node* trash = traverse->next;
            traverse->next = nullptr;
            delete trash;
        }

        void pop_head(){
            if (head == nullptr) return;
            Node* temp = head->next;
            delete head;
            head = temp;
        }

        void InsertByindex(int val, int index){
            Node* newnode = new Node(val);
            Node* traverse = head;
            int count = index-1;
            while (count !=0){
                traverse = traverse->next;
                count --;
            }
            newnode->next = traverse->next;
            traverse->next = newnode;
        }

        void DeleteByIndex(int val, int index){
            Node* traverse = head;
            int count = index-1;
            while (count !=0){
                traverse = traverse->next;
                count --;
            }
            // 0 1  2  3
            // 1 2 100 3 
            Node* trash = traverse->next;
            traverse->next = traverse->next->next;
            delete trash;
        }

        void sumll(){
            int sum = 0;
            Node* traverse = head;

            while (traverse != nullptr){
                sum += traverse->data;
                traverse = traverse->next;
            }
            cout << sum << endl;
        }

        void reverse(){
            //base-case
            if (head == nullptr || head->next == nullptr) return;
            //declare
            Node* curr = head; //current node
            Node* next = nullptr; //next node
            Node* prev = nullptr; //previous node
            //logic
            tail = head; //tail is new head
            while (curr != nullptr){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev; // head is new tail(prev is the final node)
        }

        Node* zippedLinkedList(Node* list1, Node* list2){
            Node* dummy = new Node(0);
            Node* tail = dummy;
            while (list1 != nullptr && list2 != nullptr){
                if (list1->data < list2->data){
                    tail->next = list1;
                    list1 = list1->next;
                }
                else { 
                    tail->next = list2;
                    list2 = list2->next;
                }
                tail = tail->next;
            }
            if (list1 != nullptr){
                tail->next = list1;
            }
            else if (list2 != nullptr){
                tail->next = list2;
            }
            return dummy->next;
        }

    
};



int main(){
    LinkedList llgreen;
    LinkedList llred;
    llgreen.push_back(1);
    llgreen.push_back(3);
    llgreen.push_back(5);
    llgreen.push_back(100);
    llred.push_back(0);
    llred.push_back(1);
    llred.push_back(2);
    



    cout << endl;
    return 0;
}