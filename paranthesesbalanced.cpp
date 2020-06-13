#include<iostream>
#include<stack>
using namespace std;

bool Arepair(char opening,char closing)
{
     if(opening=='('&&closing==')')
        return true;
     else if(opening=='{'&&closing=='}')
        return true;
     else if(opening=='['&&closing==']')
        return true;
     else
        return false;

}

bool AreParanthesisBalanced(string exp)
{
    stack<char>s;
    for(int i=0;i<exp.length();i++)
    {
        //if opening paranthesis in string push into stack
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
            s.push(exp[i]);
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {

            if(s.empty()||!Arepair(s.top(),exp[i]))
                return false;
            else
                s.pop();
        }
    }
    s.empty()?true:false;
}
int main()
{
    string exp;
    cout<<"enter an expression:";
    cin>>exp;
    if(AreParanthesisBalanced(exp))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
}
