/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180025b47 */

undefined8 * FUN_180025b47(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = 0x3f;
  if ((param_3 | 1) != 0) {
    for (; (param_3 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar3 = (ulonglong)(byte)(&DAT_1802b1db0)[lVar1] -
          (ulonglong)
          (param_3 < *(ulonglong *)(&DAT_1802b1df0 + (ulonglong)(byte)(&DAT_1802b1db0)[lVar1] * 8));
  lVar1 = param_2[1];
  uVar2 = lVar1 + uVar3;
  if ((ulonglong)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2);
    lVar1 = param_2[1];
    uVar2 = uVar3 + lVar1;
    if ((ulonglong)param_2[2] < uVar2) goto LAB_180025bc2;
  }
  param_2[1] = uVar2;
  if (*param_2 != 0) {
    FUN_180025acd(*param_2 + lVar1,param_3,uVar3 & 0xffffffff);
    *param_1 = param_2;
    return param_1;
  }
LAB_180025bc2:
  FUN_180025a04(param_1,param_2,param_3,uVar3 & 0xffffffff);
  return param_1;
}

