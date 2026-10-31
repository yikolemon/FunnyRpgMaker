/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eff60 */

void FUN_1800eff60(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar1 = (undefined8 *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)puVar1 >> 3) * -0x3333333333333333) < param_3) {
    FUN_1800f0058(param_1,param_3);
    puVar3 = (undefined8 *)*param_1;
    uVar5 = param_3;
  }
  else {
    puVar3 = (undefined8 *)param_1[1];
    lVar2 = (longlong)puVar3 - (longlong)puVar1 >> 3;
    uVar5 = param_3 + lVar2 * 0x3333333333333333;
    if (param_3 < (ulonglong)(lVar2 * -0x3333333333333333) || uVar5 == 0) {
      FUN_1800f01e2(param_2,param_3,puVar1);
      puVar3 = (undefined8 *)param_1[1];
      puVar1 = puVar1 + param_3 * 5;
      for (puVar4 = puVar1; puVar4 != puVar3; puVar4 = puVar4 + 5) {
        FUN_18001828d(puVar4);
      }
      goto LAB_1800f0047;
    }
    for (; puVar1 != puVar3; puVar1 = puVar1 + 5) {
      if (puVar1 != param_2) {
        puVar3 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar3 = (undefined8 *)*param_2;
        }
        FUN_180017ca0(puVar1,puVar3,param_2[2]);
      }
      puVar1[4] = param_2[4];
      param_2 = param_2 + 5;
      puVar3 = (undefined8 *)param_1[1];
    }
  }
  puVar1 = (undefined8 *)FUN_1800f013d(param_2,uVar5,puVar3,param_1);
LAB_1800f0047:
  param_1[1] = (longlong)puVar1;
  return;
}

