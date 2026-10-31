/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020db4c */

undefined8 FUN_18020db4c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xd8);
  FUN_1801cc2f2(*param_1,0);
  *(uint *)((longlong)param_1 + 0x24) = (uint)*(ushort *)(lVar1 + 0x50) << 6;
  *(uint *)(param_1 + 5) =
       ((uint)*(ushort *)(lVar1 + 0x50) - (uint)*(ushort *)(lVar1 + 0x60)) * 0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 0x66) << 6;
  return 0;
}

