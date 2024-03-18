#include<iostream>
using namespace std;

void reachHome(int src, int des){

    cout << "Src = " << src << " Dest = " << des << endl;

    if (src==des)
    {
        cout << "Home reached ";
        return ;
    }
    src++;
    reachHome(src,des);
    
}

int main(){
    int src = 1;
    int des = 10;

    reachHome(src,des);
    
    return 0;
}