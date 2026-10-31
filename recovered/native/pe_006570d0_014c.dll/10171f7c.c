/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171f7c */

void __fastcall FUN_10171f7c(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[3];
  iVar2 = ((int *)*param_1)[1] * *(int *)*param_1;
  if (param_3 == 2) {
    if (iVar2 != 0) {
      iVar3 = 0;
      do {
        *(char *)(iVar1 + 1 + iVar3 * 2) = -(*(char *)(iVar1 + iVar3 * 2) != *param_2);
        iVar3 = iVar3 + 1;
      } while (iVar2 - iVar3 != 0);
    }
  }
  else if (iVar2 != 0) {
    iVar3 = 0;
    do {
      if (((*(char *)(iVar1 + iVar3 * 4) == *param_2) &&
          (*(char *)(iVar1 + 1 + iVar3 * 4) == param_2[1])) &&
         (*(char *)(iVar1 + 2 + iVar3 * 4) == param_2[2])) {
        *(undefined1 *)(iVar1 + 3 + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar2 - iVar3 != 0);
  }
  return;
}

