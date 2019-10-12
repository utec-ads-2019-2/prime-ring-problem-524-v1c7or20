#include <iostream>
#include <vector>

using namespace std;

int ans[20]={0};
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
bool used[20] = {false};

bool is_prime(int p) {
    for(auto i : prime)
        if(p == i) return true;
    return false;
}
void make(int n, int m){
    if(n==m-1 and is_prime(ans[n]+ans[n-1])){
        for (int i = 0; i < m; i) {
            cout<<ans[i]<<" ";
        }cout<<endl;
        return;
    }
    for (int j = 2; j < m; ++j) {
        if (!(used[j]) and is_prime(ans[n]+j)){
            
        }
    }
}

int main() {
    int n=2;
    ans[0]=ans[n]=1;
    auto * vector1 = new vector<vector<int>>(n/2);

    return 0;
}