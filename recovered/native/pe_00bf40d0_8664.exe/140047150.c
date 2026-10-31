/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047150 */

int FUN_140047150(longlong param_1)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [32];
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [32];
  int *piVar15;
  int *piVar16;
  int iVar17;
  undefined1 (*pauVar18) [32];
  ushort uVar19;
  ushort *puVar20;
  uint uVar21;
  ulonglong uVar22;
  ushort *puVar23;
  ushort *puVar24;
  undefined1 auStack_98 [44];
  int local_6c;
  ushort *local_68;
  ulonglong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  plVar5 = *(longlong **)(param_1 + 0x18);
  puVar23 = *(ushort **)(param_1 + 0x108);
  puVar20 = *(ushort **)(param_1 + 0x110);
  uVar19 = *(ushort *)(param_1 + 0x34);
  iVar17 = (int)(short)uVar19;
  if (uVar19 == 0) {
    uVar21 = 0;
    iVar8 = 0x14;
    local_6c = iVar17;
    if (puVar20 < puVar23 + 1) goto LAB_140047531;
  }
  else {
    if (((*(uint *)((longlong)plVar5 + 0xc) <
          (uint)*(ushort *)(plVar5 + 3) + iVar17 + (uint)*(ushort *)(plVar5 + 0xc)) &&
        (iVar8 = FUN_14001c730(plVar5,0,iVar17), iVar8 != 0)) || (iVar8 = 0x14, 0xffe < uVar19))
    goto LAB_140047531;
    iVar8 = 0x14;
    local_6c = iVar17;
    if (puVar20 < (ushort *)((longlong)puVar23 + (ulonglong)(uint)(iVar17 * 2) + 2))
    goto LAB_140047531;
    puVar24 = (ushort *)plVar5[0xf];
    puVar10 = (ushort *)((ulonglong)(uint)(iVar17 * 2) + (longlong)puVar24);
    uVar21 = 0;
    do {
      uVar19 = *puVar23 << 8 | *puVar23 >> 8;
      *puVar24 = uVar19;
      if (uVar19 < uVar21) {
        iVar8 = 0x14;
        goto LAB_140047531;
      }
      puVar23 = puVar23 + 1;
      uVar21 = uVar19 + 1;
      puVar24 = puVar24 + 1;
    } while (puVar24 < puVar10);
  }
  if (*(uint *)(plVar5 + 1) <
      *(ushort *)((longlong)plVar5 + 0x1a) + uVar21 + 4 + (uint)*(ushort *)((longlong)plVar5 + 0x62)
     ) {
    local_6c = iVar17;
    iVar8 = FUN_14001c730(plVar5,uVar21 + 4,0);
    local_4c = iVar8;
    if (iVar8 != 0) goto LAB_140047531;
  }
  else {
    local_4c = 0;
    local_6c = iVar17;
  }
  uVar19 = *puVar23 << 8 | *puVar23 >> 8;
  uVar9 = (uint)uVar19;
  puVar24 = (ushort *)((longlong)puVar23 + (ulonglong)uVar19 + 2);
  iVar8 = 0x16;
  if (puVar24 <= puVar20) {
    if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
      lVar6 = *(longlong *)(param_1 + 0xd8);
      lVar7 = *(longlong *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x218) != 0) {
        local_68 = puVar20;
        local_60 = (ulonglong)uVar19;
        FUN_14001c53d(lVar7,*(longlong *)(lVar6 + 0x220));
        uVar9 = (uint)local_60;
        *(undefined8 *)(lVar6 + 0x220) = 0;
        puVar20 = local_68;
      }
      *(undefined4 *)(lVar6 + 0x218) = 0;
      if (uVar19 != 0) {
        puVar11 = FUN_140021dbc(lVar7,(undefined8 *)(puVar23 + 1),uVar9,&local_4c);
        *(undefined8 **)(lVar6 + 0x220) = puVar11;
        iVar8 = local_4c;
        if (local_4c != 0) goto LAB_140047531;
        *(uint *)(lVar6 + 0x218) = uVar9;
      }
    }
    if (uVar21 != 0) {
      local_68 = (ushort *)(ulonglong)uVar21;
      pauVar2 = (undefined1 (*) [32])(*(undefined1 (*) [32])plVar5[0xe] + (longlong)local_68);
      iVar8 = 0x14;
      pauVar18 = (undefined1 (*) [32])plVar5[0xe];
      local_58 = param_1;
      do {
        puVar23 = (ushort *)((longlong)puVar24 + 1);
        if (puVar20 < puVar23) goto LAB_140047531;
        bVar4 = (byte)*puVar24;
        pauVar14 = (undefined1 (*) [32])(*pauVar18 + 1);
        (*pauVar18)[0] = bVar4;
        if ((bVar4 & 8) != 0) {
          puVar24 = puVar24 + 1;
          if (puVar20 < puVar24) goto LAB_140047531;
          bVar3 = *(byte *)puVar23;
          uVar22 = (ulonglong)bVar3;
          if (pauVar2 < (undefined1 (*) [32])(*pauVar14 + uVar22)) goto LAB_140047531;
          puVar23 = puVar24;
          if (uVar22 != 0) {
            FUN_1400b3c00(pauVar14,bVar4,uVar22);
            pauVar14 = (undefined1 (*) [32])(*pauVar18 + (ulonglong)(bVar3 - 1 & 0xff) + 2);
            param_1 = local_58;
          }
        }
        pauVar18 = pauVar14;
        puVar24 = puVar23;
      } while (pauVar14 < pauVar2);
      pbVar12 = (byte *)plVar5[0xe];
      if ((*pbVar12 & 0x40) != 0) {
        *(byte *)(plVar5 + 7) = *(byte *)(plVar5 + 7) | 0x40;
      }
      piVar15 = (int *)plVar5[0xd];
      uVar22 = (ulonglong)(uint)((int)local_68 << 3);
      piVar16 = (int *)(uVar22 + (longlong)piVar15);
      iVar17 = 0;
      do {
        bVar4 = *pbVar12;
        if ((bVar4 & 2) == 0) {
          puVar24 = puVar23;
          uVar9 = 0;
          if ((bVar4 & 0x10) == 0) {
            puVar24 = puVar23 + 1;
            if (puVar20 < puVar24) goto LAB_140047531;
            uVar9 = (int)(short)((ushort)(byte)*puVar23 << 8) |
                    (uint)*(byte *)((longlong)puVar23 + 1);
          }
        }
        else {
          puVar24 = (ushort *)((longlong)puVar23 + 1);
          if (puVar20 < puVar24) goto LAB_140047531;
          uVar9 = -(uint)(byte)*puVar23;
          if ((bVar4 & 0x10) != 0) {
            uVar9 = (uint)(byte)*puVar23;
          }
        }
        iVar17 = iVar17 + uVar9;
        *piVar15 = iVar17;
        piVar15 = piVar15 + 2;
        pbVar12 = pbVar12 + 1;
        puVar23 = puVar24;
      } while (piVar15 < piVar16);
      uVar13 = plVar5[0xd];
      pbVar12 = (byte *)plVar5[0xe];
      uVar22 = uVar22 + uVar13;
      iVar17 = 0;
      do {
        bVar4 = *pbVar12;
        if ((bVar4 & 4) == 0) {
          uVar9 = 0;
          if ((bVar4 & 0x20) == 0) {
            if (puVar20 < puVar24 + 1) goto LAB_140047531;
            uVar19 = *puVar24;
            pbVar1 = (byte *)((longlong)puVar24 + 1);
            puVar24 = puVar24 + 1;
            uVar9 = (int)(short)((ushort)(byte)uVar19 << 8) | (uint)*pbVar1;
          }
        }
        else {
          puVar23 = (ushort *)((longlong)puVar24 + 1);
          if (puVar20 < puVar23) goto LAB_140047531;
          uVar19 = *puVar24;
          puVar24 = puVar23;
          uVar9 = -(uint)(byte)uVar19;
          if ((bVar4 & 0x20) != 0) {
            uVar9 = (uint)(byte)uVar19;
          }
        }
        iVar17 = iVar17 + uVar9;
        *(int *)(uVar13 + 4) = iVar17;
        *pbVar12 = bVar4 & 1;
        uVar13 = uVar13 + 8;
        pbVar12 = pbVar12 + 1;
      } while (uVar13 < uVar22);
    }
    *(short *)((longlong)plVar5 + 0x62) = (short)uVar21;
    *(short *)(plVar5 + 0xc) = (short)local_6c;
    *(ushort **)(param_1 + 0x108) = puVar24;
    iVar8 = local_4c;
  }
LAB_140047531:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_98);
  }
  return iVar8;
}

