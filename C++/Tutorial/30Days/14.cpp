	// Add your code here
    Difference(const vector<int> e) 
        : elements(e) {
    }

    void computeDifference() {
        maximumDifference = 0;
        
        for(int i = 0; i < elements.size() - 1; ++i) {
            for(int j = 0; j < elements.size(); ++j) {
                maximumDifference = max(maximumDifference, abs(elements[i] - elements[j]));
            }
        }
    }