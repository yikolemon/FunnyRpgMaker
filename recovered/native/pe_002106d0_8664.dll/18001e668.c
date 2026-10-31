/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001e668 */

void FUN_18001e668(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 8) + 0x20))();
    param_2 = (ulonglong)uVar1;
  }
  FUN_18001f28a(param_1,param_2);
  return;
}

