#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    long iCurrentFloor = 0;
    
    const std::string sFloorDirections = ""; /* Input goes into this string variable */
    
    for (long unsigned i = 0; i < sFloorDirections.length(); i++)
    {
        if (iCurrentFloor < 0)
        {
            std::cout << "Character position that led to the first basement entry: " << i << '\n'; /* This is your answer */
            break;
        }
        
        if (sFloorDirections.at(i) == '(')
        {
            iCurrentFloor++;
            continue;
        }
        iCurrentFloor--;
    }
    
    return 0;
}
