

class Calculator {
    public:
    
    class Exception: public exception {
        virtual const char* what() const throw() {
            return "n and p should be non-negative";
        }
    };
    
    int power(int n, int p) {
        if(n < 0 || p < 0) {
            throw Exception();
        }
        return pow(n, p);
    }
};