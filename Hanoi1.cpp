#include <iostream>

using namespace std;

void torre(int n, char a, char b, char c){
if(n == 1){
    cout << "Mover disco "<< n << " do pino " << a << " para pino " << b << "\n";

}
else{
    torre(n-1,a, c, b);
    cout << "Mover disco " << n << " do pino " << a << " para pino " << b << "\n";
    torre(n-1,c,b,a);
}

}

int main()
{
    int disco;
    char a='A';
    char b = 'B';
    char c = 'C';
    cout << ""; 
    cin >> disco;
    torre(disco,a,b,c);

    return 0;
}

