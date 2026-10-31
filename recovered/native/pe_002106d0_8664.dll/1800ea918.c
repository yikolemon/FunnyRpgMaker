/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ea918 */

void FUN_1800ea918(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar1 = (undefined8 *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)puVar1 >> 4) * -0x3333333333333333) < param_3) {
    FUN_1800eaa3e(param_1,param_3);
    puVar3 = (undefined8 *)*param_1;
    uVar5 = param_3;
  }
  else {
    puVar3 = (undefined8 *)param_1[1];
    lVar2 = (longlong)puVar3 - (longlong)puVar1 >> 4;
    uVar5 = param_3 + lVar2 * 0x3333333333333333;
    if (param_3 < (ulonglong)(lVar2 * -0x3333333333333333) || uVar5 == 0) {
      FUN_1800eabc8(param_2,param_3,puVar1);
      puVar3 = (undefined8 *)param_1[1];
      puVar1 = puVar1 + param_3 * 10;
      for (puVar4 = puVar1; puVar4 != puVar3; puVar4 = puVar4 + 10) {
        FUN_1800ad5b5(puVar4);
      }
      goto LAB_1800eaa2e;
    }
    for (; puVar1 != puVar3; puVar1 = puVar1 + 10) {
      if (puVar1 != param_2) {
        puVar3 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar3 = (undefined8 *)*param_2;
        }
        FUN_180017ca0(puVar1,puVar3,param_2[2]);
        FUN_1800af8dc(puVar1 + 4,param_2[4],(longlong)(param_2[5] - param_2[4]) >> 5);
        FUN_1800af8dc(puVar1 + 7,param_2[7],(longlong)(param_2[8] - param_2[7]) >> 5);
        puVar3 = (undefined8 *)param_1[1];
      }
      param_2 = param_2 + 10;
    }
  }
  puVar1 = (undefined8 *)FUN_1800eab23(param_2,uVar5,puVar3,param_1);
LAB_1800eaa2e:
  param_1[1] = (longlong)puVar1;
  return;
}

