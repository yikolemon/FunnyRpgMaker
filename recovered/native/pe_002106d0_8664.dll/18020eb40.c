/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020eb40 */

undefined8 FUN_18020eb40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1801cc2f2(lVar1);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
  *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
  return 0;
}

