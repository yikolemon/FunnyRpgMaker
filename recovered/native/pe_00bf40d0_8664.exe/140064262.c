/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140064262 */

void FUN_140064262(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((((*(char *)(lVar1 + 0x58) == '\0') &&
       (iVar2 = FUN_14006433d(lVar1,*param_2,param_2[1]), iVar2 != 0)) ||
      (iVar2 = FUN_14006437d(lVar1,param_2[2],param_2[3]), iVar2 != 0)) &&
     (**(int **)(param_1 + 0x30) == 0)) {
    **(int **)(param_1 + 0x30) = iVar2;
  }
  return;
}

