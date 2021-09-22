#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
#include<climits>

using namespace std;

pair<int, int> minDifference(vector<int> arr1, vector<int> arr2){
    int fst;
    int scd;
    int min_diff = INT_MAX;
    for(int i=0; i<arr1.size(); i++){

        for(int j=0; j<arr2.size(); j++){
            if(arr1[i] >= arr2[j]){
                int diff = arr1[i] - arr2[j];
                if(diff < min_diff){
                    min_diff = diff;
                    fst = arr1[i];
                    scd = arr2[j];
                }

            }else{
                int diff = arr2[j] - arr1[i];
                if(diff < min_diff){
                    fst = arr1[i];
                    scd = arr2[j];
                }
            }

        }
    }

    return {fst, scd};
}

int main(){
    vector<int> arr1 = {23,5,10,17,30};
    vector<int> arr2 = {26,134,135,14,19};

    auto p = minDifference(arr1, arr2);
    cout<<p.first<<" and "<<p.second<<endl;
    return 0;
}

