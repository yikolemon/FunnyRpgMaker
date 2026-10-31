/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005cf34 */

int FUN_14005cf34(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_14018dbf0(param_2,param_3,param_4,param_5,param_1 + 0x10);
  return (int)(char)((0 < iVar1) - (iVar1 < 0));
}

