
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int largestBand(vector<int> arr){
    unordered_set<int> s;
    int n = arr.size();
    int largest = 1;

    for(int x: arr){
        s.insert(x);
    }
    for(auto element: s){
        int parent = element - 1;
        if(s.find(parent) == s.end()){
            int cnt = 1;
            int nextNum = element + 1;

            while(s.find(nextNum) != s.end()){
                cnt += 1;
                nextNum += 1;
            }
            if(largest < cnt){
                largest = cnt;
            }
        }
    }
    return largest;
}

int main(){
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    cout<<largestBand(arr)<<endl;
    return 0;
}