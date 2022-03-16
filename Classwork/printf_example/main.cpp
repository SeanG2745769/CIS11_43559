#include <cstdio>
#include <string>

using namespace std;
int main() 
{
    /*
     *printf("Hello World!\n");
     */
    
    /*
     * int R1=3, R2=4;
     * printf("%d + %d = %d\n", R1, R2, R1+R2);
     * return 0;
     */
    
    string fmt_str = "%d + %d = %d\n";
    int R1=3, R2=4;
    printf(fmt_str.c_str(), R1, R2, R1+R2);
    
    /*Assembly Version of above code snippet:
     * fmt_str: .asci2 "%d + %d = %d\n"
     * 
     * MOV R1, #3
     * MOV R2, #4
     * ADD R3, R1, R2
     * LDR R0, =fmt_str
     * BL printf
     * 
     * Assembly Operators Explained:
     * - To load the address of a label into a register:
     *      LDR RX, = your_label_name
     *   Where RX is your register e.g. R0, R1, ect
     *   * = symbol is the assembler's address operator
     * 
     * - BL your_function_name
     *      BL stands for Branch with Link which pulls int the C library to access
     *      the printf function.
     * 
     * ASM:    | C/C++:
     * asci2   | cstring
     * word    | int
     * float   | float
     * hword   | short
     * byte    | char
     */
}