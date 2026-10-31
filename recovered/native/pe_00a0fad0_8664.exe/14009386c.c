/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009386c */

int FUN_14009386c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  
  iVar1 = thunk_FUN_1401043b0(param_2,param_3,param_4,param_5,param_1 + 0x10);
  return (int)(char)((0 < iVar1) - (iVar1 < 0));
}

