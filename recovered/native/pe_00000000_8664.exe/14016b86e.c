/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016b86e */

int FUN_14016b86e(int param_1,int param_2,int param_3,int param_4)

{
  return (param_4 - param_2 >> 0x10) * (param_1 >> 0x10) -
         (param_3 - param_1 >> 0x10) * (param_2 >> 0x10);
}

