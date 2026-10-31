/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ebc5a */

void __thiscall FUN_100ebc5a(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)*param_1;
  if ((uint)(param_1[2] - (int)puVar2 >> 5) < param_3) {
    FUN_100ebd0e(param_3);
    puVar1 = (undefined4 *)*param_1;
    uVar4 = param_3;
  }
  else {
    puVar1 = (undefined4 *)param_1[1];
    uVar3 = (int)puVar1 - (int)puVar2 >> 5;
    uVar4 = param_3 - uVar3;
    if (param_3 < uVar3 || uVar4 == 0) {
      FUN_100ebe85(param_2,param_3,puVar2);
      puVar1 = (undefined4 *)param_1[1];
      puVar2 = puVar2 + param_3 * 8;
      for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 8) {
        FUN_100186f1(puVar5);
      }
      goto LAB_100ebd04;
    }
    for (; puVar2 != puVar1; puVar2 = puVar2 + 8) {
      if (puVar2 != param_2) {
        puVar1 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar1 = (undefined4 *)*param_2;
        }
        FUN_100180a6(puVar1,param_2[4]);
      }
      *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(param_2 + 6);
      param_2 = param_2 + 8;
      puVar1 = (undefined4 *)param_1[1];
    }
  }
  puVar2 = (undefined4 *)FUN_100ebdc3(param_2,uVar4,puVar1,param_1);
LAB_100ebd04:
  param_1[1] = (int)puVar2;
  return;
}

