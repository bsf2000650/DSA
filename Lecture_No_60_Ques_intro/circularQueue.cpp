#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{

    public:
        int *arr;
        int size;
        int front;
        int rear;

        CircularQueue(int n){
            size = n;
            arr = new int[size];
            front = rear = -1;
        }
    
        bool enqueue(int value){
            if((front == 0 && rear == size - 1) && (rear == (front-1)%(size-1))){
                // cout << "Queue is full" << endl;
                return false;
            }
            else if(front == -1){
                front = rear = 0;
            }
            else if(rear == size-1 && front != 0){
                rear = 0;
            }else{
                rear++;
            }
            arr[rear] = value;
            return true;
        }

        int dequeue(){
            if(front == -1){
                // cout << "Queue is empty" << endl;
                return -1;
            }
            int ans = arr[front];
            arr[front] = -1;
            if(front == rear){
                front = rear = -1;
            }else if(front == size - 1){
                front = 0;
            }else{
                front++;
            }
            return ans;
        }

};

int main(){

}