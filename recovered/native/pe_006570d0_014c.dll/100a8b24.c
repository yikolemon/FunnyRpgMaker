/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a8b24 */

undefined4 * __thiscall FUN_100a8b24(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int *local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4390;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = *param_1;
  local_30 = (param_1[1] - iVar1 >> 2) + 1;
  uVar4 = param_1[2] - iVar1 >> 2;
  uVar8 = (uVar4 >> 1) + uVar4;
  if (uVar8 <= local_30) {
    uVar8 = local_30;
  }
  if (0x3fffffff - (uVar4 >> 1) < uVar4) {
    uVar8 = 0x3fffffff;
  }
  local_28 = param_1;
  if (0x3fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_44;
  local_24 = (undefined4 *)FUN_10001426(uVar8 * 4);
  local_34 = (undefined4 *)((int)local_24 + ((int)param_2 - iVar1) + 4);
  local_44 = local_28;
  local_2c = (undefined4 *)(((int)param_2 - iVar1) + (int)local_24);
  uVar2 = *param_3;
  *param_3 = 0xffffffff;
  *local_2c = uVar2;
  puVar5 = (undefined4 *)*local_28;
  puVar7 = (undefined4 *)local_28[1];
  puVar3 = local_24;
  if (param_2 == puVar7) {
    for (; local_38 = local_2c, puVar5 != param_2; puVar5 = puVar5 + 1) {
      uVar2 = *puVar5;
      *puVar5 = 0xffffffff;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    puVar6 = local_24;
    puVar3 = local_34;
    if (puVar5 != param_2) {
      do {
        uVar2 = *puVar5;
        *puVar5 = 0xffffffff;
        *puVar6 = uVar2;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (puVar5 != param_2);
      puVar7 = (undefined4 *)local_28[1];
    }
    for (; local_38 = local_24, param_2 != puVar7; param_2 = param_2 + 1) {
      uVar2 = *param_2;
      *param_2 = 0xffffffff;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    }
  }
  local_14 = 0xffffffff;
  local_40 = 0;
  local_3c = uVar8;
  FUN_100a8cc2(local_24,local_30,uVar8);
  puVar5 = local_2c;
  local_14 = 0xffffffff;
  FUN_100a8d2e();
  *unaff_FS_OFFSET = local_1c;
  return puVar5;
}

