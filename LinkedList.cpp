#include<iostream>
#include<string>
#include<map>


using namespace std;



struct node{

    int val;
    node *next;
};


class LinkedList{

    private:
        int size;
        node* head;
        node* tail;
    public:
        
        LinkedList(){
            this->head = NULL;
            this->tail = NULL;
            size = 0;
        }

        void addAtHead(int val){
            
            node *tmp = new node;
            tmp->val = val;
            tmp->next = head;
            if(head == NULL){
                head = tmp;
                tail = tmp;
            }
            else{
            head = tmp;
            }
            size +=1;
            
        }

        int getHead(){
            return this->head->val;
        }

        int get(int index){
            
            if(index>size)
                return -1;

            node *tmp = head;
            
            for(int i=0; i<index&&tmp->next!=NULL;i++){
                tmp=tmp->next;
            }

            
            /*int piv = 0;
            while(piv<index){
                tmp=tmp->next;
                piv+=1;            
            }
            */

            return tmp->val;
        
        }
       
        void addAtIndex(int index,int val){
            
            /*          
            if(index > size)
                return;
            if(index == size){
                this->addAtTail(val);
                return;
            }
            node *tmp = new node;
            tmp -> val = val;
            node *cur = new node;
            cur = head;
            int piv = 1;
            while(piv < index){
                cur = cur->next;
                piv +=1;
            }
            tmp->next = cur->next;
            cur->next = tmp;
            tmp = NULL;
            cur = NULL;
            size +=1;
            */ 
            if(index>size)
                return;
            if(index==size){
                addAtTail(val);
                return;
            }
            node *tmp = new node;
            tmp->val = val;
            node *cur = head;
            for(int i=1;i<index&&cur->next!=NULL;i++){
                cur = cur->next;
            }
            tmp->next = cur->next;
            cur->next = tmp;
            size +=1;
            

        } 

        void addAtTail(int val){
            
            node *tmp = new node;
            tmp -> val = val;
            tmp -> next = NULL;
            if(tail == NULL){
                head = tmp;
                tail = tmp;
            }
            else{
            tail->next = tmp;
            tail = tmp;
            }
            size +=1;

        }

        void deleteAtIndex(int index){
            
          /*
            if (index > size)
                return;

            node* cur = head;
            int piv = 1;
            while(piv<index-1){
                cur = cur->next;
                piv +=1;
            }

            node* free = new node;
            free = cur->next;
            cur ->next = free->next;
            delete free;
            size -=1;
        */ 
            
            if(index>size)
                return;
            
            if(index==1){
                this->removeHead();
                return;
            }
            if(index==size){
                this->removeTail();
                return;
            }

            node *cur = head;

            for(int i=1;i<index-1&&cur->next!=NULL;i++){
                cur = cur->next;
            };
            node *free = new node;
            free = cur->next;
            cur->next = free->next;
            delete free;
            size -=1; 
            
        
        }

        void removeHead(){
            node* free= head;
            head = head->next;
            delete free;
            size -=1;      
        }

        void removeTail(){
            node* free=head;
            while(free->next->next!=NULL){
                free = free->next;
            }
            tail = free;
            free = free->next;
            delete free;
            size -=1;
            
        }

        void traverse(){

            node *tmp = new node;
            tmp = head;
            while(tmp!=NULL){
                cout << tmp->val << "\t";
                tmp = tmp->next;
            }
            cout << endl;
        }

        int getSize(){
            return this->size;
        }

        int getTail(){
            return this->tail->val;
        }

            
            
            
};




void parse(string* fc,string* parm){
    
    LinkedList *L = new LinkedList();

    void (*vo)(int);
    void (*voI)(int,int);
    int (*fpt)(int);
    
    

    enum functions {addAtHead,addAtTail,addAtIndex,get,deleteAtIndex};
    
    

    for(int i=0 ;i <=1000&&fc[i].length()>0;i++){
        string fs=fc[i];
        string param = parm[i];
        if param.length()>1:

        cout << fs << endl;
        
    }

}



int main(){


    LinkedList *L = new LinkedList();
/*    
    L->addAtHead(5);
    L->addAtHead(2);
    cout << "tail "<<L->getTail() << " head " << L->getHead()<<endl;
    L->deleteAtIndex(1);
    cout << "tail "<<L->getTail() << " head " << L->getHead()<<endl;
    L->addAtIndex(1,9);
    cout << "tail "<<L->getTail() << " head " << L->getHead()<<endl;
    L->addAtHead(4);
    cout << "tail "<<L->getTail() << " head " << L->getHead()<<endl;
    L->addAtHead(9);
    L->addAtHead(8);
    L->traverse();
    cout << L->get(3)<<endl;
    L->traverse();
    cout << "tail "<<L->getTail() << " head " << L->getHead()<<endl;
    L->addAtTail(1);
    L->traverse();
    L->addAtIndex(3,6);
    L->addAtHead(3);
    cout << L->get(1)<<endl;
    L->traverse();


  
    L->addAtHead(3);
    cout << L->getTail() << endl;
    L->addAtHead(7);
    L->addAtTail(234);
    cout << L->getHead() << "  " << L->getTail() << "\n";
    L->addAtHead(2);
    cout << L->getHead()<<"  "<<L->get(2) << endl;
    L->addAtHead(167);
    L->addAtIndex(3,70);
    cout << L->get(1) <<"  " <<L->getHead() <<"  "<<L->getSize()<<endl;
    L->addAtTail(90);
    cout << L->getTail() <<"  "<< L->get(4) << endl;
    L->traverse();
    L->deleteAtIndex(2);
    L->deleteAtIndex(1);
    L->deleteAtIndex(72);
    L->traverse();
    
*/
/*
    L->addAtHead(1);
    L->addAtTail(3);
    L->traverse();
    L->addAtIndex(1,2);
    L->traverse();
    cout<<L->get(1)<<endl;
    L->deleteAtIndex(1);
    L->traverse();
    cout<<L->get(1)<<endl;
*/  

    delete L;


    string fc[1000] = {"addAtHead","get","addAtTail","deleteAtIndex","addAtHead","deleteAtIndex","get","addAtTail","addAtHead","addAtTail","addAtTail","addAtTail","addAtIndex","get","addAtIndex","addAtHead","deleteAtIndex","addAtIndex","addAtHead","addAtIndex","deleteAtIndex","get","addAtTail","deleteAtIndex","deleteAtIndex","addAtTail","addAtTail","addAtIndex","addAtHead","get","get","addAtTail","addAtTail","addAtTail","addAtTail","addAtIndex","addAtIndex","addAtHead","addAtIndex","addAtTail","addAtHead","addAtHead","addAtHead","addAtHead","addAtHead","addAtHead","addAtTail","addAtHead","deleteAtIndex","addAtHead","get","addAtHead","get","addAtHead","addAtHead","addAtHead","addAtIndex","deleteAtIndex","addAtTail","deleteAtIndex","get","addAtIndex","addAtHead","addAtTail","deleteAtIndex","addAtHead","addAtIndex","deleteAtIndex","deleteAtIndex","deleteAtIndex","addAtHead","addAtTail","addAtTail","addAtHead","addAtTail","addAtIndex","deleteAtIndex","deleteAtIndex","addAtIndex","addAtHead","addAtHead","addAtTail","get","addAtIndex","get","addAtHead","addAtHead","addAtHead","addAtIndex","addAtIndex","get","addAtHead","get","get","addAtTail","addAtHead","addAtHead","addAtTail","addAtTail","get","addAtTail"};
    
    

    int* param[1000] = [[8],[1],[81],[2],[26],[2],[1],[24],[15],[0],[13],[1],[6,33],[6],[2,91],[82],[6],[4,11],[3],[7,14],[1],[6],[99],[11],[7],[5],[92],[7,92],[57],[2],[6],[39],[51],[3],[22],[5,26],[9,52],[69],[5,58],[79],[7],[41],[33],[88],[44],[8],[72],[93],[18],[1],[9],[46],[9],[92],[71],[69],[11,54],[27],[83],[12],[20],[19,97],[77],[36],[3],[35],[16,68],[22],[36],[17],[62],[89],[61],[6],[92],[28,69],[23],[28],[7,4],[0],[24],[52],[1],[23,3],[7],[6],[68],[79],[45,90],[41,52],[28],[25],[9],[32],[11],[90],[24],[98],[36],[34],[26]];

    parse(fc,fc);
}
