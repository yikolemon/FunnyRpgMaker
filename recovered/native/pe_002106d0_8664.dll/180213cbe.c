/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180213cbe */

undefined8 FUN_180213cbe(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x18),
     *(uint *)(lVar1 + 8) <
     (uint)*(ushort *)(lVar1 + 0x1a) + param_2 + (uint)*(ushort *)(lVar1 + 0x62))) {
    uVar2 = FUN_1801c9d58(lVar1,param_2,0);
    return uVar2;
  }
  return 0;
}

