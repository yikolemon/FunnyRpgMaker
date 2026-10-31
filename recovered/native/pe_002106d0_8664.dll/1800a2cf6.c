/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a2cf6 */

void FUN_1800a2cf6(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)puVar2 >> 5) < param_3) {
    FUN_1800a2dd6(param_1,param_3);
    puVar3 = (undefined8 *)*param_1;
    uVar5 = param_3;
  }
  else {
    puVar3 = (undefined8 *)param_1[1];
    uVar1 = (longlong)puVar3 - (longlong)puVar2 >> 5;
    uVar5 = param_3 - uVar1;
    if (param_3 < uVar1 || uVar5 == 0) {
      FUN_1800a2f52(param_2,param_3,puVar2);
      puVar3 = (undefined8 *)param_1[1];
      puVar2 = puVar2 + param_3 * 4;
      for (puVar4 = puVar2; puVar4 != puVar3; puVar4 = puVar4 + 4) {
        FUN_1800010ec(puVar4);
      }
      goto LAB_1800a2dc5;
    }
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != param_2) {
        puVar3 = param_2;
        if (7 < (ulonglong)param_2[3]) {
          puVar3 = (undefined8 *)*param_2;
        }
        FUN_180004488(puVar2,puVar3,param_2[2]);
        puVar3 = (undefined8 *)param_1[1];
      }
      param_2 = param_2 + 4;
    }
  }
  puVar2 = (undefined8 *)FUN_1800a2ead(param_2,uVar5,puVar3,param_1);
LAB_1800a2dc5:
  param_1[1] = (longlong)puVar2;
  return;
}

