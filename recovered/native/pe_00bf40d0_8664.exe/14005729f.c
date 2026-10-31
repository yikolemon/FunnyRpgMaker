/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005729f */

void FUN_14005729f(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = **(longlong **)(param_1 + 0x28);
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 8));
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

