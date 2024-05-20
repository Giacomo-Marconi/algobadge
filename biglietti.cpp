#include <stdio.h>
#include <assert.h>

int compra(int N, int M, int A, int B) {
    if(N*A<B*N/M+1) return N*A;

    int tot=0;
    while(N>=M){
        tot+=B;
        N-=M;
    }

    if(N*A<B) tot+=(N * A);
    else tot+=B;



    return tot;
}

int main() {
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}
