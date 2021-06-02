// A Better (than Naive) Solution to find all divisiors 
#include <bits/stdc++.h> 
using namespace std;
  
// Function to print the divisors 
void printDivisors(long long n) 
{ 
  	vector<long long> s;
    // Note that this loop runs till square root 
    for (long long i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                s.push_back(i); 
  
            else // Otherwise print both 
            {
              s.push_back(i);
              s.push_back(n/i);
            }
        } 
    } 
  	sort(s.begin(),s.end());
  	for(long long i=0;i<s.size();i++)
      	cout<<s[i]<<"\n";
} 
  
/* Driver program to test above function */
int main() 
{ 
    long long t;cin>>t;
    printDivisors(t);
    return 0; 
} 