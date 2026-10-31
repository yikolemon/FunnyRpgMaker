/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002522f */

undefined4 * FUN_1002522f(undefined4 *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  uVar8 = -param_3;
  if ((int)-param_3 < 0) {
    uVar8 = param_3;
  }
  iVar5 = 0x1f;
  if ((uVar8 | 1) != 0) {
    for (; (uVar8 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar4 = *(int *)(&DAT_102902d4 + iVar5 * 8) +
          (uint)CARRY4(uVar8,*(uint *)(&DAT_102902d0 + iVar5 * 8));
  iVar5 = (*(int *)(&DAT_102902d4 + iVar5 * 8) - ((int)param_3 >> 0x1f)) +
          (uint)CARRY4(*(uint *)(&DAT_102902d0 + iVar5 * 8),uVar8);
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar6 = iVar5 + uVar2;
  if (uVar1 < uVar6) {
    (*(code *)param_2[3])(param_2,uVar6);
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    uVar6 = iVar5 + uVar2;
    uVar3 = uVar2;
    if (uVar1 < uVar6) goto LAB_100252c0;
  }
  param_2[1] = uVar6;
  uVar3 = uVar6;
  if (*param_2 != 0) {
    puVar7 = (undefined1 *)(*param_2 + uVar2);
    if ((int)param_3 < 0) {
      *puVar7 = 0x2d;
      puVar7 = puVar7 + 1;
    }
    FUN_1002472e(puVar7,uVar8,iVar4);
    *param_1 = param_2;
    return param_1;
  }
LAB_100252c0:
  if ((int)param_3 < 0) {
    uVar6 = uVar3 + 1;
    if (uVar1 < uVar6) {
      (*(code *)param_2[3])(param_2,uVar6);
      uVar3 = param_2[1];
      uVar6 = uVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)(*param_2 + uVar3) = 0x2d;
  }
  FUN_10025309(param_1,param_2,uVar8,iVar4);
  return param_1;
}

