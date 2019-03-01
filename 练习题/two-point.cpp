while(i < j){
    if(a[i] + a[j] == m){
        printf("%d %d\n", i, j);
        i++;
        j--;
    }else if(a[i] + a[j] > m){
        j--;
    }else{
        i++;
    }
}