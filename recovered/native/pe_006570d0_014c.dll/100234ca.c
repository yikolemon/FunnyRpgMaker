/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100234ca */

undefined4 * __thiscall FUN_100234ca(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100597c0;
  local_1c = ExceptionList;
  iVar1 = *param_1;
  local_30 = (param_1[1] - iVar1 >> 2) + 1;
  uVar5 = param_1[2] - iVar1 >> 2;
  uVar7 = (uVar5 >> 1) + uVar5;
  if (uVar7 <= local_30) {
    uVar7 = local_30;
  }
  if (0x3fffffff - (uVar5 >> 1) < uVar5) {
    uVar7 = 0x3fffffff;
  }
  ExceptionList = &local_1c;
  local_24 = param_1;
  if (0x3fffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_44;
  puVar4 = (undefined4 *)FUN_10001426(uVar7 * 4);
  local_34 = (undefined4 *)((int)puVar4 + ((int)param_2 - iVar1) + 4);
  local_44 = local_24;
  local_28 = (undefined4 *)(((int)param_2 - iVar1) + (int)puVar4);
  uVar2 = *param_3;
  *param_3 = 0;
  *local_28 = uVar2;
  puVar6 = (undefined4 *)*local_24;
  puVar9 = (undefined4 *)local_24[1];
  puVar3 = puVar4;
  if (param_2 == puVar9) {
    for (; local_38 = local_28, puVar6 != param_2; puVar6 = puVar6 + 1) {
      uVar2 = *puVar6;
      *puVar6 = 0;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    puVar8 = puVar4;
    puVar3 = local_34;
    if (puVar6 != param_2) {
      do {
        uVar2 = *puVar6;
        *puVar6 = 0;
        *puVar8 = uVar2;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (puVar6 != param_2);
      puVar9 = (undefined4 *)local_24[1];
    }
    for (; local_38 = puVar4, param_2 != puVar9; param_2 = param_2 + 1) {
      uVar2 = *param_2;
      *param_2 = 0;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    }
  }
  local_14 = 0xffffffff;
  local_40 = 0;
  local_3c = uVar7;
  local_2c = uVar7;
  FUN_1002365e(puVar4,local_30,uVar7);
  puVar6 = local_28;
  local_14 = 0xffffffff;
  FUN_100236d0();
  ExceptionList = local_1c;
  return puVar6;
}

