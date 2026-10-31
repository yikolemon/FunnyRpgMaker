/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180216c77 */

void FUN_180216c77(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar1 + 0x58) == '\0') {
    iVar2 = FUN_180216d01(lVar1,*param_2,param_2[1]);
    if (iVar2 != 0) goto LAB_180216cee;
  }
  iVar2 = FUN_180216dea(lVar1,3);
  if (iVar2 == 0) {
    FUN_180214acb(lVar1,param_2[2],param_2[3],0);
    FUN_180214acb(lVar1,param_2[4],param_2[5],0);
    FUN_180214acb(lVar1,param_2[6],param_2[7],1);
    return;
  }
LAB_180216cee:
  if (**(int **)(param_1 + 0x30) == 0) {
    **(int **)(param_1 + 0x30) = iVar2;
  }
  return;
}

