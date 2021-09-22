#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
#include<climits>


using namespace std;

vector<int> vectorProduct(vector<int> arr){
    int n = arr.size();
    vector<int> output(n,1);
    int mul = 1;
    for(int i=0; i<n; i++){
        mul = mul * arr[i];
    }

    for(int i=0; i<n; i++){
        output[i] = mul/arr[i];
        // cout<<output[i]<<endl;
    }
    return output;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    // auto p = vectorProduct(arr);
    // cout<<vectorProduct(arr)<<endl;
    return 0;
}