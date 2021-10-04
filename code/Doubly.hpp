#include "Patient.hpp"
#include <bits/stdc++.h>
using namespace std;
class DNode {
    public:
        Patient data;
        DNode* prev;
        DNode* next;
        DNode(Patient data){
            this->data = data;
            prev = NULL;
            next = NULL;
        }
};
class DList{
    private:
        DNode* head;
        DNode* tail;
        int size;
    public:
        DList(){
            head = tail = NULL;
            size = 0;
        }
        void push(Patient val);
};
void DList::push(Patient val){
    DNode* p = new DNode(val);
    if(size == 0){
        head = tail = p;
        size++;
    }
    else{
        head->prev = p;
        p->next = head;
        head = p;
        size++;
    }
}