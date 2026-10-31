/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b8aa8 */

void __thiscall FUN_100b8aa8(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)*param_1;
  if ((uint)((param_1[2] - (int)puVar2 >> 3) * -0x55555555) < param_3) {
    FUN_100b8354(param_3);
    puVar1 = (undefined4 *)*param_1;
    uVar4 = param_3;
  }
  else {
    puVar1 = (undefined4 *)param_1[1];
    iVar3 = (int)puVar1 - (int)puVar2 >> 3;
    uVar4 = param_3 + iVar3 * 0x55555555;
    if (param_3 < (uint)(iVar3 * -0x55555555) || uVar4 == 0) {
      FUN_100b8c17(param_2,param_3,puVar2);
      puVar1 = (undefined4 *)param_1[1];
      puVar2 = puVar2 + param_3 * 6;
      for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 6) {
        FUN_100b80da();
      }
      goto LAB_100b8b51;
    }
    for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
      if (puVar2 != param_2) {
        puVar1 = param_2;
        if (0xf < (uint)param_2[5]) {
          puVar1 = (undefined4 *)*param_2;
        }
        FUN_100b85e2(puVar1,param_2[4]);
        puVar1 = (undefined4 *)param_1[1];
      }
      param_2 = param_2 + 6;
    }
  }
  puVar2 = (undefined4 *)FUN_100b8b5b(param_2,uVar4,puVar1,param_1);
LAB_100b8b51:
  param_1[1] = (int)puVar2;
  return;
}

