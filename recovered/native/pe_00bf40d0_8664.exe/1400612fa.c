/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400612fa */

int FUN_1400612fa(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if ((param_2 != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x18),
     *(uint *)(plVar1 + 1) <
     (uint)*(ushort *)((longlong)plVar1 + 0x1a) + param_2 +
     (uint)*(ushort *)((longlong)plVar1 + 0x62))) {
    iVar2 = FUN_14001c730(plVar1,param_2,0);
    return iVar2;
  }
  return 0;
}

