/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ac7a6 */

undefined4 * __thiscall FUN_100ac7a6(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  int *local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4610;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar12 = *param_1;
  local_30 = (param_1[1] - iVar12 >> 3) * -0x55555555 + 1;
  uVar7 = (param_1[2] - iVar12 >> 3) * -0x55555555;
  uVar8 = 0xaaaaaaa - (uVar7 >> 1);
  uVar9 = (uVar7 >> 1) + uVar7;
  if (uVar9 <= local_30) {
    uVar9 = local_30;
  }
  if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
    uVar9 = 0xaaaaaaa;
  }
  if (0xaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  iVar12 = (int)param_2 - iVar12;
  local_20 = (undefined1 *)&local_44;
  puVar6 = (undefined4 *)FUN_10001426(uVar9 * 0x18);
  local_34 = (int)puVar6 + iVar12 + 0x18;
  local_28 = (undefined4 *)(iVar12 + (int)puVar6);
  local_14 = 0xffffffff;
  *(undefined8 *)(local_28 + 4) = 0;
  *local_28 = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(local_28 + 4) = *(undefined8 *)(param_3 + 4);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_28 = *param_3;
  local_28[1] = uVar3;
  local_28[2] = uVar4;
  local_28[3] = uVar5;
  param_3[4] = 0;
  param_3[5] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar2 = (undefined4 *)*param_1;
  puVar11 = (undefined4 *)param_1[1];
  if (param_2 == puVar11) {
    local_38 = local_28;
    if (puVar2 != param_2) {
      iVar12 = 0;
      do {
        *(undefined8 *)((int)puVar6 + iVar12 + 0x10) = 0;
        puVar11 = (undefined4 *)((int)puVar6 + iVar12);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11 = (undefined4 *)((int)puVar2 + iVar12);
        *(undefined8 *)((int)puVar6 + iVar12 + 0x10) = *(undefined8 *)(puVar11 + 4);
        uVar3 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        puVar1 = (undefined4 *)((int)puVar6 + iVar12);
        *puVar1 = *puVar11;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar11[4] = 0;
        puVar11[5] = 0xf;
        *(undefined1 *)puVar11 = 0;
        iVar12 = iVar12 + 0x18;
      } while (puVar11 + 6 != param_2);
    }
  }
  else {
    if (puVar2 != param_2) {
      iVar10 = 0;
      do {
        *(undefined8 *)((int)puVar6 + iVar10 + 0x10) = 0;
        puVar11 = (undefined4 *)((int)puVar6 + iVar10);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11 = (undefined4 *)((int)puVar2 + iVar10);
        *(undefined8 *)((int)puVar6 + iVar10 + 0x10) = *(undefined8 *)(puVar11 + 4);
        uVar3 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        puVar1 = (undefined4 *)((int)puVar6 + iVar10);
        *puVar1 = *puVar11;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar11[4] = 0;
        puVar11[5] = 0xf;
        *(undefined1 *)puVar11 = 0;
        iVar10 = iVar10 + 0x18;
      } while (puVar11 + 6 != param_2);
      puVar11 = (undefined4 *)param_1[1];
    }
    local_38 = puVar6;
    if (param_2 != puVar11) {
      iVar10 = 0;
      do {
        *(undefined8 *)((int)puVar6 + iVar10 + iVar12 + 0x28) = 0;
        puVar2 = (undefined4 *)(local_34 + iVar10);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = (undefined4 *)((int)param_2 + iVar10);
        *(undefined8 *)((int)puVar6 + iVar10 + iVar12 + 0x28) = *(undefined8 *)(puVar2 + 4);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar1 = (undefined4 *)(local_34 + iVar10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar2[4] = 0;
        puVar2[5] = 0xf;
        *(undefined1 *)puVar2 = 0;
        iVar10 = iVar10 + 0x18;
      } while (puVar2 + 6 != puVar11);
    }
  }
  local_40 = 0;
  local_44 = param_1;
  local_3c = uVar9;
  local_2c = uVar9;
  local_24 = param_1;
  FUN_100ab1a2(puVar6,local_30,uVar9);
  puVar2 = local_28;
  local_14 = 0xffffffff;
  FUN_100ab214();
  *unaff_FS_OFFSET = local_1c;
  return puVar2;
}

