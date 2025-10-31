int isEven(int a) {
    if(n % 2 == 0){
        return 1;
    }else {
        return 0;
    }
}
int countDigitsRecursive(int n) {
    if (n < 0) {
        n = -n;
    }
    if (n < 10) {
        return isEven(n);
    }
    else {
        return isEven(n) + countDigitsRecursive(n / 10);
    }
}
