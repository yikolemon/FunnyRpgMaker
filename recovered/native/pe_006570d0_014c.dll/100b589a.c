/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b589a */

void __thiscall FUN_100b589a(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)*param_1;
  if ((uint)((param_1[2] - (int)puVar2 >> 4) * -0x55555555) < param_3) {
    FUN_100b5972(param_3);
    puVar1 = (undefined4 *)*param_1;
    uVar5 = param_3;
  }
  else {
    puVar1 = (undefined4 *)param_1[1];
    iVar3 = (int)puVar1 - (int)puVar2 >> 4;
    uVar5 = param_3 + iVar3 * 0x55555555;
    if (param_3 < (uint)(iVar3 * -0x55555555) || uVar5 == 0) {
      FUN_100b5aef(param_2,param_3,puVar2);
      puVar1 = (undefined4 *)param_1[1];
      puVar2 = puVar2 + param_3 * 0xc;
      for (puVar4 = puVar2; puVar4 != puVar1; puVar4 = puVar4 + 0xc) {
        FUN_10024443(puVar4);
      }
      goto LAB_100b5939;
    }
    if (puVar2 != puVar1) {
      puVar4 = param_2 + 6;
      do {
        param_2 = puVar4;
        puVar4 = param_2 + -6;
        if (puVar2 != puVar4) {
          if (0xf < (uint)param_2[-1]) {
            puVar4 = (undefined4 *)param_2[-6];
          }
          FUN_100180a6(puVar4,param_2[-2]);
          puVar1 = param_2;
          if (0xf < (uint)param_2[5]) {
            puVar1 = (undefined4 *)*param_2;
          }
          FUN_100180a6(puVar1,param_2[4]);
          puVar1 = (undefined4 *)param_1[1];
        }
        puVar2 = puVar2 + 0xc;
        puVar4 = param_2 + 0xc;
      } while (puVar2 != puVar1);
      param_2 = param_2 + 6;
    }
  }
  puVar2 = (undefined4 *)FUN_100b5a2d(param_2,uVar5,puVar1,param_1);
LAB_100b5939:
  param_1[1] = (int)puVar2;
  return;
}

