

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

vector<vector<int>> triplets(vector<int> arr, int sum){
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;

    for(int i=0; i<=arr.size()-3; i++){

        int j = i + 1;
        int k = arr.size() - 1;


        int newSum = sum - arr[i];
        while(j < k){
            if(arr[j] + arr[k] == newSum){
                result.push_back({arr[i], arr[j], arr[k]});
                j ++;
                k --;
                
            }else if(arr[j] + arr[k] > newSum){
                k--;
            }else{
                j ++;
            }
        }
    }
    return result;
}


int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int S = 18;
    auto result = triplets(arr, S);

    for(auto v: result){
        for(auto no: v){
            cout<<no<<", ";
        }
        cout<<endl;
    }
}