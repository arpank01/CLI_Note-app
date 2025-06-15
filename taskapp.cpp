#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;
vector<string>liist={};
string newNote;
void addNote(){
    
    
    cout<<"Add new Note->";
    
    
    getline(cin,newNote);
     
 
    
    

}
int main() {
   while(true){
    
    addNote();
    system("cls");
    liist.push_back(newNote);
    cout<<"---------------------Tasks"<<endl;
    for(int i=0;i<liist.size();i++){
        cout<< "Task"<<" "<<i<<"->"<<liist[i]<<endl;
    }
    cout<<"---------------------"<<endl;
    
   }
 
}
