class Calculator: public AdvancedArithmetic {
    public:
    virtual int divisorSum(int n) {
        int sum = 0;
        for(int i = 1; i < n; ++i) {
            if(n % i == 0) {
                // n is divisible by i
                sum += i;
            }
        }
        // divisible by itself
        sum += n;
        
        return sum;
    }
};