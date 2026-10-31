/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400de1d0 */

longlong * FUN_1400de1d0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8;
  
  uVar2 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar3 = param_1[3];
  lVar4 = param_1[2];
  if (uVar3 - lVar4 < uVar2) {
    plVar6 = (longlong *)FUN_1400fb670(param_1,uVar2,local_res8,param_2,uVar2);
    return plVar6;
  }
  lVar1 = lVar4 + uVar2;
  if (((lVar4 != lVar1) && (7 < uVar3)) && (DAT_140166098 != '\0')) {
    lVar5 = *param_1;
    uVar9 = uVar3 * 2 + 9 + lVar5 & 0xfffffffffffffff8;
    uVar3 = lVar5 + (lVar4 + 1) * 2;
    uVar7 = lVar5 + 2 + lVar1 * 2;
    uVar8 = uVar9;
    if (uVar7 <= uVar9) {
      uVar8 = uVar7;
    }
    uVar7 = uVar9;
    if (uVar3 <= uVar9) {
      uVar7 = uVar3;
    }
    _guard_check_icall(lVar5,uVar9,uVar7,uVar8);
  }
  param_1[2] = lVar1;
  plVar6 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar6 = (longlong *)*param_1;
  }
  FUN_140135ff0((longlong)plVar6 + lVar4 * 2,param_2,uVar2 * 2);
  *(undefined2 *)((longlong)plVar6 + lVar1 * 2) = 0;
  return param_1;
}

