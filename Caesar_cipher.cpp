#include <bits/stdc++.h>

using namespace std;

string caesarCipherE(string s, int k) {
    string d="";
    int i;
    for(i=0;i<s.size();i++){
        if(isupper(s[i])){
            d+= char( (int(s[i]) + k -65)% 26 + 65);
        }
        else if(islower(s[i])){
            d+= char( (int(s[i]) + k -97)% 26 + 97); 
        }
        else{
            d+= s[i];
        }
    }
    return d;
}

string caesarCipherD(string s, int k) {
    string d="";
    int i;
    for(i=0;i<s.size();i++){
        if(isupper(s[i])){
            if(int(s[i]) -k > 64)
                d+= char( (int(s[i]) - k -65 )% 26 +65);
            else
                d+= char( (int(s[i]) - k -65 +26)% 26 +65);

        }
        else if(islower(s[i])){
            if(int(s[i])-k>96)
                d+= char( (int(s[i]) - k -97 )% 26 +97); 
            else   
                d+= char( (int(s[i]) - k -97 +26)% 26 +97); 
        }
        else{
            d+= s[i];
        }
    }
    return d;
}

int main()
{   cout<< "Caesar Cipher"<<endl;
    cout<< "Enter string and shift:-" <<endl;
    string n_temp;
    getline(cin, n_temp);

    int n = n_temp.size();

    int k;
    cin>>k;

    cout<<"Encryption:-"<<endl;
    string result = caesarCipherE(n_temp, k);
    cout << result << "\n";

    cout<<"Decryption:-"<<endl;
    result = caesarCipherD(result, k);
    cout << result << "\n";


    return 0;
}