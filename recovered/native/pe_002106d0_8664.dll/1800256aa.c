/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800256aa */

undefined8 * FUN_1800256aa(undefined8 *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar2 = -param_3;
  if ((int)-param_3 < 0) {
    uVar2 = param_3;
  }
  uVar5 = (ulonglong)uVar2;
  uVar1 = 0x1f;
  if ((uVar2 | 1) != 0) {
    for (; (uVar2 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar8 = *(longlong *)(&DAT_1802b1be0 + (ulonglong)uVar1 * 8) + uVar5 >> 0x20;
  lVar9 = ((longlong)(*(longlong *)(&DAT_1802b1be0 + (ulonglong)uVar1 * 8) + uVar5) >> 0x20) +
          (ulonglong)(param_3 >> 0x1f);
  uVar6 = param_2[1];
  uVar3 = param_2[2];
  uVar10 = lVar9 + uVar6;
  if (uVar3 < uVar10) {
    (*(code *)param_2[3])(param_2);
    uVar6 = param_2[1];
    uVar3 = param_2[2];
    uVar10 = lVar9 + uVar6;
    uVar7 = uVar6;
    if (uVar3 < uVar10) goto LAB_18002574a;
  }
  param_2[1] = uVar10;
  uVar7 = uVar10;
  if (*param_2 != 0) {
    puVar4 = (undefined1 *)(*param_2 + uVar6);
    if ((int)param_3 < 0) {
      *puVar4 = 0x2d;
      puVar4 = puVar4 + 1;
    }
    FUN_180024c02(puVar4,uVar5,uVar8);
    *param_1 = param_2;
    return param_1;
  }
LAB_18002574a:
  if ((int)param_3 < 0) {
    uVar10 = uVar7 + 1;
    if (uVar3 < uVar10) {
      (*(code *)param_2[3])(param_2);
      uVar7 = param_2[1];
      uVar10 = uVar7 + 1;
    }
    param_2[1] = uVar10;
    *(undefined1 *)(*param_2 + uVar7) = 0x2d;
  }
  FUN_180025792(param_1,param_2,uVar5,uVar8);
  return param_1;
}

