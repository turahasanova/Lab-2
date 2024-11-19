#include <iostream> 
using namespace std; 
int main() { 
    int hundurluk; 
    cout<<"Ucbucagin hundurluyunu daxil edin:"; 
    cin>>hundurluk; 
    
    for(int i=1; i<=hundurluk; i++){ 
        for (int j=1; j<=hundurluk-i; j++){ 
        cout<<" "; 
        }
        for(int j=1; j<=2*i-1; j++){
        cout<<"*";
    	}
        cout<<endl;
    }
        return 0; 
}
