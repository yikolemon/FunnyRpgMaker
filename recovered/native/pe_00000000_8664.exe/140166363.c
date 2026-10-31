/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140166363 */

void FUN_140166363(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar1 + 0x58) == '\0') {
    iVar2 = FUN_1401663ed(lVar1,*param_2,param_2[1]);
    if (iVar2 != 0) goto LAB_1401663da;
  }
  iVar2 = FUN_1401664d6(lVar1,3);
  if (iVar2 == 0) {
    FUN_1401641b7(lVar1,param_2[2],param_2[3],0);
    FUN_1401641b7(lVar1,param_2[4],param_2[5],0);
    FUN_1401641b7(lVar1,param_2[6],param_2[7],1);
    return;
  }
LAB_1401663da:
  if (**(int **)(param_1 + 0x30) == 0) {
    **(int **)(param_1 + 0x30) = iVar2;
  }
  return;
}

