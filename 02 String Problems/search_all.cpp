#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main(){
    string paragraph = "Faraz is a very good boy. He lives in bangalore. You might have heard of the place. Have you ?????. What do you think of the climate change that is happening in the city of india i.e bangalore is teh only one city in which you can live in so no in the one ";

    string word;
    getline(cin, word);
    int index = 0;
    vector<int> result = {};
    while(index != -1){
        index = paragraph.find(word, index);
        if(index != -1){
            result.push_back(index);
            index = index + 1;
        }
        
    }
    // cout<<count<<endl;

    return 0;
}