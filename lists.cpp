#include <iostream>
#include <vector>
using namespace std;
vector <string> history;

void showLines(const vector<string>& lines){
    system("cls");
    for (const auto& line : lines){
        cout<<line<<endl;
    }
}

int main(){
    string y;
    string x;
    vector<string> lines; 
    bool run = true;

    cout<<"que quieres hacer?\n";
    cout<<"add\n";
    cout<<"delete\n";
    cin>>x;

    while(run == true){

        if(x == "add"){
            cout<<"escriba para agregar: \n";
            cin>>y;
            if(y == "exit()"){
                run = false;
                return 0;
            }
            else{
                lines.push_back(y);
                showLines(lines);
            }
        }

    }
    return 0;
}