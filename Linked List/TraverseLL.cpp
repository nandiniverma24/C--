#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head; // Set the new node's next to current head
        head = newNode; // Update head to the new node
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void insertAtPosition(int data, int position) {
        if (position == 1 || head==nullptr) {
            insertAtBeginning(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* current = head;
        int count=1;
        while(current->next!=nullptr && count<position-1) {
            current=current->next;
            count++;
        }
        newNode->next=current->next;
        current->next=newNode;
    }
    
    void deleteFromBeginning()
    {
        if(head==nullptr)
        {
            return;
        }
        Node* temp=head;
        head=temp->next;
        delete temp;
    }
    
    void deleteFromPosition(int position)
    {
        if(head==nullptr)
        {
            return;
        }
        
        if(position==0)
        {
            deleteFromBeginning();
            return;
        }
        
        Node* current=head;
        for(int i=0;i<position-1 && current!=nullptr ; i++)
        {
            current=current->next;
        }
        if(current ==nullptr || current->next==nullptr)
        {
            cout<<"out of bounds position";
            return;
        }
        
        Node* nextNode=current->next->next;
        delete current->next;
        current->next=nextNode;
        
    }
    
    void deleteFromEnd()
    {
        if(head==nullptr)
        {
            return;
        }
        
        if(head->next==nullptr)
        {
            delete head;
            head=nullptr;
            return;
        }
        
        Node* secondLast=head;
        while(secondLast->next->next!=nullptr)
        {
            secondLast=secondLast->next;
        }
        delete secondLast->next;
        secondLast->next=nullptr;
        
    }

    void traverseLL() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(1);
    list.insertAtBeginning(2);
    list.insertAtBeginning(3);
    list.insertAtBeginning(4);
    list.insertAtBeginning(5);

    list.traverseLL();

    list.insertAtEnd(6);
    list.insertAtEnd(7);

    list.traverseLL();

    list.insertAtPosition(8, 3);

    list.traverseLL();
    
    list.deleteFromBeginning();
    
    list.traverseLL();
    
    list.deleteFromEnd();
    
    list.traverseLL();
    
    list.deleteFromPosition(3);
    
    list.traverseLL();

    return 0;
}
