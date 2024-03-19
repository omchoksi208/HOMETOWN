#include<iostream>
using namespace std;

void add(int r1,int r2,int b1,int b2){

    cout<<r1+r2<<" + "<<b1+b2<<"i";
}
void sub(int r1,int r2,int b1,int b2){

    cout<<r1+r2<<" + "<<b1+b2<<"i";
}
void mul(int r1,int r2,int b1,int b2){

    cout<<r1*r2 - b1*b2 <<" + "<<r1*b2 + r2*b1 <<"i";
}
void div(int r1,int r2,int b1,int b2){

    cout<<r1*r2 + b1*r2 / (r2*r2 +b2*b2)<<"+"<<(r2*b1-r1*b2)/ (r2*r2 +b2*b2)<<"i";
}
void neg(int r1,int r2,int b1,int b2){

    cout<<-1*r1<<"-"<<"("<<-1*b1<<"i)"<<endl;
    cout<<-1*r2<<"-"<<"("<<-1*b2<<"i)";
}
int main(){
    int r1,r2,b1,b2; 
    char c;
    cout<<"Enter real part :";
    cin>>r1;
    cout<<"Enter Imaginary part :";
    cin>>b1;
    cout<<"Enter real part :";
    cin>>r2;
    cout<<"Enter Imaginary part :";
    cin>>b2;
    cout<<"Choose the operation"<<endl;
    cout<<"(+) Addition"<<endl<<"(-) Substraction"<<endl<<"(/) Division"<<endl<<"(x) Multiplication"<<endl<<"(!) Negation"<<endl<<"Enter your choice ";
    cin>>c;
     
     switch(c){
  case '+' : add( r1,r2,b1,b2);break;
  case '-' : sub( r1,r2,b1,b2);break;
  case '/' : div( r1,r2,b1,b2);break;
  case 'x' : mul( r1,r2,b1,b2);break;
  case '!' : neg( r1,r2,b1,b2);break;
              
     }
    return 0;
}