#include<bits/stdc++.h>
using namespace std;

map<string ,int> m;

void addElement(){

   int element;
   string name;
   cin>>name>>element;
 map<string,int >::iterator it = m.find(name);
   if (it != m.end()) {
           
          int n= m[name]+element;
          m.erase(name);
          m.insert(make_pair(name,n));
        }
        else{
            m.insert(make_pair(name,element));
        }
}

void deleteElement(){

    string name;
    cin>>name;  
    m.erase(name);
}

void findElement(){
    
  string name;
  cin>>name;

   map<string,int >::iterator it = m.find(name);
   if (it != m.end()) {
           
           cout<<m[name]<<endl;
        }
        else{
            cout<<0<<endl;
        }

}


int main(){

int times;
cin>>times;

while (times--)
{
     int choice;
     cin>>choice;

     switch (choice)
     {
     case 1 :
         addElement();
         break;
     case 2 :
         deleteElement();
         break;
    case 3 :
         findElement();
         break;
     default:
         break;
     }   
}
}