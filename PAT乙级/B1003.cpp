#include<cstdio>
#include<cstring>

const int maxn = 110;

char a[maxn];


void PAT(char a[]){
    int num_p=0, num_t=0, num_a=0, others=0;
    int local_p = -1, local_t = -1;
    for(int i = 0; i < strlen(a); i++){
        if(a[i] == 'P') {
            num_p++; local_p = i;
        }else if(a[i] == 'A') {
            num_a++;
        }else if(a[i] == 'T'){
            num_t++; local_t = i;
        }else{
            others++;
        }
    }
    if(num_p != 1 || num_t != 1 || others != 0 || local_t-local_p <= 1) {
            printf("NO\n"); return;
    }
    // APAAATAA->APAATA->APAT
    int x = local_p, y = local_t - local_p -1, z = strlen(a) - local_t - 1;
    if(z - x * (y-1) == x) printf("YES\n");
    else printf("NO\n");
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        scanf("%s", a);
        PAT(a);
    }

    return 0;
}
