#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<string> webAddresses;

    string address;
    while (cin >> address && address != "end")
    {
        webAddresses.push_back(address);
    }

    int Q;
    cin >> Q;

    auto current = webAddresses.begin();

    while (Q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {

            string iAddress;
            cin >> iAddress;

            bool found = false;

            for (auto it = webAddresses.begin(); it != webAddresses.end(); ++it)
            {
                if (*it == iAddress)
                {
                    current = it;
                    cout << *current << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current != webAddresses.begin())
            {
                --current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            auto temp = current;
            ++temp;
            if (temp != webAddresses.end())
            {
                ++current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}