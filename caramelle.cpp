#include <iostream>
#include <vector>

using namespace std;

long long int mcm(long long int x, long long int y) {
    if(x==0 || y==0) return 0;

    long long int m=x*y;

    while (y > 0) {
        long long int r = x % y;
        x = y;
        y = r;
    }
    return m/x;
}

long long int solve(){
    int N;
    cin >> N;
    int x;
    long long int r;
    cin >> r;


    for(int i=1; i<N; i++){
        cin >> x;
        r=mcm(r, x);
    }




    return r;
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        cout << "Case #" << i+1 << ": " << solve() << endl;
    }
    return 0;
}