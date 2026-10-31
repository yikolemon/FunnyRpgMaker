/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003f776 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14003f776(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  short sVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined2 *puVar16;
  short sVar17;
  uint *puVar18;
  undefined8 *puVar19;
  longlong local_b0;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  uint *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_1 + 4);
  if (uVar3 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_140001000(param_2);
    return param_2;
  }
  if (7 < *(ulonglong *)(param_1 + 6)) {
    param_1 = *(uint **)param_1;
  }
  puVar1 = (uint *)((longlong)param_1 + uVar3 * 2);
  puVar18 = param_1;
  if ((longlong)uVar3 < 2) goto LAB_14003f8f9;
  uVar2 = *param_1;
  if ((uVar2 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    puVar18 = param_1 + 1;
    goto LAB_14003f8f9;
  }
  if (((short)uVar2 != 0x5c) && ((uVar2 & 0xffff) != 0x2f)) goto LAB_14003f8f9;
  uVar12 = uVar2 >> 0x10;
  sVar11 = (short)(uVar2 >> 0x10);
  if (uVar3 < 4) {
    if (uVar3 == 2) goto LAB_14003f8f9;
  }
  else if (((*(short *)((longlong)param_1 + 6) == 0x5c) ||
           (*(short *)((longlong)param_1 + 6) == 0x2f)) &&
          ((uVar3 == 4 || (((short)param_1[2] != 0x2f && ((short)param_1[2] != 0x5c)))))) {
    puVar15 = (uint *)((longlong)param_1 + 6);
    puVar18 = puVar15;
    if ((sVar11 == 0x2f) || (uVar12 == 0x5c)) {
      sVar17 = (short)param_1[1];
      if ((sVar17 == 0x2e) || (sVar17 == 0x3f)) goto LAB_14003f8f9;
      if (uVar12 != 0x3f) goto LAB_14003f882;
    }
    else {
      puVar18 = param_1;
      if (uVar12 != 0x3f) goto LAB_14003f8f9;
      sVar17 = (short)param_1[1];
    }
    puVar18 = puVar15;
    if (sVar17 != 0x3f) {
      puVar18 = param_1;
    }
    goto LAB_14003f8f9;
  }
LAB_14003f882:
  if ((((sVar11 == 0x5c) || (puVar18 = param_1, uVar12 == 0x2f)) &&
      (puVar18 = param_1, (short)param_1[1] != 0x2f)) &&
     (((short)param_1[1] != 0x5c &&
      (puVar15 = (uint *)((longlong)param_1 + 6), puVar18 = puVar15, uVar3 != 3)))) {
    lVar10 = uVar3 * 2 + -6;
    do {
      puVar18 = puVar15;
      if (((short)*puVar15 == 0x2f) || ((short)*puVar15 == 0x5c)) break;
      puVar15 = (uint *)((longlong)puVar15 + 2);
      lVar10 = lVar10 + -2;
      puVar18 = puVar1;
    } while (lVar10 != 0);
  }
LAB_14003f8f9:
  puVar16 = &local_a8;
  local_88 = param_2;
  FUN_14004060c(puVar16,param_1,puVar18,&local_78);
  if (7 < uStack_90) {
    puVar16 = (undefined2 *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
  }
  if (local_98 != 0) {
    lVar10 = local_98 * 2;
    lVar13 = 0;
    do {
      if (*(short *)((longlong)puVar16 + lVar13) == 0x2f) {
        *(undefined2 *)((longlong)puVar16 + lVar13) = 0x5c;
      }
      lVar13 = lVar13 + 2;
    } while (lVar10 != lVar13);
  }
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_80 = (uint *)0x13;
  FUN_140040670(&local_78);
  local_80 = puVar18;
  if ((puVar18 == puVar1) || (((short)*puVar18 != 0x5c && ((short)*puVar18 != 0x2f)))) {
    bVar5 = false;
  }
  else {
    FUN_1400168f8(&local_a8,0x5c);
    bVar5 = true;
    do {
      local_80 = (uint *)((longlong)local_80 + 2);
      if (local_80 == puVar1) break;
    } while ((*(short *)local_80 == 0x5c) || (*(short *)local_80 == 0x2f));
  }
  while (local_80 != puVar1) {
    if (((short)*local_80 == 0x5c) || (puVar18 = local_80, (short)*local_80 == 0x2f)) {
      if ((local_78 == puStack_70) || (puStack_70[-1] != 0)) {
        if (puStack_70 == local_68) {
          FUN_1400407ba(&local_78);
        }
        else {
          *puStack_70 = 0;
          puStack_70[1] = 0;
          puStack_70 = puStack_70 + 2;
        }
      }
      local_80 = (uint *)((longlong)local_80 + 2);
    }
    else {
      do {
        puVar18 = (uint *)((longlong)puVar18 + 2);
        if ((puVar18 == puVar1) || (*(short *)puVar18 == 0x2f)) break;
      } while (*(short *)puVar18 != 0x5c);
      local_b0 = (longlong)puVar18 - (longlong)local_80 >> 1;
      FUN_140040918(&local_78,&local_80,&local_b0);
      local_80 = puVar18;
    }
  }
  puVar19 = local_78;
  if (local_78 != puStack_70) {
    puVar14 = local_78 + 2;
    do {
      uVar4 = puVar14[-2];
      lVar10 = puVar14[-1];
      if (lVar10 == 2) {
        lVar13 = thunk_FUN_14018b6d0(uVar4,&DAT_140edd08e,2);
        if (lVar13 != 2) goto code_r0x00014003fb18;
        if ((puVar19 != local_78) &&
           ((puVar9 = puVar19 + -4, puVar19[-3] != 2 ||
            (lVar10 = thunk_FUN_14018b6d0(*puVar9,&DAT_140edd08e,2), lVar10 != 2)))) {
          puVar19 = puVar9;
          if (puVar14 != puStack_70) goto LAB_14003fb30;
          break;
        }
        uVar8 = _UNK_1401c82d4;
        uVar7 = _UNK_1401c82d0;
        uVar6 = PTR_DAT_1401c82c8._4_4_;
        if (bVar5) goto LAB_14003fb10;
        *(undefined4 *)puVar19 = PTR_DAT_1401c82c8._0_4_;
        *(undefined4 *)((longlong)puVar19 + 4) = uVar6;
        *(undefined4 *)(puVar19 + 1) = uVar7;
        *(undefined4 *)((longlong)puVar19 + 0xc) = uVar8;
        if (puVar14 == puStack_70) goto LAB_14003fb6c;
LAB_14003fb29:
        puVar19 = puVar19 + 4;
      }
      else {
        if ((lVar10 != 1) || (lVar13 = thunk_FUN_14018b6d0(uVar4,&DAT_140edd090,1), lVar13 != 1)) {
code_r0x00014003fb18:
          *puVar19 = uVar4;
          puVar19[1] = lVar10;
          if (puVar14 != puStack_70) goto LAB_14003fb29;
LAB_14003fb6c:
          puVar19 = puVar19 + 2;
          break;
        }
LAB_14003fb10:
        if (puVar14 == puStack_70) break;
      }
LAB_14003fb30:
      puVar9 = puVar14 + 2;
      puVar14 = puVar14 + 4;
    } while (puVar9 != puStack_70);
  }
  if (puVar19 != puStack_70) {
    puStack_70 = (undefined8 *)thunk_FUN_1400407a2(puStack_70,puStack_70,puVar19);
  }
  if ((((0x10 < (ulonglong)((longlong)puStack_70 - (longlong)local_78)) && (puStack_70[-1] == 0)) &&
      (puStack_70[-3] == 2)) &&
     (lVar10 = thunk_FUN_14018b6d0(puStack_70[-4],&DAT_140edd08e,2), lVar10 == 2)) {
    puStack_70 = puStack_70 + -2;
  }
  puVar19 = puStack_70;
  for (puVar14 = local_78; puVar14 != puVar19; puVar14 = puVar14 + 2) {
    if (puVar14[1] == 0) {
      FUN_1400168f8(&local_a8,0x5c);
    }
    else {
      FUN_140016bfa(&local_a8,*puVar14);
    }
  }
  if (local_98 == 0) {
    FUN_140016930(&local_a8,&DAT_140edd090,1);
  }
  *(undefined4 *)(local_88 + 2) = (undefined4)local_98;
  *(undefined4 *)((longlong)local_88 + 0x14) = local_98._4_4_;
  *(undefined4 *)(local_88 + 3) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)local_88 + 0x1c) = uStack_90._4_4_;
  *(uint *)local_88 = CONCAT22(uStack_a6,local_a8);
  *(undefined4 *)((longlong)local_88 + 4) = uStack_a4;
  *(undefined4 *)(local_88 + 1) = uStack_a0;
  *(undefined4 *)((longlong)local_88 + 0xc) = uStack_9c;
  local_98 = 0;
  uStack_90 = 7;
  local_a8 = 0;
  FUN_1400022f6(&local_78);
  FUN_140001e90(&local_a8);
  return local_88;
}

