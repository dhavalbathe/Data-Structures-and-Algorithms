#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //creating and writing file
    ofstream f("example.txt");

    if(!f)
    {
        cerr << "error creating file";
        return 1;
    }

    f << "hello, this is the sample text lines."<<endl;
    f << "we are demonstrating file operations in c++."<<endl;

    cout << "file created and written successfully"<<endl;

    f.close();

    //reading from the file
    ifstream file("example.txt");
    if(!file)
    {
        cerr << "Error opening file"<<endl;
        return 1;
    }

    string str;
    cout<<"Reading from line"<<endl;

    while(getline(file, str))
    {
        cout<< str <<endl;
    }

    file.close();

    //append in the file

    ofstream appendfile("example.txt", ios::app);

    if(!appendfile)
    {
        cerr << "error while appending in the file"<<endl;
        return 1;
    }

    appendfile << "This line is appended in the file" <<endl;

    cout << "test appended at the end successfully" <<endl;
    appendfile.close();
    return 0;
}