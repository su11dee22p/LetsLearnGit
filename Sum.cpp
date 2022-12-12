#include <iostream>
using namespace std;
int a,b;
void add (int x,int y){
    a=x;
    b=y;

}
void display(){
    cout<<"The sum of two number is"<<" "<<a+b<<endl;
}

int main(){
    add(10,20);
    display();
    return 0;

}