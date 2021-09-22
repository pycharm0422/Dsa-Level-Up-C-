#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int minSwaps(vector<int> arr){
    int n = arr.size() - 1;
    int ans = 0;
    pair<int, int> ap[n];

    for(int i=0; i<n; i++){
        ap[i].first = arr[i];
        ap[i].second = i;
    }

    sort(ap, ap+n);
    vector<bool> visited(n, false);
    for(int i=0; i<n; i++){
        int old_position = ap[i].second;
        if(visited[i] == true or old_position == i){
            continue;
        }
        int node = i;
        int count = 0;
        while(!visited[node]){
            visited[node] = true;
            int new_node = ap[node].second;
            node = new_node;
            count ++;
        }

        ans += (count - 1);
    }
    return ans;
}

int main(){
    vector<int> arr={5,4,3,2,1};
    cout<<minSwaps(arr)<<endl;
    return 0;
}