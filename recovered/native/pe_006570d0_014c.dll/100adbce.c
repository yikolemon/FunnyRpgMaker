/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100adbce */

/* WARNING: Type propagation algorithm not settling */

undefined4 * __thiscall FUN_100adbce(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  short sVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *puVar12;
  short sVar13;
  int *unaff_FS_OFFSET;
  int local_58;
  undefined4 *******local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  uint uStack_40;
  undefined4 local_3c;
  uint *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  uint *local_28;
  uint *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4660;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar1 = param_1[4];
  if (uVar1 == 0) {
    *(undefined8 *)(param_2 + 4) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_10002eb6();
    *unaff_FS_OFFSET = local_1c;
    return param_2;
  }
  if (7 < param_1[5]) {
    param_1 = (uint *)*param_1;
  }
  local_24 = (uint *)((int)param_1 + uVar1 * 2);
  local_28 = param_1;
  if ((int)uVar1 < 2) goto code_r0x100add43;
  uVar2 = *param_1;
  if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    local_28 = param_1 + 1;
    goto code_r0x100add43;
  }
  if (((short)uVar2 != 0x5c) && ((uVar2 & 0xffff) != 0x2f)) goto code_r0x100add43;
  uVar8 = uVar2 >> 0x10;
  sVar7 = (short)(uVar2 >> 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 2) goto code_r0x100add43;
  }
  else if (((*(short *)((int)param_1 + 6) == 0x5c) || (*(short *)((int)param_1 + 6) == 0x2f)) &&
          ((uVar1 == 4 || (((short)param_1[2] != 0x2f && ((short)param_1[2] != 0x5c)))))) {
    puVar9 = (uint *)((int)param_1 + 6);
    local_28 = puVar9;
    if ((sVar7 == 0x2f) || (uVar8 == 0x5c)) {
      sVar13 = (short)param_1[1];
      if ((sVar13 == 0x2e) || (sVar13 == 0x3f)) goto code_r0x100add43;
      if (uVar8 != 0x3f) goto LAB_100adccb;
    }
    else {
      local_28 = param_1;
      if (uVar8 != 0x3f) goto code_r0x100add43;
      sVar13 = (short)param_1[1];
    }
    local_28 = puVar9;
    if (sVar13 != 0x3f) {
      local_28 = param_1;
    }
    goto code_r0x100add43;
  }
LAB_100adccb:
  if ((((sVar7 == 0x5c) || (local_28 = param_1, uVar8 == 0x2f)) &&
      (local_28 = param_1, (short)param_1[1] != 0x2f)) &&
     (((short)param_1[1] != 0x5c &&
      (puVar9 = (uint *)((int)param_1 + 6), local_28 = puVar9, uVar1 != 3)))) {
    iVar4 = uVar1 * 2 + -6;
    do {
      local_28 = puVar9;
      if (((short)*puVar9 == 0x2f) || ((short)*puVar9 == 0x5c)) break;
      puVar9 = (uint *)((int)puVar9 + 2);
      iVar4 = iVar4 + -2;
      local_28 = local_24;
    } while (iVar4 != 0);
  }
code_r0x100add43:
  local_14 = 0xffffffff;
  local_20 = (undefined1 *)&local_58;
  FUN_10091550(param_1,local_28,&local_34);
  local_14 = 0;
  pppppppuVar11 = &local_54;
  if (7 < uStack_40) {
    pppppppuVar11 = local_54;
  }
  if (local_44 != 0) {
    iVar4 = local_44 * 2;
    iVar5 = 0;
    do {
      if (*(short *)((int)pppppppuVar11 + iVar5) == 0x2f) {
        *(undefined2 *)((int)pppppppuVar11 + iVar5) = 0x5c;
      }
      iVar5 = iVar5 + 2;
    } while (iVar4 != iVar5);
  }
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_14 = 1;
  local_38 = (uint *)0x13;
  FUN_100ae74a(&local_38);
  local_38 = local_28;
  if ((local_28 == local_24) || (((short)*local_28 != 0x5c && ((short)*local_28 != 0x2f)))) {
    local_3c = 0;
  }
  else {
    uVar3 = FUN_100045e8(0x5c);
    local_3c = CONCAT31((int3)((uint)uVar3 >> 8),1);
    do {
      local_38 = (uint *)((int)local_38 + 2);
      local_28 = local_38;
      if (local_38 == local_24) break;
    } while ((*(short *)local_38 == 0x5c) || (*(short *)local_38 == 0x2f));
  }
  while (local_38 != local_24) {
    if (((short)*local_38 == 0x5c) || (puVar9 = local_38, (short)*local_38 == 0x2f)) {
      if ((local_34 == local_30) || (local_30[-1] != 0)) {
        if (local_30 == local_2c) {
          local_14 = 1;
          FUN_100ae86e(local_30);
        }
        else {
          *local_30 = 0;
          local_30[1] = 0;
          local_30 = local_30 + 2;
        }
      }
      local_38 = (uint *)((int)local_38 + 2);
    }
    else {
      do {
        puVar9 = (uint *)((int)puVar9 + 2);
        if ((puVar9 == local_24) || (*(short *)puVar9 == 0x2f)) break;
      } while (*(short *)puVar9 != 0x5c);
      local_58 = (int)puVar9 - (int)local_38 >> 1;
      local_14 = 1;
      local_28 = puVar9;
      FUN_100ae9cc(&local_38,&local_58);
      local_38 = local_28;
    }
  }
  puVar10 = local_34;
  if (local_34 != local_30) {
    puVar12 = local_34 + 2;
    do {
      puVar9 = (uint *)puVar12[-2];
      iVar4 = puVar12[-1];
      if (iVar4 == 2) {
        local_24 = puVar9;
        iVar5 = FUN_100047c3(puVar9,&DAT_10356ece,2);
        puVar9 = local_24;
        if (iVar5 != 2) goto code_r0x100adf65;
        if ((puVar10 != local_34) &&
           ((puVar6 = puVar10 + -4, puVar10[-3] != 2 ||
            (iVar4 = FUN_100047c3(*puVar6,&DAT_10356ece,2), iVar4 != 2)))) {
          puVar10 = puVar6;
          if (puVar12 != local_30) goto LAB_100adf78;
          break;
        }
        if ((char)local_3c != '\0') goto LAB_100adf5e;
        *puVar10 = &DAT_10356ece;
        puVar10[1] = 2;
        if (puVar12 == local_30) goto LAB_100adfae;
LAB_100adf73:
        puVar10 = puVar10 + 4;
      }
      else {
        if ((iVar4 != 1) ||
           (local_24 = puVar9, iVar5 = FUN_100047c3(puVar9,&DAT_10356ed0,1), puVar9 = local_24,
           iVar5 != 1)) {
code_r0x100adf65:
          *puVar10 = puVar9;
          puVar10[1] = iVar4;
          if (puVar12 != local_30) goto LAB_100adf73;
LAB_100adfae:
          puVar10 = puVar10 + 2;
          break;
        }
LAB_100adf5e:
        if (puVar12 == local_30) break;
      }
LAB_100adf78:
      puVar6 = puVar12 + 2;
      puVar12 = puVar12 + 4;
    } while (puVar6 != local_30);
  }
  if (puVar10 != local_30) {
    local_30 = (undefined4 *)thunk_FUN_1001bee5(local_30,local_30,puVar10);
  }
  local_28 = local_30;
  if (((8 < (uint)((int)local_30 - (int)local_34)) && (local_30[-1] == 0)) && (local_30[-3] == 2)) {
    iVar4 = FUN_100047c3(local_30[-4],&DAT_10356ece,2);
    if (iVar4 == 2) {
      local_28 = local_30 + -2;
    }
    else {
      local_28 = local_30;
    }
  }
  local_30 = local_28;
  for (local_24 = local_34; local_24 != local_28; local_24 = local_24 + 2) {
    local_14 = 1;
    if (local_24[1] == 0) {
      FUN_100045e8(0x5c);
    }
    else {
      FUN_100048de(*local_24,local_24[1]);
    }
  }
  if (local_44 == 0) {
    local_14 = 1;
    FUN_10004664(&DAT_10356ed0,1);
  }
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_40,local_44);
  *param_2 = local_54;
  param_2[1] = uStack_50;
  param_2[2] = uStack_4c;
  param_2[3] = uStack_48;
  local_44 = 0;
  uStack_40 = 7;
  local_54 = (undefined4 *******)((uint)local_54 & 0xffff0000);
  local_14 = 0xffffffff;
  FUN_10004eae();
  FUN_10001134();
  *unaff_FS_OFFSET = local_1c;
  return param_2;
}

