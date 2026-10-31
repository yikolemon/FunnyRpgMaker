/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015e22c */

undefined8 FUN_14015e22c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_14012b2c6(lVar1);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
  *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
  return 0;
}

