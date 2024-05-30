int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    // return (float) a / (float) b; // type casting
    return static_cast<float>(a) / static_cast<float>(b);   //type casting
}