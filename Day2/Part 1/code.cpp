#include<bits/stdc++.h>
using namespace std;


int main(){


    ifstream file("inp.txt");

    if (!file) {
        cout << "File not opened";
        return 0;
    }

    string line;
    long long ans=0;
    string input="";
     while (getline(file,line)) {
        input+=line;
     }
    // cout<<input<<endl;
    string token;
    stringstream ss(input);
    char hyp;
   
    while (getline(ss, token, ',')) {
        stringstream s1(token);
        long long n1,n2;
        s1>>n1>>hyp>>n2;

        for (long long i=n1;i<=n2;i++){
            string nums=to_string(i);
            int size=nums.length();
            if(size%2 == 0){
                string s1=nums.substr(0,size/2),s2=nums.substr(size/2);
                if(s1==s2){
                    ans+=i;
                }
            }
        }

    }
    cout<<ans;

    file.close();
   
}
