/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005e3d8 */

undefined8 FUN_14005e3d8(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xe8);
  FUN_14001ec4d(*param_1,param_2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x28) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x2c) * -0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 8) << 6;
  return 0;
}

