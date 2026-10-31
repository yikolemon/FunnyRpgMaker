/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10029039 */

undefined4 * FUN_10029039(undefined4 *param_1,int *param_2,int param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  if (0 < param_3) {
    do {
      uVar1 = *param_4;
      iVar2 = param_2[1];
      uVar3 = iVar2 + 1;
      if ((uint)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2,uVar3);
        iVar2 = param_2[1];
        uVar3 = iVar2 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + iVar2) = uVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = param_2;
  return param_1;
}

