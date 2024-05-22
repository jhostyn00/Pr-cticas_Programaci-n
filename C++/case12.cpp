#include <iostream>
using namespace std;
char f1(char c){
    return c == 'c' ? 'a' : c + 1;
}

char f2(char &c){
    c = f1(c);
    return c;
}

int main(){
    char x = 'x';

    cout<<f2(x);
    cout<<f2(x);
    cout<<f2(x)<<endl;
}