#include <iostream>
#include <string>

using namespace std;

int main()
{
    string url;
    int risk = 0;
    int i;
    int hyphens = 0;

    cout << "====================================" << endl;
    cout << "       PHISHING URL DETECTOR" << endl;
    cout << "====================================" << endl;

    cout << "Enter URL to check: ";
    cin >> url;

    cout << endl;

    /* Check HTTPS */
    if (url.find("https://") == string::npos)
    {
        cout << "Warning: HTTPS not found." << endl;
        risk = risk + 1;
    }

    /* Check suspicious keywords */
    if (url.find("login") != string::npos ||
        url.find("verify") != string::npos ||
        url.find("free") != string::npos ||
        url.find("update") != string::npos)
    {
        cout << "Warning: Suspicious keyword detected." << endl;
        risk = risk + 2;
    }

    /* Check for IP address patterns */
    if (url.find("192.168.") != string::npos ||
        url.find("10.0.") != string::npos ||
        url.find("127.0.0.1") != string::npos)
    {
        cout << "Warning: IP address pattern detected." << endl;
        risk = risk + 2;
    }

    /* Check URL length */
    if (url.length() > 75)
    {
        cout << "Warning: URL is unusually long." << endl;
        risk = risk + 1;
    }

    /* Count hyphens */
    for (i = 0; i < (int)url.length(); i++)
    {
        if (url[i] == '-')
        {
            hyphens = hyphens + 1;
        }
    }

    if (hyphens >= 3)
    {
        cout << "Warning: Too many hyphens found." << endl;
        risk = risk + 1;
    }

    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Risk Score: " << risk << "/7" << endl;

    if (risk >= 4)
    {
        cout << "Result: HIGH RISK - Suspicious URL" << endl;
    }
    else if (risk >= 2)
    {
        cout << "Result: MEDIUM RISK - Check Carefully" << endl;
    }
    else
    {
        cout << "Result: LOW RISK - No major warning detected" << endl;
    }

    cout << "------------------------------------" << endl;
    cout << endl;

    cout << "Note: This is a basic educational detector." << endl;
    cout << "It cannot guarantee URL safety." << endl;

    return 0;
}
