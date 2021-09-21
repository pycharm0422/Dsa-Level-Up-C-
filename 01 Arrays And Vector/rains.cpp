
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int trapped_water(vector<int> heights){
    int n = heights.size();

    if (n <= 2){
        return 0;
    }

    vector<int> left(n,0), right(n,0);
    left[0] = heights[0];
    right[n-1] = heights[n-1];

    for(int i=1; i<n; i++){
        left[i] = max(left[i-1], heights[i]);
        right[n-1-i] = max(right[n-i], heights[n-i-1]);

    }
    int water = 0;
    for(int i=0; i<n; i++){
        water += min(left[i], right[i] - heights[i]);
    }
    return water;
}






int main(){
    vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trapped_water(water)<<endl;
    return 0;
}