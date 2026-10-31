/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021c182 */

int FUN_18021c182(int param_1,int param_2,int param_3,int param_4)

{
  return (param_4 - param_2 >> 0x10) * (param_1 >> 0x10) -
         (param_3 - param_1 >> 0x10) * (param_2 >> 0x10);
}

