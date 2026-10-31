/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001b195 */

undefined8 * FUN_14001b195(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = 0x3f;
  if ((param_3 | 1) != 0) {
    for (; (param_3 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar3 = (ulonglong)(byte)(&DAT_1401c9dc0)[lVar1] -
          (ulonglong)
          (param_3 < *(ulonglong *)(&DAT_1401c9e00 + (ulonglong)(byte)(&DAT_1401c9dc0)[lVar1] * 8));
  lVar1 = param_2[1];
  uVar2 = lVar1 + uVar3;
  if ((ulonglong)param_2[2] < uVar2) {
    (*(code *)param_2[3])(param_2);
    lVar1 = param_2[1];
    uVar2 = uVar3 + lVar1;
    if ((ulonglong)param_2[2] < uVar2) goto LAB_14001b210;
  }
  param_2[1] = uVar2;
  if (*param_2 != 0) {
    FUN_14001b11b(*param_2 + lVar1,param_3,uVar3 & 0xffffffff);
    *param_1 = param_2;
    return param_1;
  }
LAB_14001b210:
  FUN_14001b052(param_1,param_2,param_3,uVar3 & 0xffffffff);
  return param_1;
}

