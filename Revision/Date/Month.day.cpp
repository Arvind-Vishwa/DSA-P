// find month of day
#include<iostream>
using namespace std;

void findDays(string s){
    int i=0;
    string month="";
    while(i < s.size()){
        int ch=s[i];
        month.push_back(tolower(ch));
        i++;
    }

    // check month
    if(month == "janauary"){
        cout<<"31 Days"<<endl;
    }
    else if(month == "febuary"){
        cout<<"28 Days"<<endl;
    }
    else if(month == "march"){
        cout<<"31 Days"<<endl;
    }
    else if(month == "april"){
        cout<<"30 Days"<<endl;
    }
    else if(month == "may"){
        cout<<"31 Days"<<endl;
    }
    else if(month == "june"){
        cout<<"30 Days"<<endl;
    }
    else if(month == "july"){
        cout<<"31 Days"<<endl;
    }
    else if(month == "august"){
        cout<<"31 Days"<<endl;
    }
    else if(month == "september"){
        cout<<"30 Days"<<endl;
    }
    else if(month == "october"){
        cout<<"31 Days"<<endl;
    }
    else if(month == "november"){
        cout<<"30 Days"<<endl;
    }
    else if(month == "december"){
        cout<<"31 Days"<<endl;
    }else{
        cout<<"No month founded"<<endl;
    }
}


int main(){
    string s;
    cout<<"Enter the name of months :";
    cin>>s;
    findDays(s);

}