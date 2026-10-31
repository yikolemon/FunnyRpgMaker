/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400678c1 */

void FUN_1400678c1(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = FUN_14001ecff(*(uint *)(*(longlong *)(param_1 + 0x328) + 0x17c),0x3e80000);
  *param_2 = iVar1;
  *param_3 = *(int *)(*(longlong *)(param_1 + 0x328) + 0x180) << 0x10;
  *param_4 = *(int *)(*(longlong *)(param_1 + 0x328) + 0x184) << 0x10;
  return;
}

