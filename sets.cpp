#include<bits/stdc++.h>
using namespace std;

set<int> s;

void addElement(){

   int element;
   cin>>element;
   s.insert(element);
}

void deleteElement(){

    int element;
    cin>>element;  
    s.erase(element);
}

void findElement(){
    
  int element;
  cin>>element;

   set< int >::iterator it = s.find(element);
   if (it != s.end()) {
           
           cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
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