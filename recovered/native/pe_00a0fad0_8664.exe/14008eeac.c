/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008eeac */

undefined8 *
FUN_14008eeac(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = param_1[2];
  if (param_2 <= uVar3) {
    uVar8 = param_3;
    if (uVar3 - param_2 < param_3) {
      uVar8 = uVar3 - param_2;
    }
    if (param_5 == uVar8) {
      puVar4 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      FUN_140135ff0((longlong)puVar4 + param_2 * 2,param_4,param_5 * 2);
    }
    else {
      lVar7 = ((uVar3 - param_2) - uVar8) + 1;
      uVar6 = param_5 - uVar8;
      if (param_5 < uVar8) {
        puVar4 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        lVar1 = (longlong)puVar4 + param_2 * 2;
        FUN_140135ff0(lVar1,param_4,param_5 * 2);
        FUN_140135ff0(lVar1 + param_5 * 2,lVar1 + uVar8 * 2,lVar7 * 2);
        param_1[2] = (uVar3 + param_5) - uVar8;
      }
      else if (param_1[3] - uVar3 < uVar6) {
        param_1 = (undefined8 *)FUN_14008f042(param_1,uVar6,param_3,param_2,uVar8,param_4,param_5);
      }
      else {
        param_1[2] = uVar6 + uVar3;
        puVar4 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        uVar2 = (longlong)puVar4 + param_2 * 2;
        uVar5 = uVar8 * 2 + uVar2;
        uVar8 = param_5;
        if (param_4 <= (longlong)puVar4 + uVar3 * 2 && uVar2 < param_4 + param_5 * 2) {
          if (uVar5 < param_4 || uVar5 - param_4 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (longlong)(uVar5 - param_4) >> 1;
          }
        }
        FUN_140135ff0(param_5 * 2 + uVar2,uVar5,lVar7 * 2);
        FUN_140135ff0(uVar2,param_4,uVar8 * 2);
        FUN_140135ff0(uVar8 * 2 + uVar2,param_4 + uVar6 * 2 + uVar8 * 2,(param_5 - uVar8) * 2);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000cf3e();
}

