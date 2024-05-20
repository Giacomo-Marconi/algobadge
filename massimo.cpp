#include <vector>
using namespace std;

int trova_massimo(int N, vector<int> V) {

    int max=V[0];
    for (int i = 1; i <N ; ++i) {
        if(V[i]>max) max=V[i];
    }

    return max;
}
