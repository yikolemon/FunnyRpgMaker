/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c0dac */

void FUN_1402c0dac(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)puVar2 >> 5) < param_3) {
    FUN_1402c0e8c(param_1,param_3);
    puVar3 = (undefined8 *)*param_1;
    uVar5 = param_3;
  }
  else {
    puVar3 = (undefined8 *)param_1[1];
    uVar1 = (longlong)puVar3 - (longlong)puVar2 >> 5;
    uVar5 = param_3 - uVar1;
    if (param_3 < uVar1 || uVar5 == 0) {
      FUN_1402c1008(param_2,param_3,puVar2);
      puVar3 = (undefined8 *)param_1[1];
      puVar2 = puVar2 + param_3 * 4;
      for (puVar4 = puVar2; puVar4 != puVar3; puVar4 = puVar4 + 4) {
        FUN_1402133c2(puVar4);
      }
      goto LAB_1402c0e7b;
    }
    for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
      if (puVar2 != param_2) {
        puVar3 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar3 = (undefined8 *)*param_2;
        }
        FUN_140229170(puVar2,puVar3,param_2[2]);
        puVar3 = (undefined8 *)param_1[1];
      }
      param_2 = param_2 + 4;
    }
  }
  puVar2 = (undefined8 *)FUN_1402c0f63(param_2,uVar5,puVar3,param_1);
LAB_1402c0e7b:
  param_1[1] = (longlong)puVar2;
  return;
}

