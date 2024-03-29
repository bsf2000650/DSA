#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class kQueue{
    public:
        int n;
        int k;
        int *arr;
        int *front;
        int *rear;
        int freeSpot;
        int *next;

        kQueue(int n, int k){
            this->n = n;
            this->k = k;
            arr = new int[n];
            front = new int[k];
            rear = new int[k];
            for (int i = 0; i < k; i++)
            {
                front[i] = rear[i] = -1;
            }

            next = new int[n];
            for (int i = 0; i < n; i++)
            {
                next[i] = i+1;
            }
            next[n-1] = -1;
            
            freeSpot = 0;
        }

        void enqueue(int data, int qn){

            // overflow
            if(freeSpot == -1){
                cout << "Queue overflowed " << endl;
                return;
            }   

            //find first free index
            int index = freeSpot;

            // update freeSpot
            freeSpot = next[index];

            // check whether first element
            if(front[qn-1])
                front[qn-1] = index;
            else
                next[rear[qn-1]] = index;

            // update next
            next[index] = -1;

            // updatae rear
            rear[qn-1] = index;

            // push element
            arr[index] = data;
        }

        int dequeue(int qn){
            // underflow checking
            if(front[qn-1] == -1){
                cout << "Underflow" << endl;
                return -1;
            }
            
            // find index to pop
            int index = front[qn-1];

            // front ko aage barhao
            front[qn-1] = next[index];

            // freeslots ko manage karo
            next[index] = freeSpot;
            freeSpot = index;
            return arr[index];
        }
};

int main(){
    kQueue q(10,3);

    q.enqueue(1,1);
    q.enqueue(2,1);
    q.enqueue(3,1);
    q.enqueue(4,2);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(2) << endl;
    
}