#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string ten;
    string content;
    cout << "Ten cua ban: ";
    getline(cin, ten);
    cout << "Nhap 1 cau mo ta ve ban than cua ban: ";
    getline(cin, content);

    ofstream OutputFile("index.html");
    // OutputFile.open("index.html");

    cout << "Writing datas to the file index.html \n";
    OutputFile << "<html> \n";
    OutputFile << "<head> \n";
    OutputFile << "</head> \n";
    OutputFile << "<body> \n";
    OutputFile << "\t<center> \n";
    OutputFile << "\t\t<h1>" << ten << "</h1>\n";
    OutputFile << "\t</center> \n";
    OutputFile << "\t<hr /> \n";
    OutputFile << "\t" << content << endl;
    OutputFile << "\t<hr /> \n";
    OutputFile << "</body> \n";
    OutputFile << "</html> \n";
    OutputFile.close();

    cout << "Done!";
}