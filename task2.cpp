string month1, month2, month3;
    double rain1, rain2, rain3;


    cout << "Enter the name of the first month: ";
    getline(cin, month1);

    cout << "Enter the name of the second month: ";
   getline(cin, month2);

    cout << "Enter the name of the third month: ";
    getline(cin, month3);


    cout << "Enter the rainfall (in inches) for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter the rainfall (in inches) for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter the rainfall (in inches) for " << month3 << ": ";
    cin >> rain3;


    double average = (rain1 + rain2 + rain3) / 3.0;



    cout << "\nThe average rainfall for " << month1 << ", " << month2
         << ", and " << month3 << " is " << average << " inches." << endl;

    return 0;
}


