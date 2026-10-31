/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008264e */

int FUN_14008264e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined7 extraout_var;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  char *pcVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  ushort *puVar21;
  undefined2 uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  longlong lVar29;
  ushort uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  byte *pbVar34;
  uint uVar35;
  undefined1 auStackY_e8 [32];
  int local_98;
  uint local_94;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_e8;
  bVar8 = FUN_140084000((longlong)param_1);
  local_98 = -2;
  if ((((int)CONCAT71(extraout_var,bVar8) != 0) ||
      (puVar33 = (undefined8 *)param_1[2], puVar33 == (undefined8 *)0x0)) ||
     ((pbVar34 = (byte *)*param_1, pbVar34 == (byte *)0x0 && ((int)param_1[1] != 0))))
  goto LAB_140082687;
  lVar7 = param_1[5];
  iVar11 = *(int *)(lVar7 + 8);
  if (iVar11 == 0x3f3f) {
    *(undefined4 *)(lVar7 + 8) = 0x3f40;
    pbVar34 = (byte *)*param_1;
    puVar33 = (undefined8 *)param_1[2];
    iVar11 = 0x3f40;
  }
  uVar6 = *(uint *)(param_1 + 1);
  uVar26 = *(uint *)(param_1 + 3);
  uVar28 = *(uint *)(lVar7 + 0x48);
  uVar35 = *(uint *)(lVar7 + 0x4c);
  lVar1 = lVar7 + 0x90;
  lVar2 = lVar7 + 0x550;
  plVar3 = (longlong *)(lVar7 + 0x88);
  puVar4 = (undefined *)(lVar7 + 0x310);
  local_98 = 0;
  uVar32 = uVar6;
  local_94 = uVar26;
LAB_14008276a:
  pbVar25 = pbVar34;
  switch(iVar11) {
  case 0x3f34:
    uVar24 = *(uint *)(lVar7 + 0x10);
    if (uVar24 == 0) {
      *(undefined4 *)(lVar7 + 8) = 0x3f40;
    }
    else {
      if (uVar35 < 0x10) {
        do {
          if (uVar32 == 0) goto LAB_140083c61;
          uVar32 = uVar32 - 1;
          bVar18 = *pbVar34;
          pbVar34 = pbVar34 + 1;
          uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
          bVar8 = uVar35 < 8;
          uVar35 = uVar35 + 8;
        } while (bVar8);
      }
      if (((uVar24 & 2) == 0) || (uVar28 != 0x8b1f)) {
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          *(undefined4 *)(*(longlong *)(lVar7 + 0x28) + 0x40) = 0xffffffff;
          uVar24 = *(uint *)(lVar7 + 0x10);
        }
        if (((uVar24 & 1) == 0) ||
           (0x8421084 < ((uVar28 >> 8) + (uVar28 & 0xff) * 0x100) * -0x42108421)) {
          pcVar17 = "incorrect header check";
          goto LAB_140083bbe;
        }
        if ((uVar28 & 0xf) != 8) goto LAB_140083bb7;
        uVar20 = uVar28 >> 4 & 0xf;
        uVar24 = uVar20 + 8;
        uVar10 = *(uint *)(lVar7 + 0x30);
        if (*(uint *)(lVar7 + 0x30) == 0) {
          *(uint *)(lVar7 + 0x30) = uVar24;
          uVar10 = uVar24;
        }
        if ((uVar20 < 8) && (uVar24 <= uVar10)) {
          *(int *)(lVar7 + 0x1c) = 0x100 << (sbyte)uVar20;
          *(undefined4 *)(lVar7 + 0x18) = 0;
          uVar35 = 0;
          uVar12 = FUN_1400841d5(0,(byte *)0x0,0);
          *(undefined4 *)(lVar7 + 0x20) = uVar12;
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
          *(uint *)(lVar7 + 8) = (uint)((uVar28 >> 0xd & 1) == 0) * 2 + 0x3f3d;
          uVar28 = 0;
        }
        else {
          uVar35 = uVar35 - 4;
          param_1[4] = (longlong)"invalid window size";
          *(undefined4 *)(lVar7 + 8) = 0x3f51;
          uVar28 = uVar28 >> 4;
        }
      }
      else {
        if (*(int *)(lVar7 + 0x30) == 0) {
          *(undefined4 *)(lVar7 + 0x30) = 0xf;
        }
        uVar28 = 0;
        uVar35 = FUN_1400841cd(0,(byte *)0x0,0);
        local_4c = CONCAT22(local_4c._2_2_,0x8b1f);
        uVar12 = FUN_1400841cd(uVar35,(byte *)&local_4c,2);
        *(undefined4 *)(lVar7 + 0x20) = uVar12;
        *(undefined4 *)(lVar7 + 8) = 0x3f35;
        uVar35 = 0;
      }
    }
    break;
  case 0x3f35:
    if (uVar35 < 0x10) {
      do {
        if (uVar32 == 0) goto LAB_140083c61;
        uVar32 = uVar32 - 1;
        bVar18 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
        bVar8 = uVar35 < 8;
        uVar35 = uVar35 + 8;
      } while (bVar8);
    }
    *(uint *)(lVar7 + 0x18) = uVar28;
    if ((char)uVar28 == '\b') {
      if ((uVar28 & 0xe000) == 0) {
        uVar35 = uVar28;
        if (*(uint **)(lVar7 + 0x28) != (uint *)0x0) {
          **(uint **)(lVar7 + 0x28) = uVar28 >> 8 & 1;
          uVar35 = *(uint *)(lVar7 + 0x18);
        }
        if (((uVar35 >> 9 & 1) != 0) && ((*(byte *)(lVar7 + 0x10) & 4) != 0)) {
          local_4c._0_2_ = CONCAT11((char)(uVar28 >> 8),8);
          uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),(byte *)&local_4c,2);
          *(undefined4 *)(lVar7 + 0x20) = uVar12;
        }
        *(undefined4 *)(lVar7 + 8) = 0x3f36;
        uVar35 = 0;
        uVar28 = 0;
        goto LAB_1400833da;
      }
      pcVar17 = "unknown header flags set";
    }
    else {
LAB_140083bb7:
      pcVar17 = "unknown compression method";
    }
    goto LAB_140083bbe;
  case 0x3f36:
    if (uVar35 < 0x20) {
LAB_1400833da:
      do {
        if (uVar32 == 0) goto LAB_140083c61;
        uVar32 = uVar32 - 1;
        bVar18 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
        bVar8 = uVar35 < 0x18;
        uVar35 = uVar35 + 8;
      } while (bVar8);
    }
    if (*(longlong *)(lVar7 + 0x28) != 0) {
      *(uint *)(*(longlong *)(lVar7 + 0x28) + 4) = uVar28;
    }
    if (((*(byte *)(lVar7 + 0x19) & 2) != 0) && ((*(byte *)(lVar7 + 0x10) & 4) != 0)) {
      local_4c = uVar28;
      uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),(byte *)&local_4c,4);
      *(undefined4 *)(lVar7 + 0x20) = uVar12;
    }
    *(undefined4 *)(lVar7 + 8) = 0x3f37;
    uVar35 = 0;
    uVar28 = 0;
LAB_140083447:
    do {
      if (uVar32 == 0) goto LAB_140083c61;
      uVar32 = uVar32 - 1;
      bVar18 = *pbVar34;
      pbVar34 = pbVar34 + 1;
      uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
      bVar8 = uVar35 < 8;
      uVar35 = uVar35 + 8;
    } while (bVar8);
    goto LAB_14008346e;
  case 0x3f37:
    if (uVar35 < 0x10) goto LAB_140083447;
LAB_14008346e:
    if (*(longlong *)(lVar7 + 0x28) != 0) {
      *(uint *)(*(longlong *)(lVar7 + 0x28) + 8) = uVar28 & 0xff;
      *(uint *)(*(longlong *)(lVar7 + 0x28) + 0xc) = uVar28 >> 8;
    }
    uVar24 = *(uint *)(lVar7 + 0x18);
    if (((uVar24 >> 9 & 1) != 0) && ((*(byte *)(lVar7 + 0x10) & 4) != 0)) {
      local_4c = CONCAT22(local_4c._2_2_,(short)uVar28);
      uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),(byte *)&local_4c,2);
      *(undefined4 *)(lVar7 + 0x20) = uVar12;
    }
    *(undefined4 *)(lVar7 + 8) = 0x3f38;
    uVar28 = 0;
    uVar35 = 0;
    uVar10 = 0;
    uVar20 = 0;
    if ((uVar24 >> 10 & 1) == 0) {
LAB_1400834de:
      uVar35 = uVar10;
      uVar28 = uVar20;
      if (*(longlong *)(lVar7 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x10) = 0;
      }
    }
    else {
LAB_1400834f1:
      do {
        if (uVar32 == 0) goto LAB_140083c35;
        uVar32 = uVar32 - 1;
        bVar18 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
        bVar8 = uVar35 < 8;
        uVar35 = uVar35 + 8;
      } while (bVar8);
LAB_140083518:
      *(uint *)(lVar7 + 0x50) = uVar28;
      if (*(longlong *)(lVar7 + 0x28) != 0) {
        *(uint *)(*(longlong *)(lVar7 + 0x28) + 0x18) = uVar28;
        uVar24 = *(uint *)(lVar7 + 0x18);
      }
      if ((uVar24 >> 9 & 1) == 0) {
        uVar35 = 0;
        uVar28 = 0;
      }
      else {
        if ((*(byte *)(lVar7 + 0x10) & 4) != 0) {
          local_4c = CONCAT22(local_4c._2_2_,(short)uVar28);
          uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),(byte *)&local_4c,2);
          *(undefined4 *)(lVar7 + 0x20) = uVar12;
        }
        uVar35 = 0;
        uVar28 = 0;
      }
    }
    *(undefined4 *)(lVar7 + 8) = 0x3f39;
switchD_14008277f_caseD_3f39:
    uVar24 = *(uint *)(lVar7 + 0x18);
    if ((uVar24 >> 10 & 1) != 0) {
      uVar10 = *(uint *)(lVar7 + 0x50);
      uVar20 = uVar32;
      if (uVar10 < uVar32) {
        uVar20 = uVar10;
      }
      if (uVar20 != 0) {
        lVar16 = *(longlong *)(lVar7 + 0x28);
        if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0x10) != 0)) {
          uVar9 = *(uint *)(lVar16 + 0x1c);
          uVar10 = *(int *)(lVar16 + 0x18) - uVar10;
          if (uVar10 <= uVar9 && uVar9 - uVar10 != 0) {
            uVar24 = uVar9 - uVar10;
            if (uVar10 + uVar20 <= uVar9) {
              uVar24 = uVar20;
            }
            FUN_1400b3550((undefined8 *)(*(longlong *)(lVar16 + 0x10) + (ulonglong)uVar10),
                          (undefined8 *)pbVar34,(ulonglong)uVar24);
            uVar24 = *(uint *)(lVar7 + 0x18);
          }
        }
        if (((uVar24 >> 9 & 1) != 0) && ((*(byte *)(lVar7 + 0x10) & 4) != 0)) {
          uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),pbVar34,uVar20);
          *(undefined4 *)(lVar7 + 0x20) = uVar12;
        }
        uVar32 = uVar32 - uVar20;
        pbVar34 = pbVar34 + uVar20;
        uVar10 = *(int *)(lVar7 + 0x50) - uVar20;
        *(uint *)(lVar7 + 0x50) = uVar10;
      }
      if (uVar10 != 0) goto LAB_140083c64;
    }
    *(undefined4 *)(lVar7 + 0x50) = 0;
    *(undefined4 *)(lVar7 + 8) = 0x3f3a;
LAB_1400835fb:
    if ((uVar24 >> 0xb & 1) == 0) {
      if (*(longlong *)(lVar7 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x20) = 0;
      }
LAB_1400836ac:
      *(undefined4 *)(lVar7 + 0x50) = 0;
      *(undefined4 *)(lVar7 + 8) = 0x3f3b;
switchD_14008277f_caseD_3f3b:
      if ((*(byte *)(lVar7 + 0x19) & 0x10) == 0) {
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x30) = 0;
        }
LAB_14008376a:
        *(undefined4 *)(lVar7 + 8) = 0x3f3c;
switchD_14008277f_caseD_3f3c:
        if ((*(uint *)(lVar7 + 0x18) >> 9 & 1) != 0) {
          uVar10 = uVar35;
          if (uVar35 < 0x10) {
            do {
              if (uVar32 == 0) goto LAB_140083c61;
              uVar32 = uVar32 - 1;
              bVar18 = *pbVar34;
              pbVar34 = pbVar34 + 1;
              uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
              uVar10 = uVar35 + 8;
              bVar8 = uVar35 < 8;
              uVar35 = uVar10;
            } while (bVar8);
          }
          uVar35 = 0;
          if (((*(byte *)(lVar7 + 0x10) & 4) != 0) && (uVar28 != *(ushort *)(lVar7 + 0x20))) {
            pcVar17 = "header crc mismatch";
LAB_1400838e8:
            param_1[4] = (longlong)pcVar17;
            *(undefined4 *)(lVar7 + 8) = 0x3f51;
            uVar35 = uVar10;
            break;
          }
          uVar28 = 0;
        }
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          *(uint *)(*(longlong *)(lVar7 + 0x28) + 0x3c) = *(uint *)(lVar7 + 0x18) >> 9 & 1;
          *(undefined4 *)(*(longlong *)(lVar7 + 0x28) + 0x40) = 1;
        }
        uVar12 = FUN_1400841cd(0,(byte *)0x0,0);
        *(undefined4 *)(lVar7 + 0x20) = uVar12;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
        *(undefined4 *)(lVar7 + 8) = 0x3f3f;
        break;
      }
      if (uVar32 != 0) {
        uVar14 = 0;
        do {
          bVar18 = pbVar34[uVar14];
          lVar16 = *(longlong *)(lVar7 + 0x28);
          if ((lVar16 != 0) && (lVar29 = *(longlong *)(lVar16 + 0x30), lVar29 != 0)) {
            uVar24 = *(uint *)(lVar7 + 0x50);
            if (uVar24 < *(uint *)(lVar16 + 0x38)) {
              *(uint *)(lVar7 + 0x50) = uVar24 + 1;
              *(byte *)(lVar29 + (ulonglong)uVar24) = bVar18;
            }
          }
          uVar14 = uVar14 + 1;
        } while ((bVar18 != 0) && (uVar14 < uVar32));
        if (((*(byte *)(lVar7 + 0x19) & 2) != 0) && ((*(byte *)(lVar7 + 0x10) & 4) != 0)) {
          uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),pbVar34,(uint)uVar14);
          *(undefined4 *)(lVar7 + 0x20) = uVar12;
        }
        if (bVar18 != 0) goto LAB_140083dc3;
        uVar32 = uVar32 - (uint)uVar14;
        pbVar34 = pbVar34 + uVar14;
        goto LAB_14008376a;
      }
      goto LAB_140083c61;
    }
    if (uVar32 == 0) {
      uVar32 = 0;
    }
    else {
      uVar14 = 0;
      do {
        bVar18 = pbVar34[uVar14];
        lVar16 = *(longlong *)(lVar7 + 0x28);
        if ((lVar16 != 0) && (lVar29 = *(longlong *)(lVar16 + 0x20), lVar29 != 0)) {
          uVar24 = *(uint *)(lVar7 + 0x50);
          if (uVar24 < *(uint *)(lVar16 + 0x28)) {
            *(uint *)(lVar7 + 0x50) = uVar24 + 1;
            *(byte *)(lVar29 + (ulonglong)uVar24) = bVar18;
          }
        }
        uVar14 = uVar14 + 1;
      } while ((bVar18 != 0) && (uVar14 < uVar32));
      if (((*(byte *)(lVar7 + 0x19) & 2) != 0) && ((*(byte *)(lVar7 + 0x10) & 4) != 0)) {
        uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),pbVar34,(uint)uVar14);
        *(undefined4 *)(lVar7 + 0x20) = uVar12;
      }
      if (bVar18 == 0) {
        uVar32 = uVar32 - (uint)uVar14;
        pbVar34 = pbVar34 + uVar14;
        goto LAB_1400836ac;
      }
LAB_140083dc3:
      pbVar34 = pbVar34 + uVar14;
      uVar32 = uVar32 - (int)uVar14;
    }
    goto LAB_140083c64;
  case 0x3f38:
    uVar24 = *(uint *)(lVar7 + 0x18);
    uVar10 = uVar35;
    uVar20 = uVar28;
    if ((uVar24 >> 10 & 1) != 0) {
      if (uVar35 < 0x10) goto LAB_1400834f1;
      goto LAB_140083518;
    }
    goto LAB_1400834de;
  case 0x3f39:
    goto switchD_14008277f_caseD_3f39;
  case 0x3f3a:
    uVar24 = *(uint *)(lVar7 + 0x18);
    goto LAB_1400835fb;
  case 0x3f3b:
    goto switchD_14008277f_caseD_3f3b;
  case 0x3f3c:
    goto switchD_14008277f_caseD_3f3c;
  case 0x3f3d:
    if (uVar35 < 0x20) {
      do {
        if (uVar32 == 0) goto LAB_140083c61;
        uVar32 = uVar32 - 1;
        bVar18 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
        bVar8 = uVar35 < 0x18;
        uVar35 = uVar35 + 8;
      } while (bVar8);
    }
    uVar35 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18;
    *(uint *)(lVar7 + 0x20) = uVar35;
    *(uint *)((longlong)param_1 + 0x4c) = uVar35;
    *(undefined4 *)(lVar7 + 8) = 0x3f3e;
    uVar28 = 0;
    uVar35 = 0;
  case 0x3f3e:
    if (*(int *)(lVar7 + 0x14) != 0) {
      uVar12 = FUN_1400841d5(0,(byte *)0x0,0);
      *(undefined4 *)(lVar7 + 0x20) = uVar12;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
      *(undefined4 *)(lVar7 + 8) = 0x3f3f;
switchD_14008277f_caseD_3f3f:
      bVar18 = (byte)uVar35;
      if (*(int *)(lVar7 + 0xc) != 0) {
        uVar35 = uVar35 & 0xfffffff8;
        *(undefined4 *)(lVar7 + 8) = 0x3f4e;
        uVar28 = uVar28 >> (bVar18 & 7);
        break;
      }
      if (2 < uVar35) {
LAB_140082a4e:
        *(uint *)(lVar7 + 0xc) = uVar28 & 1;
        switch(uVar28 >> 1 & 3) {
        case 0:
          uVar12 = 0x3f41;
          break;
        case 1:
          FUN_1400841dd(lVar7);
          uVar12 = 0x3f47;
          break;
        case 2:
          uVar12 = 0x3f44;
          break;
        case 3:
          param_1[4] = (longlong)"invalid block type";
          uVar12 = 0x3f51;
        }
        *(undefined4 *)(lVar7 + 8) = uVar12;
        uVar28 = uVar28 >> 3;
        uVar35 = uVar35 - 3;
        break;
      }
      if (uVar32 != 0) {
        uVar35 = uVar35 | 8;
        uVar32 = uVar32 - 1;
        bVar5 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        uVar28 = ((uint)bVar5 << (bVar18 & 0x1f)) + uVar28;
        goto LAB_140082a4e;
      }
      goto LAB_140083c61;
    }
    param_1[2] = (longlong)puVar33;
    *(uint *)(param_1 + 3) = uVar26;
    *param_1 = (longlong)pbVar34;
    *(uint *)(param_1 + 1) = uVar32;
    *(uint *)(lVar7 + 0x48) = uVar28;
    *(uint *)(lVar7 + 0x4c) = uVar35;
    local_98 = 2;
    goto LAB_140082687;
  case 0x3f3f:
  case 0x3f40:
    goto switchD_14008277f_caseD_3f3f;
  case 0x3f41:
    uVar28 = uVar28 >> ((byte)uVar35 & 7);
    uVar24 = uVar35 & 0xfffffff8;
    bVar8 = uVar35 < 0x20;
    uVar35 = uVar24;
    if (bVar8) {
      do {
        if (uVar32 == 0) {
          uVar32 = 0;
          goto LAB_140083c64;
        }
        uVar32 = uVar32 - 1;
        bVar18 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
        uVar24 = uVar35 + 8;
        bVar8 = uVar35 < 0x18;
        uVar35 = uVar24;
      } while (bVar8);
    }
    if ((uVar28 & 0xffff) == ~uVar28 >> 0x10) {
      *(uint *)(lVar7 + 0x50) = uVar28 & 0xffff;
      uVar28 = 0;
      uVar35 = 0;
      goto switchD_14008277f_caseD_3f42;
    }
    pcVar17 = "invalid stored block lengths";
    goto LAB_140083bbe;
  case 0x3f42:
switchD_14008277f_caseD_3f42:
    *(undefined4 *)(lVar7 + 8) = 0x3f43;
  case 0x3f43:
    uVar24 = *(uint *)(lVar7 + 0x50);
    if (uVar24 == 0) {
      *(undefined4 *)(lVar7 + 8) = 0x3f3f;
    }
    else {
      if (uVar32 <= uVar24) {
        uVar24 = uVar32;
      }
      if (uVar26 <= uVar24) {
        uVar24 = uVar26;
      }
      if (uVar24 == 0) goto LAB_140083c64;
      uVar14 = (ulonglong)uVar24;
      FUN_1400b3550(puVar33,(undefined8 *)pbVar34,uVar14);
      uVar32 = uVar32 - uVar24;
      pbVar34 = pbVar34 + uVar14;
      uVar26 = uVar26 - uVar24;
      puVar33 = (undefined8 *)((longlong)puVar33 + uVar14);
      *(int *)(lVar7 + 0x50) = *(int *)(lVar7 + 0x50) - uVar24;
    }
    break;
  case 0x3f44:
    if (uVar35 < 0xe) {
      do {
        if (uVar32 == 0) goto LAB_140083c61;
        uVar32 = uVar32 - 1;
        bVar18 = *pbVar34;
        pbVar34 = pbVar34 + 1;
        uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
        bVar8 = uVar35 < 6;
        uVar35 = uVar35 + 8;
      } while (bVar8);
    }
    uVar10 = uVar28 & 0x1f;
    *(uint *)(lVar7 + 0x7c) = uVar10 + 0x101;
    uVar20 = uVar28 >> 5 & 0x1f;
    *(uint *)(lVar7 + 0x80) = uVar20 + 1;
    uVar24 = (uVar28 >> 10 & 0xf) + 4;
    *(uint *)(lVar7 + 0x78) = uVar24;
    uVar28 = uVar28 >> 0xe;
    uVar35 = uVar35 - 0xe;
    if (uVar20 < 0x1e && uVar10 < 0x1e) {
      *(undefined4 *)(lVar7 + 0x84) = 0;
      *(undefined4 *)(lVar7 + 8) = 0x3f45;
      uVar10 = 0;
LAB_140082bd9:
      puVar21 = (ushort *)(&DAT_14010a690 + (ulonglong)uVar10 * 2);
      uVar13 = (ulonglong)uVar10;
      do {
        uVar10 = uVar35;
        if (uVar35 < 3) {
          if (uVar32 == 0) goto LAB_140083c61;
          uVar10 = uVar35 | 8;
          bVar18 = *pbVar34;
          uVar32 = uVar32 - 1;
          pbVar34 = pbVar34 + 1;
          uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
        }
        uVar14 = uVar13 + 1;
        *(int *)(lVar7 + 0x84) = (int)uVar13 + 1;
        *(ushort *)(lVar7 + 0x90 + (ulonglong)*puVar21 * 2) = (ushort)uVar28 & 7;
        uVar28 = uVar28 >> 3;
        uVar35 = uVar10 - 3;
        puVar21 = puVar21 + 1;
        uVar13 = uVar14;
      } while (uVar14 < uVar24);
      goto LAB_140082c45;
    }
    pcVar17 = "too many length or distance symbols";
    goto LAB_140083bbe;
  case 0x3f45:
    uVar24 = *(uint *)(lVar7 + 0x78);
    uVar10 = *(uint *)(lVar7 + 0x84);
    uVar14 = (ulonglong)uVar10;
    if (uVar10 < uVar24) goto LAB_140082bd9;
LAB_140082c45:
    if ((uint)uVar14 < 0x13) {
      puVar21 = (ushort *)(&DAT_14010a690 + (uVar14 & 0xffffffff) * 2);
      do {
        *(undefined2 *)(lVar1 + (ulonglong)*puVar21 * 2) = 0;
        puVar21 = puVar21 + 1;
        uVar24 = (uint)uVar14;
        uVar10 = uVar24 + 1;
        uVar14 = (ulonglong)uVar10;
      } while (uVar24 < 0x12);
      *(uint *)(lVar7 + 0x84) = uVar10;
    }
    *(longlong *)(lVar7 + 0x88) = lVar2;
    *(longlong *)(lVar7 + 0x60) = lVar2;
    *(undefined4 *)(lVar7 + 0x70) = 7;
    uVar14 = 0;
    uVar15 = FUN_140084202(0,lVar1,0x13,plVar3,(uint *)(lVar7 + 0x70),puVar4);
    local_98 = (int)uVar15;
    if (local_98 == 0) {
      *(undefined4 *)(lVar7 + 0x84) = 0;
      *(undefined4 *)(lVar7 + 8) = 0x3f46;
      local_98 = 0;
      goto LAB_140082cff;
    }
    param_1[4] = (longlong)"invalid code lengths set";
    *(undefined4 *)(lVar7 + 8) = 0x3f51;
    break;
  case 0x3f46:
    uVar14 = (ulonglong)*(uint *)(lVar7 + 0x84);
LAB_140082cff:
    uVar24 = *(uint *)(lVar7 + 0x7c);
    uVar10 = *(int *)(lVar7 + 0x80) + uVar24;
    if ((uint)uVar14 < uVar10) {
      lVar16 = *(longlong *)(lVar7 + 0x60);
      uVar20 = ~(-1 << (*(byte *)(lVar7 + 0x70) & 0x1f));
      pbVar25 = pbVar34;
      do {
        uVar13 = (ulonglong)(uVar28 & uVar20);
        bVar18 = *(byte *)(lVar16 + 1 + uVar13 * 4);
        pbVar27 = pbVar25;
        pbVar34 = pbVar25;
        uVar9 = uVar35;
        uVar23 = uVar32;
        if (uVar35 < bVar18) {
          do {
            if (uVar23 == 0) goto LAB_140083c3a;
            uVar23 = uVar23 - 1;
            pbVar34 = pbVar27 + 1;
            uVar28 = uVar28 + ((uint)*pbVar27 << ((byte)uVar9 & 0x1f));
            uVar9 = uVar9 + 8;
            uVar13 = (ulonglong)(uVar28 & uVar20);
            bVar18 = *(byte *)(lVar16 + 1 + uVar13 * 4);
            pbVar27 = pbVar34;
          } while (uVar9 < bVar18);
        }
        uVar32 = uVar23;
        uVar35 = uVar9;
        uVar30 = *(ushort *)(lVar16 + 2 + uVar13 * 4);
        iVar11 = (int)uVar14;
        if (uVar30 < 0x10) {
          uVar28 = uVar28 >> (bVar18 & 0x1f);
          uVar35 = uVar35 - bVar18;
          *(uint *)(lVar7 + 0x84) = iVar11 + 1U;
          *(ushort *)(lVar7 + 0x90 + uVar14 * 2) = uVar30;
          uVar14 = (ulonglong)(iVar11 + 1U);
        }
        else {
          uVar9 = (uint)bVar18;
          if (uVar30 == 0x10) {
            for (; uVar35 < bVar18 + 2; uVar35 = uVar35 + 8) {
              if (uVar32 == 0) goto LAB_140083db5;
              uVar32 = uVar32 - 1;
              bVar5 = *pbVar34;
              pbVar34 = pbVar34 + 1;
              uVar28 = uVar28 + ((uint)bVar5 << ((byte)uVar35 & 0x1f));
            }
            uVar28 = uVar28 >> (bVar18 & 0x1f);
            uVar35 = uVar35 - uVar9;
            if (iVar11 == 0) {
              param_1[4] = (longlong)"invalid bit length repeat";
              *(undefined4 *)(lVar7 + 8) = 0x3f51;
              goto LAB_140083bc9;
            }
            uVar22 = *(undefined2 *)(lVar1 + (ulonglong)(iVar11 - 1) * 2);
            iVar19 = (uVar28 & 3) + 3;
            uVar28 = uVar28 >> 2;
            uVar35 = uVar35 - 2;
          }
          else {
            if (uVar30 == 0x11) {
              for (; uVar35 < bVar18 + 3; uVar35 = uVar35 + 8) {
                if (uVar32 == 0) goto LAB_140083db5;
                uVar32 = uVar32 - 1;
                bVar5 = *pbVar34;
                pbVar34 = pbVar34 + 1;
                uVar28 = uVar28 + ((uint)bVar5 << ((byte)uVar35 & 0x1f));
              }
              uVar28 = uVar28 >> (bVar18 & 0x1f);
              iVar19 = (uVar28 & 7) + 3;
              uVar28 = uVar28 >> 3;
              uVar35 = (uVar35 - uVar9) - 3;
            }
            else {
              for (; uVar35 < bVar18 + 7; uVar35 = uVar35 + 8) {
                if (uVar32 == 0) goto LAB_140083db5;
                uVar32 = uVar32 - 1;
                bVar5 = *pbVar34;
                pbVar34 = pbVar34 + 1;
                uVar28 = uVar28 + ((uint)bVar5 << ((byte)uVar35 & 0x1f));
              }
              uVar28 = uVar28 >> (bVar18 & 0x1f);
              iVar19 = (uVar28 & 0x7f) + 0xb;
              uVar28 = uVar28 >> 7;
              uVar35 = (uVar35 - uVar9) - 7;
            }
            uVar22 = 0;
          }
          uVar13 = uVar14;
          if (uVar10 < (uint)(iVar19 + iVar11)) {
            pcVar17 = "invalid bit length repeat";
            goto LAB_140083361;
          }
          do {
            uVar9 = (int)uVar13 + 1;
            uVar14 = (ulonglong)uVar9;
            *(undefined2 *)(lVar1 + uVar13 * 2) = uVar22;
            iVar19 = iVar19 + -1;
            uVar13 = uVar14;
          } while (iVar19 != 0);
          *(uint *)(lVar7 + 0x84) = uVar9;
        }
        pbVar25 = pbVar34;
      } while ((uint)uVar14 < uVar10);
    }
    if (*(short *)(lVar7 + 0x290) == 0) {
      pcVar17 = "invalid code -- missing end-of-block";
    }
    else {
      *(longlong *)(lVar7 + 0x88) = lVar2;
      *(longlong *)(lVar7 + 0x60) = lVar2;
      *(undefined4 *)(lVar7 + 0x70) = 9;
      uVar15 = FUN_140084202(1,lVar1,uVar24,plVar3,(uint *)(lVar7 + 0x70),puVar4);
      local_98 = (int)uVar15;
      if (local_98 == 0) {
        *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(lVar7 + 0x88);
        *(undefined4 *)(lVar7 + 0x74) = 6;
        uVar15 = FUN_140084202(2,lVar1 + (ulonglong)*(uint *)(lVar7 + 0x7c) * 2,
                               *(uint *)(lVar7 + 0x80),plVar3,(uint *)(lVar7 + 0x74),puVar4);
        local_98 = (int)uVar15;
        if (local_98 == 0) {
          local_98 = 0;
          goto switchD_14008277f_caseD_3f47;
        }
        pcVar17 = "invalid distances set";
      }
      else {
        pcVar17 = "invalid literal/lengths set";
      }
    }
LAB_140083361:
    param_1[4] = (longlong)pcVar17;
    *(undefined4 *)(lVar7 + 8) = 0x3f51;
    break;
  case 0x3f47:
switchD_14008277f_caseD_3f47:
    *(undefined4 *)(lVar7 + 8) = 0x3f48;
    pbVar25 = pbVar34;
  case 0x3f48:
    if ((5 < uVar32) && (0x101 < uVar26)) {
      param_1[2] = (longlong)puVar33;
      *(uint *)(param_1 + 3) = uVar26;
      *param_1 = (longlong)pbVar25;
      *(uint *)(param_1 + 1) = uVar32;
      *(uint *)(lVar7 + 0x48) = uVar28;
      *(uint *)(lVar7 + 0x4c) = uVar35;
      FUN_1400846a2(param_1,local_94);
      puVar33 = (undefined8 *)param_1[2];
      uVar26 = *(uint *)(param_1 + 3);
      pbVar34 = (byte *)*param_1;
      uVar32 = *(uint *)(param_1 + 1);
      uVar28 = *(uint *)(lVar7 + 0x48);
      uVar35 = *(uint *)(lVar7 + 0x4c);
      if (*(int *)(lVar7 + 8) == 0x3f3f) {
        *(undefined4 *)(lVar7 + 0x1be4) = 0xffffffff;
      }
      break;
    }
    *(undefined4 *)(lVar7 + 0x1be4) = 0;
    lVar16 = *(longlong *)(lVar7 + 0x60);
    uVar23 = ~(-1 << (*(byte *)(lVar7 + 0x70) & 0x1f));
    uVar14 = (ulonglong)(uVar28 & uVar23);
    uVar9 = (uint)*(byte *)(lVar16 + 1 + uVar14 * 4);
    pbVar27 = pbVar25;
    pbVar34 = pbVar25;
    uVar20 = uVar32;
    uVar24 = uVar35;
    uVar10 = uVar32;
    if (uVar35 < uVar9) {
      do {
        if (uVar10 == 0) goto LAB_140083c2b;
        pbVar34 = pbVar27 + 1;
        uVar28 = uVar28 + ((uint)*pbVar27 << ((byte)uVar24 & 0x1f));
        uVar24 = uVar24 + 8;
        uVar14 = (ulonglong)(uVar28 & uVar23);
        uVar9 = (uint)*(byte *)(lVar16 + 1 + uVar14 * 4);
        pbVar27 = pbVar34;
        uVar20 = uVar10 - 1;
        uVar10 = uVar10 - 1;
      } while (uVar24 < uVar9);
    }
    uVar35 = uVar24;
    uVar32 = uVar20;
    pbVar25 = (byte *)(lVar16 + uVar14 * 4);
    uVar30 = *(ushort *)(pbVar25 + 2);
    bVar18 = *pbVar25;
    if ((byte)(bVar18 - 1) < 0xf) {
      bVar5 = (byte)uVar9;
      uVar31 = ~(-1 << (bVar18 + bVar5 & 0x1f));
      uVar14 = (ulonglong)(((uVar28 & uVar31) >> (bVar5 & 0x1f)) + (uint)uVar30);
      uVar23 = (uint)*(byte *)(lVar16 + 1 + uVar14 * 4);
      pbVar27 = pbVar34;
      pbVar25 = pbVar34;
      uVar10 = uVar32;
      uVar20 = uVar35;
      uVar24 = uVar32;
      if (uVar35 < uVar9 + uVar23) {
        do {
          pbVar25 = pbVar34;
          if (uVar24 == 0) goto LAB_140083c3a;
          pbVar25 = pbVar27 + 1;
          uVar28 = uVar28 + ((uint)*pbVar27 << ((byte)uVar20 & 0x1f));
          uVar20 = uVar20 + 8;
          uVar14 = (ulonglong)(((uVar28 & uVar31) >> (bVar5 & 0x1f)) + (uint)uVar30);
          uVar23 = (uint)*(byte *)(lVar16 + 1 + uVar14 * 4);
          pbVar27 = pbVar25;
          uVar10 = uVar24 - 1;
          uVar24 = uVar24 - 1;
        } while (uVar20 < uVar9 + uVar23);
      }
      uVar32 = uVar10;
      pbVar34 = (byte *)(lVar16 + uVar14 * 4);
      uVar30 = *(ushort *)(pbVar34 + 2);
      bVar18 = *pbVar34;
      uVar28 = uVar28 >> (bVar5 & 0x1f);
      uVar35 = uVar20 - uVar9;
      pbVar34 = pbVar25;
      uVar24 = uVar9;
      uVar9 = uVar23;
    }
    else {
      uVar24 = 0;
    }
    uVar28 = uVar28 >> ((byte)uVar9 & 0x1f);
    uVar35 = uVar35 - uVar9;
    *(uint *)(lVar7 + 0x1be4) = uVar24 + uVar9;
    *(uint *)(lVar7 + 0x50) = (uint)uVar30;
    if (bVar18 == 0) {
      *(undefined4 *)(lVar7 + 8) = 0x3f4d;
      break;
    }
    if ((bVar18 & 0x20) != 0) {
      *(undefined4 *)(lVar7 + 0x1be4) = 0xffffffff;
      *(undefined4 *)(lVar7 + 8) = 0x3f3f;
      break;
    }
    if ((bVar18 & 0x40) == 0) {
      uVar24 = bVar18 & 0xf;
      *(uint *)(lVar7 + 0x58) = uVar24;
      *(undefined4 *)(lVar7 + 8) = 0x3f49;
LAB_140082940:
      pbVar25 = pbVar34;
      uVar10 = uVar35;
      uVar20 = uVar32;
      if (uVar24 == 0) {
        iVar11 = *(int *)(lVar7 + 0x50);
      }
      else {
        for (; uVar10 < uVar24; uVar10 = uVar10 + 8) {
          if (uVar20 == 0) goto LAB_140083c57;
          uVar28 = uVar28 + ((uint)*pbVar25 << ((byte)uVar10 & 0x1f));
          pbVar25 = pbVar25 + 1;
          uVar20 = uVar20 - 1;
        }
        iVar11 = (~(-1 << ((byte)uVar24 & 0x1f)) & uVar28) + *(int *)(lVar7 + 0x50);
        uVar28 = uVar28 >> ((byte)uVar24 & 0x1f);
        *(int *)(lVar7 + 0x50) = iVar11;
        *(int *)(lVar7 + 0x1be4) = *(int *)(lVar7 + 0x1be4) + uVar24;
        uVar35 = uVar10 - uVar24;
        pbVar34 = pbVar25;
        uVar32 = uVar20;
      }
      *(int *)(lVar7 + 0x1be8) = iVar11;
      *(undefined4 *)(lVar7 + 8) = 0x3f4a;
      pbVar25 = pbVar34;
switchD_14008277f_caseD_3f4a:
      lVar16 = *(longlong *)(lVar7 + 0x68);
      uVar23 = ~(-1 << (*(byte *)(lVar7 + 0x74) & 0x1f));
      uVar14 = (ulonglong)(uVar28 & uVar23);
      uVar9 = (uint)*(byte *)(lVar16 + 1 + uVar14 * 4);
      pbVar27 = pbVar25;
      pbVar34 = pbVar25;
      uVar20 = uVar32;
      uVar24 = uVar35;
      uVar10 = uVar32;
      if (uVar35 < uVar9) {
        do {
          if (uVar10 == 0) goto LAB_140083c2b;
          pbVar34 = pbVar27 + 1;
          uVar28 = uVar28 + ((uint)*pbVar27 << ((byte)uVar24 & 0x1f));
          uVar24 = uVar24 + 8;
          uVar14 = (ulonglong)(uVar28 & uVar23);
          uVar9 = (uint)*(byte *)(lVar16 + 1 + uVar14 * 4);
          pbVar27 = pbVar34;
          uVar20 = uVar10 - 1;
          uVar10 = uVar10 - 1;
        } while (uVar24 < uVar9);
      }
      uVar35 = uVar24;
      uVar32 = uVar20;
      pbVar25 = (byte *)(lVar16 + uVar14 * 4);
      uVar30 = *(ushort *)(pbVar25 + 2);
      bVar18 = *pbVar25;
      if (bVar18 < 0x10) {
        bVar5 = (byte)uVar9;
        uVar31 = ~(-1 << (bVar18 + bVar5 & 0x1f));
        uVar14 = (ulonglong)(((uVar28 & uVar31) >> (bVar5 & 0x1f)) + (uint)uVar30);
        uVar23 = (uint)*(byte *)(lVar16 + 1 + uVar14 * 4);
        pbVar27 = pbVar34;
        pbVar25 = pbVar34;
        uVar10 = uVar32;
        uVar20 = uVar35;
        uVar24 = uVar32;
        if (uVar35 < uVar9 + uVar23) {
          do {
            pbVar25 = pbVar34;
            if (uVar24 == 0) goto LAB_140083c3a;
            pbVar25 = pbVar27 + 1;
            uVar28 = uVar28 + ((uint)*pbVar27 << ((byte)uVar20 & 0x1f));
            uVar20 = uVar20 + 8;
            uVar14 = (ulonglong)(((uVar28 & uVar31) >> (bVar5 & 0x1f)) + (uint)uVar30);
            uVar23 = (uint)*(byte *)(lVar16 + 1 + uVar14 * 4);
            pbVar27 = pbVar25;
            uVar10 = uVar24 - 1;
            uVar24 = uVar24 - 1;
          } while (uVar20 < uVar9 + uVar23);
        }
        uVar32 = uVar10;
        pbVar34 = (byte *)(lVar16 + uVar14 * 4);
        uVar30 = *(ushort *)(pbVar34 + 2);
        uVar28 = uVar28 >> (bVar5 & 0x1f);
        bVar18 = *pbVar34;
        uVar35 = uVar20 - uVar9;
        iVar11 = uVar9 + *(int *)(lVar7 + 0x1be4);
        pbVar34 = pbVar25;
        uVar9 = uVar23;
      }
      else {
        iVar11 = *(int *)(lVar7 + 0x1be4);
      }
      uVar28 = uVar28 >> ((byte)uVar9 & 0x1f);
      uVar35 = uVar35 - uVar9;
      *(uint *)(lVar7 + 0x1be4) = iVar11 + uVar9;
      if ((bVar18 & 0x40) != 0) {
        pcVar17 = "invalid distance code";
        goto LAB_140083bbe;
      }
      *(uint *)(lVar7 + 0x54) = (uint)uVar30;
      uVar24 = bVar18 & 0xf;
      *(uint *)(lVar7 + 0x58) = uVar24;
      *(undefined4 *)(lVar7 + 8) = 0x3f4b;
LAB_140083101:
      pbVar25 = pbVar34;
      uVar20 = uVar32;
      uVar10 = uVar35;
      if (uVar24 != 0) {
        for (; uVar10 < uVar24; uVar10 = uVar10 + 8) {
          if (uVar20 == 0) goto LAB_140083c57;
          uVar28 = uVar28 + ((uint)*pbVar25 << ((byte)uVar10 & 0x1f));
          pbVar25 = pbVar25 + 1;
          uVar20 = uVar20 - 1;
        }
        *(int *)(lVar7 + 0x54) = *(int *)(lVar7 + 0x54) + (~(-1 << ((byte)uVar24 & 0x1f)) & uVar28);
        uVar28 = uVar28 >> ((byte)uVar24 & 0x1f);
        *(int *)(lVar7 + 0x1be4) = *(int *)(lVar7 + 0x1be4) + uVar24;
        uVar35 = uVar10 - uVar24;
      }
      *(undefined4 *)(lVar7 + 8) = 0x3f4c;
      pbVar34 = pbVar25;
      uVar32 = uVar20;
switchD_14008277f_caseD_3f4c:
      if (uVar26 != 0) {
        uVar24 = *(uint *)(lVar7 + 0x54);
        if (local_94 - uVar26 < uVar24) {
          uVar24 = uVar24 - (local_94 - uVar26);
          if ((*(uint *)(lVar7 + 0x38) < uVar24) && (*(int *)(lVar7 + 0x1be0) != 0)) {
            pcVar17 = "invalid distance too far back";
            goto LAB_140083bbe;
          }
          uVar10 = *(uint *)(lVar7 + 0x3c);
          uVar20 = uVar24 - uVar10;
          if (uVar24 < uVar10 || uVar20 == 0) {
            uVar10 = uVar10 - uVar24;
          }
          else {
            uVar10 = *(int *)(lVar7 + 0x34) - uVar20;
            uVar24 = uVar20;
          }
          lVar16 = (ulonglong)uVar10 + *(longlong *)(lVar7 + 0x40);
          uVar10 = *(uint *)(lVar7 + 0x50);
          if (uVar10 <= uVar24) {
            uVar24 = uVar10;
          }
        }
        else {
          lVar16 = (longlong)puVar33 - (ulonglong)uVar24;
          uVar10 = *(uint *)(lVar7 + 0x50);
          uVar24 = uVar10;
        }
        uVar20 = uVar26;
        if (uVar24 < uVar26) {
          uVar20 = uVar24;
        }
        *(uint *)(lVar7 + 0x50) = uVar10 - uVar20;
        uVar10 = uVar26;
        if (uVar24 < uVar26) {
          uVar10 = uVar24;
        }
        lVar29 = 0;
        do {
          *(undefined1 *)((longlong)puVar33 + lVar29) = *(undefined1 *)(lVar16 + lVar29);
          lVar29 = lVar29 + 1;
        } while (uVar10 != (uint)lVar29);
        uVar26 = uVar26 - uVar20;
        puVar33 = (undefined8 *)((longlong)puVar33 + lVar29);
        if (*(int *)(lVar7 + 0x50) == 0) {
LAB_14008321d:
          *(undefined4 *)(lVar7 + 8) = 0x3f48;
        }
        break;
      }
LAB_140083dce:
      uVar26 = 0;
      goto LAB_140083c64;
    }
    pcVar17 = "invalid literal/length code";
LAB_140083bbe:
    param_1[4] = (longlong)pcVar17;
    *(undefined4 *)(lVar7 + 8) = 0x3f51;
    break;
  case 0x3f49:
    uVar24 = *(uint *)(lVar7 + 0x58);
    goto LAB_140082940;
  case 0x3f4a:
    goto switchD_14008277f_caseD_3f4a;
  case 0x3f4b:
    uVar24 = *(uint *)(lVar7 + 0x58);
    goto LAB_140083101;
  case 0x3f4c:
    goto switchD_14008277f_caseD_3f4c;
  case 0x3f4d:
    if (uVar26 != 0) {
      *(undefined1 *)puVar33 = *(undefined1 *)(lVar7 + 0x50);
      puVar33 = (undefined8 *)((longlong)puVar33 + 1);
      uVar26 = uVar26 - 1;
      goto LAB_14008321d;
    }
    goto LAB_140083dce;
  case 0x3f4e:
    if (*(int *)(lVar7 + 0x10) == 0) {
      uVar24 = 0;
    }
    else {
      uVar10 = uVar35;
      if (uVar35 < 0x20) {
        do {
          if (uVar32 == 0) goto LAB_140083c35;
          uVar32 = uVar32 - 1;
          bVar18 = *pbVar34;
          pbVar34 = pbVar34 + 1;
          uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
          uVar10 = uVar35 + 8;
          bVar8 = uVar35 < 0x18;
          uVar35 = uVar10;
        } while (bVar8);
      }
      uVar35 = local_94 - uVar26;
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar35;
      *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + uVar35;
      uVar24 = *(uint *)(lVar7 + 0x10);
      uVar20 = uVar24 & 4;
      if ((uVar20 != 0) && (local_94 != uVar26)) {
        if (*(int *)(lVar7 + 0x18) == 0) {
          uVar12 = FUN_1400841d5(*(uint *)(lVar7 + 0x20),
                                 (byte *)((longlong)puVar33 - (ulonglong)uVar35),uVar35);
        }
        else {
          uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),
                                 (byte *)((longlong)puVar33 - (ulonglong)uVar35),uVar35);
        }
        *(undefined4 *)(lVar7 + 0x20) = uVar12;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
        uVar24 = *(uint *)(lVar7 + 0x10);
        uVar20 = uVar24 & 4;
      }
      uVar35 = 0;
      local_94 = uVar26;
      if (uVar20 != 0) {
        uVar20 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
        ;
        if (*(int *)(lVar7 + 0x18) != 0) {
          uVar20 = uVar28;
        }
        if (uVar20 != *(uint *)(lVar7 + 0x20)) {
          param_1[4] = (longlong)"incorrect data check";
          *(undefined4 *)(lVar7 + 8) = 0x3f51;
          uVar35 = uVar10;
          break;
        }
      }
      uVar28 = 0;
    }
    *(undefined4 *)(lVar7 + 8) = 0x3f4f;
    goto LAB_140083889;
  case 0x3f4f:
    uVar24 = *(uint *)(lVar7 + 0x10);
LAB_140083889:
    if ((uVar24 != 0) && (*(int *)(lVar7 + 0x18) != 0)) {
      uVar10 = uVar35;
      if (uVar35 < 0x20) {
        do {
          if (uVar32 == 0) goto LAB_140083c61;
          uVar32 = uVar32 - 1;
          bVar18 = *pbVar34;
          pbVar34 = pbVar34 + 1;
          uVar28 = uVar28 + ((uint)bVar18 << ((byte)uVar35 & 0x1f));
          uVar10 = uVar35 + 8;
          bVar8 = uVar35 < 0x18;
          uVar35 = uVar10;
        } while (bVar8);
      }
      uVar35 = 0;
      if (((uVar24 & 4) == 0) || (uVar28 == *(uint *)(lVar7 + 0x24))) {
        uVar28 = 0;
        goto LAB_140083dd7;
      }
      pcVar17 = "incorrect length check";
      goto LAB_1400838e8;
    }
LAB_140083dd7:
    *(undefined4 *)(lVar7 + 8) = 0x3f50;
  case 0x3f50:
    goto switchD_14008277f_caseD_3f50;
  case 0x3f51:
    local_98 = -3;
    goto LAB_140083c64;
  case 0x3f52:
    goto switchD_14008277f_caseD_3f52;
  default:
    local_98 = -2;
    goto LAB_140082687;
  }
LAB_140083bc9:
  iVar11 = *(int *)(lVar7 + 8);
  goto LAB_14008276a;
LAB_140083db5:
  uVar32 = 0;
  goto LAB_140083c64;
LAB_140083c2b:
  uVar35 = uVar35 + uVar32 * 8;
  pbVar34 = pbVar25 + uVar32;
LAB_140083c35:
  uVar32 = 0;
  goto LAB_140083c64;
LAB_140083c3a:
  uVar35 = uVar35 + uVar32 * 8;
  pbVar34 = pbVar25 + uVar32;
  uVar32 = 0;
  goto LAB_140083c64;
LAB_140083c57:
  uVar35 = uVar35 + uVar32 * 8;
  pbVar34 = pbVar34 + uVar32;
LAB_140083c61:
  uVar32 = 0;
  goto LAB_140083c64;
switchD_14008277f_caseD_3f50:
  local_98 = 1;
LAB_140083c64:
  param_1[2] = (longlong)puVar33;
  *(uint *)(param_1 + 3) = uVar26;
  *param_1 = (longlong)pbVar34;
  *(uint *)(param_1 + 1) = uVar32;
  *(uint *)(lVar7 + 0x48) = uVar28;
  *(uint *)(lVar7 + 0x4c) = uVar35;
  uVar35 = *(uint *)(param_1 + 3);
  if ((*(int *)(lVar7 + 0x34) != 0) ||
     (((uVar26 = local_94, local_94 != uVar35 && (uVar26 = uVar35, *(int *)(lVar7 + 8) < 0x3f51)) &&
      (param_2 != 4 || *(int *)(lVar7 + 8) < 0x3f4e)))) {
    iVar11 = FUN_140084bad((longlong)param_1,param_1[2],local_94 - uVar35);
    if (iVar11 != 0) {
      *(undefined4 *)(lVar7 + 8) = 0x3f52;
switchD_14008277f_caseD_3f52:
      local_98 = -4;
      goto LAB_140082687;
    }
    uVar26 = *(uint *)(param_1 + 3);
  }
  uVar35 = *(uint *)(param_1 + 1);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (uVar6 - uVar35);
  uVar28 = local_94 - uVar26;
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar28;
  *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + uVar28;
  if (((*(byte *)(lVar7 + 0x10) & 4) != 0) && (local_94 != uVar26)) {
    if (*(int *)(lVar7 + 0x18) == 0) {
      uVar12 = FUN_1400841d5(*(uint *)(lVar7 + 0x20),(byte *)(param_1[2] - (ulonglong)uVar28),uVar28
                            );
    }
    else {
      uVar12 = FUN_1400841cd(*(uint *)(lVar7 + 0x20),(byte *)(param_1[2] - (ulonglong)uVar28),uVar28
                            );
    }
    *(undefined4 *)(lVar7 + 0x20) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
  }
  iVar11 = *(int *)(lVar7 + 8);
  iVar19 = -5;
  if (local_98 != 0) {
    iVar19 = local_98;
  }
  *(uint *)(param_1 + 9) =
       (uint)(iVar11 == 0x3f42 || iVar11 == 0x3f47) * 0x100 + (uint)(iVar11 == 0x3f3f) * 0x80 +
       (uint)(*(int *)(lVar7 + 0xc) != 0) * 0x40 + *(int *)(lVar7 + 0x4c);
  if (local_94 == uVar26 && uVar6 == uVar35) {
    local_98 = iVar19;
  }
  if (param_2 == 4) {
    local_98 = iVar19;
  }
LAB_140082687:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_e8);
  }
  return local_98;
}

