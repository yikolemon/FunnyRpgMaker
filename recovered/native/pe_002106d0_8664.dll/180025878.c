/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180025878 */

undefined8 * FUN_180025878(undefined8 *param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = 0x1f;
  if ((param_3 | 1) != 0) {
    for (; (param_3 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar3 = (ulonglong)param_3 + *(longlong *)(&DAT_1802b1be0 + (ulonglong)uVar1 * 8) >> 0x20;
  lVar4 = (longlong)((ulonglong)param_3 + *(longlong *)(&DAT_1802b1be0 + (ulonglong)uVar1 * 8)) >>
          0x20;
  lVar2 = param_2[1];
  uVar5 = lVar4 + lVar2;
  if ((ulonglong)param_2[2] < uVar5) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar5 = lVar4 + lVar2;
    if ((ulonglong)param_2[2] < uVar5) goto LAB_1800258f0;
  }
  param_2[1] = uVar5;
  if (*param_2 != 0) {
    FUN_180024c02(*param_2 + lVar2,param_3,uVar3);
    *param_1 = param_2;
    return param_1;
  }
LAB_1800258f0:
  FUN_180025792(param_1,param_2,param_3,uVar3);
  return param_1;
}

