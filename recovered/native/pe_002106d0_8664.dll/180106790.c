/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180106790 */

void FUN_180106790(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 2);
  if (0 < iVar1) {
    lVar3 = 8;
    lVar2 = 0;
    do {
      if ((longlong)*(int *)(param_1[3] + lVar3) != -1) {
        FUN_180132aaa((longlong)*(int *)(param_1[3] + lVar3) * 0x250 + param_1[1]);
        iVar1 = *(int *)(param_1 + 2);
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < iVar1);
  }
  if (param_1[3] != 0) {
    param_1[2] = 0;
    FUN_1800fe8d4();
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_1800fe8d4();
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}

