#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    char s[100];
    int top=-1;
    for(char *c=&str[0]; *c!='\0';c++){
        if(*c=='{'||*c=='['||*c=='('){
            top++;
            s[top]=*c;
        }
        else if((*c==')' && s[top]=='(')||
        (*c=='}' && s[top]=='{')||
        (*c==']' && s[top]=='[')){
            top--;
        }
        else if((*c==')' && s[top]!='(')||
        (*c=='}' && s[top]!='{')||
        (*c==']' && s[top]!='[')){
            cout<<"Its not a balanced bracket.";
            break;
         }
        

        
    }
    if(top==-1){
        cout<<"Its a balanced bracket.";}
    
    return 0;
}