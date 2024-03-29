#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    long iCurrentFloor = 0;
    
    const std::string sFloorDirections = ""; /* Input goes into this string variable */
    
    for (long unsigned i = 0; i < sFloorDirections.length(); i++)
    {
        if (sFloorDirections.at(i) == '(')
        {
            iCurrentFloor++;
            continue;
        }
        iCurrentFloor--;
    }    
    std::cout << "Final floor position: " << iCurrentFloor << '\n'; /* This is your answer */
    
    return 0;
}
