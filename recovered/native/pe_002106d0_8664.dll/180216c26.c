/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180216c26 */

void FUN_180216c26(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((((*(char *)(lVar1 + 0x58) == '\0') &&
       (iVar2 = FUN_180216d01(lVar1,*param_2,param_2[1]), iVar2 != 0)) ||
      (iVar2 = FUN_180216d41(lVar1,param_2[2],param_2[3]), iVar2 != 0)) &&
     (**(int **)(param_1 + 0x30) == 0)) {
    **(int **)(param_1 + 0x30) = iVar2;
  }
  return;
}

