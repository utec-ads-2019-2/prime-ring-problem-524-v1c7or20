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
    if(n==m-1 and is_prime(1+ans[m-1])){
        for (int i = 0; i < m; i++) {
            printf(i == m - 1? "%d" : "%d ", ans[i]);
        }cout<<endl;
        return;
    }
    for (int j = 2; j <= m; ++j) {
        if (!(used[j]) and is_prime(ans[n]+j)){
            used[j]=true;
            ans[n+1]=j;
            make(n+1,m);
            used[j]=false;
        }
    }
}

int main() {
    int n;
    int T = 0;
    while(scanf("%d", &n) == 1) {
        T++;
        if(T > 1) printf("\n");
        ans[0] = 1;
        printf("Case %d:\n", T);
        make(0,n);
    }
}