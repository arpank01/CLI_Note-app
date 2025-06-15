#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;
vector<string> liist = {};
string newNote;
void addNote()
{

    cout << "Add new Note->";
    
    getline(cin, newNote);


    
}
//refreshing the tasks 
void refresh(vector<string>&refreshing){
    for(int i=0;i<refreshing.size();i++){
        
                cout << "Task" << " " << i + 1 << "->" << refreshing[i] << endl;
            
           
    }
     cout << "---------------------" << endl;
    
}
int main()
{
    while (true)
    {
        
        addNote();
        //quit option 
        if (newNote == ":q") {
            system("cls");
            cout << "---------------------Tasks" << endl;
           refresh(liist);
            
            break;};
       //delete option 
        if (newNote == "-d")
        {
            int inp;
            cout << " Token number of task to be deleted : " ;
            cin >> inp;
            cin.ignore();
            vector<string>::iterator it = liist.begin();
            liist.erase(it + inp-1);
            
            
            system("cls");
            cout << "---------------------Tasks" << endl;
           refresh(liist);
        
        }
        else
        { 

        
            system("cls");

            liist.push_back(newNote);
            cout << "---------------------Tasks" << endl;
           refresh(liist);
        }
    }
    return 0;
}
