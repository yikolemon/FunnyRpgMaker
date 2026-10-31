/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009434a */

void FUN_14009434a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_2 + 0x18) = lVar1;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    *(longlong *)(param_2 + 0x10) = *(longlong *)(lVar1 + 0x10);
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = param_2;
    lVar1 = *(longlong *)(param_1 + 8);
  }
  *(longlong *)(lVar1 + 0x10) = param_2;
  *(longlong *)(param_1 + 8) = param_2;
  return;
}

