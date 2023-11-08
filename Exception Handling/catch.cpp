#include <iostream>
using namespace std;

class MyException1 : exception
{
};
class MyException2 : public MyException1
{
};

int main()
{
    try
    {
        throw MyException1();
    }
    catch (int e)
    {
        cout << "Int Catch" << endl;
    }
    catch (double e)
    {
        cout << "Double Catch" << endl;
    }
    catch (MyException2 e) // child class must be written above parent class
    {
        cout << "My Exception 2 Catch" << endl;
    }
    catch (MyException1 e)
    {
        cout << "My Exception 1 Catch" << endl;
    }
    catch (...) // For any other type ... All catch executed [It must be the last handler]
    {
        cout << "All Catch" << endl;
    }
    return 0;
}