/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002821c */

undefined4 * FUN_1002821c(undefined4 *param_1,int *param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2[1];
  uVar1 = iVar2 + 1;
  if ((uint)param_2[2] < uVar1) {
    (*(code *)param_2[3])(param_2,uVar1);
    iVar2 = param_2[1];
    uVar1 = iVar2 + 1;
    if ((uint)param_2[2] < uVar1) {
      (*(code *)param_2[3])(param_2,uVar1);
      iVar2 = param_2[1];
      uVar1 = iVar2 + 1;
    }
  }
  param_2[1] = uVar1;
  *(undefined1 *)(*param_2 + iVar2) = param_3;
  *param_1 = param_2;
  return param_1;
}

