/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003f47a */

void FUN_14003f47a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  FUN_14001c53d(lVar1,*(longlong *)(param_2 + 0x10));
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_14001c53d(lVar1,*(longlong *)(param_2 + 8));
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}

