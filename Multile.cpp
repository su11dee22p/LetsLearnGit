#include <iostream>
using namespace std;
int a,b;
void Multiply (int x,int y){
    a=x;
    b=y;

}
void display(){
    cout<<"The Multiple of  A and B is"<<" "<<a*b<<endl;
}

int main(){
    Multiply(10,20);
    display();
    return 0;

}