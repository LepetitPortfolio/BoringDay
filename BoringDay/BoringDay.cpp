#include <iostream>
#include <string>

int main()
{
    const int numMaxSize = 39;
    const int tabSize = 20;
    long long tab[tabSize] = { 2113961728, 17178034144, 68719411256, 137438691340, 274877775878,
                               549638242307, 549495701507, 549638307843, 549755682819, 549755551750,
                               274877382668, 137436856376, 34355544176, 17172398528, 4288614144,
                               529415168, 130146304, 15171584, 3932160, 1572864 };
    int index = 0;

    while (index < tabSize)
    {
        std::string line = "";
        int numIndex = 0;
        long long num = tab[index];
        while (numIndex < numMaxSize)
        {
            bool bit = num & (1i64 << numIndex);
            char newChar = 0;

            if (bit)
            {
                newChar = 0x23;
            }
            else
            {
                newChar = 0x20;
            }

            line = newChar + line;
            numIndex++;
        }

        std::cout << line << std::endl;
        index++;
    }
}
