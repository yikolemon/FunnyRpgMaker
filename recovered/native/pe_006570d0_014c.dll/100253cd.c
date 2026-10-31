/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100253cd */

undefined4 * FUN_100253cd(undefined4 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0x1f;
  if ((param_3 | 1) != 0) {
    for (; (param_3 | 1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = *(int *)(&DAT_102902d4 + iVar1 * 8) +
          (uint)CARRY4(param_3,*(uint *)(&DAT_102902d0 + iVar1 * 8));
  iVar3 = param_2[1];
  uVar2 = *(int *)(&DAT_102902d4 + iVar1 * 8) + iVar3 +
          (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar1 * 8),param_3);
  if ((uint)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2,uVar2);
    iVar3 = param_2[1];
    uVar2 = iVar3 + iVar4;
    if ((uint)param_2[2] < uVar2) goto LAB_10025435;
  }
  param_2[1] = uVar2;
  if (*param_2 != 0) {
    FUN_1002472e(*param_2 + iVar3,param_3,iVar4);
    *param_1 = param_2;
    return param_1;
  }
LAB_10025435:
  FUN_10025309(param_1,param_2,param_3,iVar4);
  return param_1;
}

