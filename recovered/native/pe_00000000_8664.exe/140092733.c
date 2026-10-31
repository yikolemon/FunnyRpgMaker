/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092733 */

bool FUN_140092733(char *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6,longlong param_7)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"1.92.9 WIP");
  return (param_7 == 2 &&
         (param_6 == 0x14 &&
         (param_5 == 0x10 && (param_4 == 8 && (param_3 == 0x54c && param_2 == 0xc18))))) &&
         iVar1 == 0;
}

