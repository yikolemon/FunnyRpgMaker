/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140064426 */

int FUN_140064426(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (*(uint *)(plVar1 + 1) <
      (uint)*(ushort *)((longlong)plVar1 + 0x1a) + param_2 +
      (uint)*(ushort *)((longlong)plVar1 + 0x62)) {
    iVar2 = FUN_14001c730(plVar1,param_2,0);
    return iVar2;
  }
  return 0;
}

