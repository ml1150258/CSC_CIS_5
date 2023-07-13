#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
    float l,n,i,p;
    cin>>l>>n>>i;
    float c=pow(1+i,n);
    p = i<=0? l/n: i*l*c/(c-1);
    cout<<p<<endl;
    return 0;
}