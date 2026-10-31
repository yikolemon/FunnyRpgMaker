/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140160488 */

undefined8 FUN_140160488(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xe8);
  FUN_14012b2c6();
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x28) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x2c) * -0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 8) << 6;
  return 0;
}

