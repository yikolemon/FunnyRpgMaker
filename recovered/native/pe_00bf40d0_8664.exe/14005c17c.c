/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005c17c */

undefined8 FUN_14005c17c(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_14001ec4d(lVar1,param_2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
  *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
  return 0;
}

