/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180025910 */

undefined8 * FUN_180025910(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = -param_3;
  if ((longlong)-param_3 < 0) {
    uVar3 = param_3;
  }
  lVar6 = 0x3f;
  if ((uVar3 | 1) != 0) {
    for (; (uVar3 | 1) >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  uVar8 = (ulonglong)(byte)(&DAT_1802b1db0)[lVar6] -
          (ulonglong)
          (uVar3 < *(ulonglong *)(&DAT_1802b1df0 + (ulonglong)(byte)(&DAT_1802b1db0)[lVar6] * 8));
  lVar6 = uVar8 - ((longlong)param_3 >> 0x3f);
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar7 = lVar6 + uVar4;
  if (uVar1 < uVar7) {
    (*(code *)param_2[3])(param_2);
    uVar4 = param_2[1];
    uVar1 = param_2[2];
    uVar7 = lVar6 + uVar4;
    uVar5 = uVar4;
    if (uVar1 < uVar7) goto LAB_1800259ba;
  }
  param_2[1] = uVar7;
  uVar5 = uVar7;
  if (*param_2 != 0) {
    puVar2 = (undefined1 *)(*param_2 + uVar4);
    if ((longlong)param_3 < 0) {
      *puVar2 = 0x2d;
      puVar2 = puVar2 + 1;
    }
    FUN_180025acd(puVar2,uVar3,uVar8 & 0xffffffff);
    *param_1 = param_2;
    return param_1;
  }
LAB_1800259ba:
  if ((longlong)param_3 < 0) {
    uVar7 = uVar5 + 1;
    if (uVar1 < uVar7) {
      (*(code *)param_2[3])(param_2);
      uVar5 = param_2[1];
      uVar7 = uVar5 + 1;
    }
    param_2[1] = uVar7;
    *(undefined1 *)(*param_2 + uVar5) = 0x2d;
  }
  FUN_180025a04(param_1,param_2,uVar3,uVar8 & 0xffffffff);
  return param_1;
}

