/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005b188 */

undefined8 FUN_14005b188(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xd8);
  FUN_14001ec4d(*param_1,0);
  *(uint *)((longlong)param_1 + 0x24) = (uint)*(ushort *)(lVar1 + 0x50) << 6;
  *(uint *)(param_1 + 5) =
       ((uint)*(ushort *)(lVar1 + 0x50) - (uint)*(ushort *)(lVar1 + 0x60)) * 0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 0x66) << 6;
  return 0;
}

