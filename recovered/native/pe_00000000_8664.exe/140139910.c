/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140139910 */

void FUN_140139910(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = FUN_140139956(param_1,param_2,*(int *)(param_4 + 4) - *(int *)(param_3 + 4),
                        iVar1 - *(int *)(param_3 + 4),*(undefined1 *)(param_3 + 0xc),
                        *(undefined1 *)(param_4 + 0xc));
  *(int *)(param_4 + 8) = iVar2 + iVar1;
  return;
}

