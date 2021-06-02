#include<iostream>
using namespace std;
int numberOfDigits(int x) 
{ 
	int i = 0; 
	while (x) { 
		x /= 10; 
		i++; 
	} 
	return i; 
}

void printLastKDigits(int a) 
{ 
  int k=9;
	

	int temp = 1; 
	for (int i = 1; i <= k; i++) 
		temp *= 10; 

	temp = a; 

	for (int i = 0; i < k - numberOfDigits(temp); i++) 
		cout << 0; 
 
	if (temp) 
		cout << temp; 
}
__int128_t factorial(__int128_t n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
}

void calc(int m, int n){
    
    __int128_t n1 = m*n;
    __int128_t n2 = factorial(n1);

    __int128_t n3 = factorial(n1/2);

    __int128_t n4 = n2/(n3*n3);
    cout<<n4<<endl;
    printLastKDigits(n4);
}
 
 int main(){
    int m,n;

    cin>>m>>n;

    if((m<=10 && m>=1) && (n<=10 && n>=1)){
        if((m*n)%2!=0)
            cout<<100;
        else
            calc(m,n);
    }
    else
    {
        exit(100);
    }
    
 }