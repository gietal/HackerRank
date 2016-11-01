
    // Declare second integer, double, and String variables.
    int i2 = 0;
    double d2 = 0.0;
    string s2 = "";

    // Read and save an integer, double, and String to your variables.
    cin >> i2 >> d2;
    std::getline(cin, s2); // hack, this will read the \n on the d2
    std::getline(cin, s2); // this will actually read the line

    // Print the sum of both integer variables on a new line.
    cout << i + i2 << endl;

    // Print the sum of the double variables on a new line.
    cout << std::fixed << std::setprecision(1) << d + d2 << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + s2 << endl;
