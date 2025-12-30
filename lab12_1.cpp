#include<iostream>
#include<ctime>
using namespace std;

long long int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(int i){
    if(i == 0 || i == 1) return i;
    return fibonacci(i-1) + fibonacci(i-2);
}
