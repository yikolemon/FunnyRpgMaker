/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006fa3c */

void FUN_14006fa3c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_140057552(lVar1,0);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_14006fa7a(param_1,lVar1,param_2);
  return;
}

