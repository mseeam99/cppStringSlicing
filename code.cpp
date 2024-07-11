#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    unordered_map <string,string> myMap ;

    myMap["Labib"] = "Razu";
    myMap["Razu"]  = "Mizan";
    myMap["Mizan"] = "Sagor";
    myMap["Sagor"] = "Seeam";
    myMap["Seeam"] = "GOD";

    string first = "Labib";
    string last  = "Seeam";

    for(auto it = myMap.begin(); it != myMap.end(); it++){
        cout<<it->first<<endl;
        cout<<it->second<<endl;
    }

    cout<<"-------------------------"<<endl;
    int count = 0;

    while(true){
        if (myMap.find(first) != myMap.end() && first != last){
            first = myMap[first];
            count++;
            cout<<first<<endl;
        }else{
            break;
        }
    }

    cout<<"-------------------------"<<endl;
    cout<<count<<endl;
    
    cout<<"-------------------------"<<endl;
    string str = "Mizan";
    int index = str.find("za");
    cout<<index<<endl;
    string firstSubString = str.substr(0,index);
    cout<<firstSubString<<endl;
    string lastSubString = str.substr(index);
    cout<<lastSubString<<endl;
}