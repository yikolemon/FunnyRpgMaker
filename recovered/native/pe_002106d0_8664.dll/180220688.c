/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180220688 */

void FUN_180220688(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 4);
  lVar1 = param_1[1];
  if (iVar2 != 0) {
    do {
      FUN_1802206f5(lVar1,param_2);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[1];
  }
  FUN_1801c9b65(param_2,lVar1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

