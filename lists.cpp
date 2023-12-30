#include <iostream>
#include <vector>
#include <algorithm>
#include "test.hpp"
using namespace std;

void showLines(const vector<string>& lines){
    system("cls");
    for (const auto& line : lines){
        cout<<line<<endl;
    }
}

int main(){
    int r = 5;
    uwu(r);
    
    int w;
    string y;
    string x;
    vector<string> lines; 
    bool run = true;
    cout<<r<<endl;
    cout<<"que quieres hacer?\n";
    cout<<"add\n";
    cout<<"delete\n";
    getline(cin,x);

    while(run == true){

        if(x == "add"){
            cout<<"escriba para agregar: \n";
            getline(cin,y);
            if(y == "quit_app"){
                run = false;
                return 0;
            }
            else if(x == "add"){
                w++;
                lines.push_back(to_string(w) + ".- " + y);
                showLines(lines);
            }
        }
        else if(x == "delete"){

        }
        else if(x != "delete" || x != "add"){
            cout<<"ese comando no existe porfavor seleccione add o delete!!\n";
            cout<<"que quieres hacer?\n";
            cout<<"add\n";
            cout<<"delete\n";
            getline(cin,x);    
        }

    }
    return 0;
}