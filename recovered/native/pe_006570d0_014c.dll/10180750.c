/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180750 */

/* WARNING: Unable to track spacebase fully for stack */

bool FUN_10180750(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 ***pppuVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  HMONITOR pHVar7;
  undefined4 ****ppppuVar8;
  undefined1 *puVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int local_9c [2];
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined1 local_7c [24];
  int local_64;
  undefined1 *local_60;
  undefined4 ***local_5c [4];
  undefined4 local_4c;
  uint local_48;
  byte *local_44;
  int *local_40;
  undefined4 *local_3c;
  undefined4 ***local_38;
  undefined1 local_31;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_7c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10181180;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_84 = CONCAT44(0x10180781,(undefined4)local_84);
  FUN_1019a0e2();
  local_84 = 0x10180788;
  local_64 = FUN_100fe931();
  if (local_64 != 0) {
    local_84 = CONCAT44(0x1018079b,(undefined4)local_84);
    local_44 = (byte *)FUN_1010330d();
    local_84 = 0x18101807a5;
    local_30 = (undefined4 *)FUN_10228350();
    local_14 = 0;
    local_20 = (undefined1 *)local_9c;
    local_38 = (undefined4 ***)local_9c;
    local_3c = &local_94;
    local_84 = 0;
    local_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    local_40 = (int *)local_7c;
    FUN_10002eb6();
    local_14 = 1;
    local_23 = 1;
    local_27 = 1;
    FUN_10001f66("Game/FunnyGameUIViewConfig.ini");
    pppuVar4 = local_38;
    local_14 = 2;
    *local_38 = local_5c;
    pppuVar4[1] = (undefined4 **)local_7c;
    local_21 = 1;
    local_22 = 0;
    FUN_100c8745();
    piVar2 = local_40;
    uVar1 = local_4c;
    local_20 = (undefined1 *)local_40;
    local_14 = 3;
    ppppuVar8 = local_5c;
    if (7 < local_48) {
      ppppuVar8 = (undefined4 ****)local_5c[0];
    }
    local_29 = 1;
    *(undefined1 **)((int)local_40 + -4) = &local_31;
    *(undefined4 *)((int)piVar2 + -8) = uVar1;
    *(undefined4 *****)((int)piVar2 + -0xc) = ppppuVar8;
    *(undefined4 **)((int)piVar2 + -0x10) = local_30;
    *(undefined4 *)((int)piVar2 + -0x14) = 0x1018085d;
    FUN_10005a0c();
    puVar5 = local_30;
    if (0xf < (uint)local_30[5]) {
      puVar5 = (undefined4 *)*local_30;
    }
    *(undefined4 **)(local_44 + 0x20) = puVar5;
    local_29 = 0;
    local_14 = 0xffffffff;
    local_38 = local_5c;
    *(undefined4 *)((int)piVar2 + -4) = 0x1018088b;
    FUN_10001f04();
    local_21 = 0;
    local_22 = 0;
    *(undefined4 *)((int)piVar2 + -4) = 0x1018089b;
    FUN_10001fee();
    local_23 = 0;
    local_27 = 0;
    local_2a = 0;
    *(undefined4 *)((int)piVar2 + -4) = 0x18;
    *(undefined4 *)((int)piVar2 + -8) = 0x101808b0;
    local_30 = (undefined4 *)FUN_10228350();
    local_14 = 4;
    local_3c = piVar2;
    *(undefined4 **)((int)piVar2 + -4) = local_30;
    local_20 = (undefined1 *)((int)piVar2 + -0x20);
    local_40 = (int *)((int)piVar2 + -0x20);
    local_60 = (undefined1 *)((int)piVar2 + -0x18);
    *(undefined8 *)((int)piVar2 + -8) = 0;
    *(undefined4 *)((int)piVar2 + -0x18) = 0;
    *(undefined4 *)((int)piVar2 + -0x14) = 0;
    *(undefined4 *)((int)piVar2 + -0x10) = 0;
    *(undefined4 *)((int)piVar2 + -0xc) = 0;
    *(undefined4 *)((int)piVar2 + -0x24) = 0x101808e7;
    FUN_10002eb6();
    local_14 = 5;
    local_28 = 1;
    local_26 = 1;
    *(char **)((int)piVar2 + -0x24) = "Game/FunnyGameUIViewLog.log";
    *(undefined4 *)((int)piVar2 + -0x28) = 0x10180907;
    FUN_10001f66();
    piVar3 = local_40;
    local_14 = 6;
    *local_40 = (int)local_5c;
    piVar3[1] = (int)local_7c;
    local_24 = 0;
    local_25 = 1;
    *(undefined4 *)((int)piVar2 + -0x24) = 0x10180931;
    FUN_100c8745();
    puVar5 = local_3c;
    local_20 = (undefined1 *)local_3c;
    local_14 = 7;
    if (7 < local_48) {
      local_38 = local_5c[0];
    }
    local_2b = 1;
    *(undefined1 **)((int)local_3c + -4) = &local_31;
    *(undefined4 *)((int)puVar5 + -8) = local_4c;
    *(undefined4 ****)((int)puVar5 + -0xc) = local_38;
    *(undefined4 **)((int)puVar5 + -0x10) = local_30;
    *(undefined4 *)((int)puVar5 + -0x14) = 0x1018096a;
    FUN_10005a0c();
    puVar6 = local_30;
    if (0xf < (uint)local_30[5]) {
      puVar6 = (undefined4 *)*local_30;
    }
    *(undefined4 **)(local_44 + 0x24) = puVar6;
    local_2b = 0;
    local_14 = 0xffffffff;
    *(undefined4 *)((int)puVar5 + -4) = 0x10180995;
    FUN_10001f04();
    local_24 = 0;
    local_25 = 0;
    *(undefined4 *)((int)puVar5 + -4) = 0x101809a5;
    FUN_10001fee();
    local_28 = 0;
    local_26 = 0;
    local_2c = 0;
    *local_44 = *local_44 | 0x81;
    local_44[0x40] = 1;
    *(undefined4 *)((int)puVar5 + -4) = 0x101809c2;
    puVar6 = (undefined4 *)FUN_100fcb2d();
    *puVar6 = 0x41a00000;
    *(undefined4 *)((int)puVar5 + -4) = 0x101809cd;
    FUN_10180ba0();
    *(undefined4 *)((int)puVar5 + -4) = 0x101809d2;
    FUN_10181092();
    *(undefined4 *)((int)puVar5 + -4) = 2;
    *(undefined4 *)((int)puVar5 + -8) = 0;
    *(undefined4 *)((int)puVar5 + -0xc) = 0;
    puVar9 = (undefined1 *)((int)puVar5 + -0x10);
    *(undefined4 *)((int)puVar5 + -0x10) = 0x101809de;
    pHVar7 = MonitorFromPoint(*(POINT *)((int)puVar5 + -0xc),*(DWORD *)((int)puVar5 + -4));
    *(HMONITOR *)(puVar9 + -4) = pHVar7;
    *(undefined4 *)(puVar9 + -8) = 0x101809e4;
    fVar10 = (float10)FUN_1019a395();
    DAT_10389df0 = (float)fVar10;
    *(undefined4 *)(puVar9 + -4) = 0x101809f2;
    FUN_101567e8();
  }
  *unaff_FS_OFFSET = local_1c;
  return local_64 != 0;
}

