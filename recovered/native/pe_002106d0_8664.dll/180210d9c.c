/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180210d9c */

undefined8 FUN_180210d9c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xe8);
  FUN_1801cc2f2();
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x28) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x2c) * -0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 8) << 6;
  return 0;
}

