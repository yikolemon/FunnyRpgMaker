/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140037858 */

void FUN_140037858(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_3 + 8);
  uVar2 = FUN_14003789e(param_1,param_2,*(int *)(param_4 + 4) - *(int *)(param_3 + 4),
                        iVar1 - *(int *)(param_3 + 4),(uint)*(byte *)(param_3 + 0xc),
                        *(byte *)(param_4 + 0xc));
  *(uint *)(param_4 + 8) = uVar2 + iVar1;
  return;
}

