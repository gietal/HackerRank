class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
  		// Write your constructor
        Student(string _firstName, string _lastName, int _id, const vector<int> _scores) 
        : Person(_firstName, _lastName, _id), testScores(_scores)
        {
        }
  		// Write char calculate()
        char calculate() {
            auto avg = average();
            if (avg < 40)
                return 'T';
			if (avg < 55)
				return 'D';
			if (avg < 70)
				return 'P';
			if (avg < 80) 
				return 'A';
			if (avg < 90) 
				return 'E';
			return 'O';
        }
    
        float average() {
            int testNum = testScores.size();
            if(testNum == 0) {
                return 0.0f;
            }
            
            float sum = 0.0f;
            
            for(int i = 0; i < testNum; ++i) {
                sum += (float)testScores[i];
            }
            
            return sum / testNum;
        }
};