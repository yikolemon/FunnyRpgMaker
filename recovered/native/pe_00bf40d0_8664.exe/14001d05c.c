/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d05c */

void FUN_14001d05c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    FUN_14001d04a(param_1);
    if (param_2 == 0) {
      FUN_14001c53d(lVar1,param_1);
      return;
    }
  }
  return;
}

