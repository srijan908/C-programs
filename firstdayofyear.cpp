#include<bits/stdc++.h>
using namespace std;

class Day{
    int year;
    vector<string> days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    public:
        Day(int year){
            this->year = year;
        }
        int fun_ceil(int n,int k){
            if(n%k==0){
                return n/k;
            }
            else {
                int x = (n/k)+1;
                return x;
            }
        } 
        string find_day(){
            int dif = abs(2001-year);
            int leap_years = fun_ceil(dif,2);
            dif+=leap_years;
            dif%=7;
            return days[dif];
        }
};
int main(){
    int n;cin>>n;
    Day d(n);
    cout<<d.find_day();
}