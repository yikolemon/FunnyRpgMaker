/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140149208 */

int FUN_140149208(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ushort *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  byte *pbVar14;
  ushort uVar15;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined1 auStack_98 [44];
  int local_6c;
  ushort *local_68;
  ulonglong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar20 = *(ushort **)(param_1 + 0x108);
  puVar17 = *(ushort **)(param_1 + 0x110);
  uVar15 = *(ushort *)(param_1 + 0x34);
  iVar13 = (int)(short)uVar15;
  if (uVar15 == 0) {
    uVar18 = 0;
    local_6c = iVar13;
    iVar5 = 0x14;
    if (puVar17 < puVar20 + 1) goto LAB_1401495e9;
  }
  else {
    if (((*(uint *)(lVar3 + 0xc) <
          (uint)*(ushort *)(lVar3 + 0x18) + iVar13 + (uint)*(ushort *)(lVar3 + 0x60)) &&
        (iVar5 = FUN_140128d2c(lVar3,0,iVar13), iVar5 != 0)) || (iVar5 = 0x14, 0xffe < uVar15))
    goto LAB_1401495e9;
    local_6c = iVar13;
    iVar5 = 0x14;
    if (puVar17 < (ushort *)((longlong)puVar20 + (ulonglong)(uint)(iVar13 * 2) + 2))
    goto LAB_1401495e9;
    puVar21 = *(ushort **)(lVar3 + 0x78);
    puVar6 = (ushort *)((ulonglong)(uint)(iVar13 * 2) + (longlong)puVar21);
    uVar18 = 0;
    do {
      uVar15 = *puVar20 << 8 | *puVar20 >> 8;
      *puVar21 = uVar15;
      if (uVar15 < uVar18) {
        iVar5 = 0x14;
        goto LAB_1401495e9;
      }
      puVar20 = puVar20 + 1;
      uVar18 = uVar15 + 1;
      puVar21 = puVar21 + 1;
    } while (puVar21 < puVar6);
  }
  if (*(uint *)(lVar3 + 8) <
      *(ushort *)(lVar3 + 0x1a) + uVar18 + 4 + (uint)*(ushort *)(lVar3 + 0x62)) {
    local_6c = iVar13;
    local_4c = FUN_140128d2c(lVar3,uVar18 + 4,0);
    iVar5 = local_4c;
    if (local_4c != 0) goto LAB_1401495e9;
  }
  else {
    local_4c = 0;
    local_6c = iVar13;
  }
  uVar15 = *puVar20 << 8 | *puVar20 >> 8;
  uVar19 = (ulonglong)uVar15;
  puVar21 = (ushort *)((longlong)puVar20 + uVar19 + 2);
  iVar5 = 0x16;
  if (puVar21 <= puVar17) {
    if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
      lVar4 = *(longlong *)(param_1 + 0xd8);
      uVar7 = *(undefined8 *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x218) != 0) {
        local_68 = puVar17;
        local_60 = uVar19;
        FUN_140128b39(uVar7,*(undefined8 *)(lVar4 + 0x220));
        *(undefined8 *)(lVar4 + 0x220) = 0;
        uVar19 = local_60;
        puVar17 = local_68;
      }
      *(undefined4 *)(lVar4 + 0x218) = 0;
      if (uVar15 != 0) {
        uVar7 = FUN_14012e98d(uVar7,puVar20 + 1,uVar19 & 0xffffffff);
        *(undefined8 *)(lVar4 + 0x220) = uVar7;
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_1401495e9;
        *(int *)(lVar4 + 0x218) = (int)uVar19;
      }
    }
    if (uVar18 != 0) {
      local_68 = (ushort *)(ulonglong)uVar18;
      pbVar8 = *(byte **)(lVar3 + 0x70) + (longlong)local_68;
      iVar5 = 0x14;
      pbVar14 = *(byte **)(lVar3 + 0x70);
      local_58 = param_1;
      do {
        puVar20 = (ushort *)((longlong)puVar21 + 1);
        if (puVar17 < puVar20) goto LAB_1401495e9;
        bVar2 = (byte)*puVar21;
        pbVar10 = pbVar14 + 1;
        *pbVar14 = bVar2;
        if ((bVar2 & 8) != 0) {
          puVar21 = puVar21 + 1;
          if (puVar17 < puVar21) goto LAB_1401495e9;
          bVar1 = *(byte *)puVar20;
          uVar19 = (ulonglong)bVar1;
          if (pbVar8 < pbVar10 + uVar19) goto LAB_1401495e9;
          puVar20 = puVar21;
          if (uVar19 != 0) {
            FUN_1401c5830(pbVar10,bVar2,uVar19);
            pbVar10 = pbVar14 + (ulonglong)(bVar1 - 1 & 0xff) + 2;
            param_1 = local_58;
          }
        }
        pbVar14 = pbVar10;
        puVar21 = puVar20;
      } while (pbVar10 < pbVar8);
      pbVar8 = *(byte **)(lVar3 + 0x70);
      if ((*pbVar8 & 0x40) != 0) {
        *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) | 0x40;
      }
      piVar11 = *(int **)(lVar3 + 0x68);
      uVar19 = (ulonglong)(uint)((int)local_68 << 3);
      piVar12 = (int *)(uVar19 + (longlong)piVar11);
      iVar13 = 0;
      do {
        bVar2 = *pbVar8;
        if ((bVar2 & 2) == 0) {
          puVar21 = puVar20;
          uVar16 = 0;
          if ((bVar2 & 0x10) == 0) {
            puVar21 = puVar20 + 1;
            if (puVar17 < puVar21) goto LAB_1401495e9;
            uVar16 = (int)(short)((ushort)(byte)*puVar20 << 8) |
                     (uint)*(byte *)((longlong)puVar20 + 1);
          }
        }
        else {
          puVar21 = (ushort *)((longlong)puVar20 + 1);
          if (puVar17 < puVar21) goto LAB_1401495e9;
          uVar16 = -(uint)(byte)*puVar20;
          if ((bVar2 & 0x10) != 0) {
            uVar16 = (uint)(byte)*puVar20;
          }
        }
        iVar13 = iVar13 + uVar16;
        *piVar11 = iVar13;
        piVar11 = piVar11 + 2;
        pbVar8 = pbVar8 + 1;
        puVar20 = puVar21;
      } while (piVar11 < piVar12);
      uVar9 = *(ulonglong *)(lVar3 + 0x68);
      pbVar8 = *(byte **)(lVar3 + 0x70);
      uVar19 = uVar19 + uVar9;
      iVar13 = 0;
      do {
        bVar2 = *pbVar8;
        if ((bVar2 & 4) == 0) {
          uVar16 = 0;
          if ((bVar2 & 0x20) == 0) {
            if (puVar17 < puVar21 + 1) goto LAB_1401495e9;
            uVar15 = *puVar21;
            pbVar14 = (byte *)((longlong)puVar21 + 1);
            puVar21 = puVar21 + 1;
            uVar16 = (int)(short)((ushort)(byte)uVar15 << 8) | (uint)*pbVar14;
          }
        }
        else {
          puVar20 = (ushort *)((longlong)puVar21 + 1);
          if (puVar17 < puVar20) goto LAB_1401495e9;
          uVar15 = *puVar21;
          puVar21 = puVar20;
          uVar16 = -(uint)(byte)uVar15;
          if ((bVar2 & 0x20) != 0) {
            uVar16 = (uint)(byte)uVar15;
          }
        }
        iVar13 = iVar13 + uVar16;
        *(int *)(uVar9 + 4) = iVar13;
        *pbVar8 = bVar2 & 1;
        uVar9 = uVar9 + 8;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 < uVar19);
    }
    *(short *)(lVar3 + 0x62) = (short)uVar18;
    *(short *)(lVar3 + 0x60) = (short)local_6c;
    *(ushort **)(param_1 + 0x108) = puVar21;
    iVar5 = local_4c;
  }
LAB_1401495e9:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return iVar5;
}

