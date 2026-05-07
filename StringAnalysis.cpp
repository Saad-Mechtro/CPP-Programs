#include<iostream>
#include<string>
using namespace std;

int main()
{
    string text;

    int characters = 0;
    int spaces = 0;
    int tabs = 0;
    int lines = 1;

    cout << "Enter text:\n";

    getline(cin, text);

    for(int i = 0; i < text.length(); i++)
    {
        characters++;

        if(text[i] == ' ')
        {
            spaces++;
        }

        if(text[i] == '\t')
        {
            tabs++;
        }

        if(text[i] == '\n')
        {
            lines++;
        }
    }

    cout << "\nTotal Characters = " << characters << endl;

    cout << "Total Spaces = " << spaces << endl;

    cout << "Total Tabs = " << tabs << endl;

    cout << "Total Lines = " << lines << endl;

    return 0;
}
