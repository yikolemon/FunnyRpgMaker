/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020cae9 */

int __fastcall FUN_1020cae9(int param_1,int param_2,int param_3,int param_4)

{
  return (param_4 - param_2 >> 0x10) * (param_1 >> 0x10) -
         (param_3 - param_1 >> 0x10) * (param_2 >> 0x10);
}

