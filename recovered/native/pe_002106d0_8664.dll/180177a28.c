/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177a28 */

void FUN_180177a28(undefined8 *param_1,char *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1[3];
  iVar2 = ((int *)*param_1)[1] * *(int *)*param_1;
  if (param_3 == 2) {
    if (iVar2 != 0) {
      lVar3 = 0;
      do {
        *(char *)(lVar1 + 1 + lVar3 * 2) = -(*(char *)(lVar1 + lVar3 * 2) != *param_2);
        lVar3 = lVar3 + 1;
      } while (iVar2 != (int)lVar3);
    }
  }
  else if (iVar2 != 0) {
    lVar3 = 0;
    do {
      if (((*(char *)(lVar1 + lVar3 * 4) == *param_2) &&
          (*(char *)(lVar1 + 1 + lVar3 * 4) == param_2[1])) &&
         (*(char *)(lVar1 + 2 + lVar3 * 4) == param_2[2])) {
        *(undefined1 *)(lVar1 + 3 + lVar3 * 4) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (iVar2 != (int)lVar3);
  }
  return;
}

