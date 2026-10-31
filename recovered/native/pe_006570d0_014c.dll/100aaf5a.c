/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aaf5a */

undefined1 * __thiscall FUN_100aaf5a(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  int *local_50;
  undefined1 *local_4c;
  uint local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  uint local_3c;
  uint local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 local_25;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c44c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar8 = *param_1;
  local_3c = (param_1[1] - iVar8 >> 3) * -0x55555555 + 1;
  uVar7 = (param_1[2] - iVar8 >> 3) * -0x55555555;
  uVar10 = 0xaaaaaaa - (uVar7 >> 1);
  uVar11 = (uVar7 >> 1) + uVar7;
  if (uVar11 <= local_3c) {
    uVar11 = local_3c;
  }
  if (uVar10 <= uVar7 && uVar7 - uVar10 != 0) {
    uVar11 = 0xaaaaaaa;
  }
  if (0xaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_50;
  local_4c = (undefined1 *)FUN_10001426(uVar11 * 0x18);
  local_44 = (undefined1 *)((int)param_2 + (int)(local_4c + (0x18 - iVar8)));
  local_14 = 0;
  local_2c = (undefined1 *)((int)param_2 + ((int)local_4c - iVar8));
  local_50 = param_1;
  local_48 = uVar11;
  local_40 = local_44;
  local_38 = uVar11;
  local_34 = local_4c;
  local_30 = local_44;
  local_24 = param_1;
  FUN_100a92f2(param_3,&local_25);
  local_44 = local_2c;
  puVar2 = (undefined4 *)*local_24;
  puVar9 = (undefined4 *)local_24[1];
  if (param_2 == puVar9) {
    if (puVar2 != param_2) {
      iVar8 = 0;
      do {
        *(undefined8 *)(local_34 + iVar8 + 0x10) = 0;
        puVar9 = (undefined4 *)(local_34 + iVar8);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9 = (undefined4 *)((int)puVar2 + iVar8);
        *(undefined8 *)(local_34 + iVar8 + 0x10) = *(undefined8 *)(puVar9 + 4);
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        puVar1 = (undefined4 *)(local_34 + iVar8);
        *puVar1 = *puVar9;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar9[4] = 0;
        puVar9[5] = 0xf;
        *(undefined1 *)puVar9 = 0;
        iVar8 = iVar8 + 0x18;
      } while (puVar9 + 6 != param_2);
    }
  }
  else {
    if (puVar2 != param_2) {
      iVar8 = 0;
      do {
        *(undefined8 *)(local_34 + iVar8 + 0x10) = 0;
        puVar9 = (undefined4 *)(local_34 + iVar8);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9 = (undefined4 *)((int)puVar2 + iVar8);
        *(undefined8 *)(local_34 + iVar8 + 0x10) = *(undefined8 *)(puVar9 + 4);
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        puVar1 = (undefined4 *)(local_34 + iVar8);
        *puVar1 = *puVar9;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar9[4] = 0;
        puVar9[5] = 0xf;
        *(undefined1 *)puVar9 = 0;
        iVar8 = iVar8 + 0x18;
      } while (puVar9 + 6 != param_2);
      puVar9 = (undefined4 *)local_24[1];
    }
    local_44 = local_34;
    if (param_2 != puVar9) {
      iVar8 = 0;
      do {
        *(undefined8 *)(local_30 + iVar8 + 0x10) = 0;
        puVar2 = (undefined4 *)(local_30 + iVar8);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = (undefined4 *)((int)param_2 + iVar8);
        *(undefined8 *)(local_30 + iVar8 + 0x10) = *(undefined8 *)(puVar2 + 4);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar1 = (undefined4 *)(local_30 + iVar8);
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        puVar2[4] = 0;
        puVar2[5] = 0xf;
        *(undefined1 *)puVar2 = 0;
        iVar8 = iVar8 + 0x18;
      } while (puVar2 + 6 != puVar9);
    }
  }
  local_14 = 0xffffffff;
  local_4c = (undefined1 *)0x0;
  FUN_100ab1a2(local_34,local_3c,local_38);
  puVar6 = local_2c;
  local_14 = 0xffffffff;
  FUN_100ab214();
  *unaff_FS_OFFSET = local_1c;
  return puVar6;
}

