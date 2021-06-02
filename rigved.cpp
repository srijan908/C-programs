    #include<bits/stdc++.h>
    using namespace std;

    int calc() {
        int n;cin>>n;
        vector<int> numberList(n);
        for(int i=0;i<n;i++){
            cin>>numberList[i];
        }
        int n2;cin>>n2;
        int s;cin>>s;

        for(int i=0;i<n;i+=s){
            bool found = false;
            for(int j=i;j<i+s;j++){
                if(numberList[j]==n2){
                    found = true;
                }
            }
            if(!found)
                return 0;
        }
        return 1;
    }
    
    
    int main(){
        
        //cout<<calc();
            
        int k = 2;
        while(true){
            if(k*8>3215687)
                break;
            k++;
        }
        cout<<k;
        return 0;
    }