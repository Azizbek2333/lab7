bool checkIncreasingDigitsRecursive(int n) {
    if (n < 10) {
        return true;
    }
    int lastDigit = n % 10;
    int previousDigit = (n / 10) % 10;
    if (previousDigit >= lastDigit) {
        return false;
    }
    return checkIncreasingDigitsRecursive(n/10);
}
