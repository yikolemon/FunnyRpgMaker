/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101145d8 */

bool FUN_101145d8(char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  
  iVar1 = _strcmp(param_1,"1.92.9 WIP");
  return ((param_7 == 2 && param_6 == 0x14) &&
         ((param_5 == 0x10 && param_4 == 8) && (param_3 == 0x54c && param_2 == 0xbd0))) &&
         iVar1 == 0;
}

