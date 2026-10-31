/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140184a5e */

int FUN_140184a5e(undefined8 *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  undefined2 uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  longlong lVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  longlong lVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 *puVar27;
  byte *pbVar28;
  uint uVar29;
  bool bVar30;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  int local_98;
  uint local_94;
  longlong local_90;
  int local_84;
  longlong local_80;
  uint local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  iVar3 = FUN_140186410();
  iVar5 = -2;
  if (((iVar3 != 0) || (puVar27 = (undefined1 *)param_1[2], puVar27 == (undefined1 *)0x0)) ||
     ((pbVar28 = (byte *)*param_1, pbVar28 == (byte *)0x0 && (*(int *)(param_1 + 1) != 0))))
  goto LAB_140184a97;
  lVar19 = param_1[5];
  iVar5 = *(int *)(lVar19 + 8);
  if (iVar5 == 0x3f3f) {
    *(undefined4 *)(lVar19 + 8) = 0x3f40;
    pbVar28 = (byte *)*param_1;
    puVar27 = (undefined1 *)param_1[2];
    iVar5 = 0x3f40;
  }
  uVar26 = *(uint *)(param_1 + 1);
  uVar20 = *(uint *)(param_1 + 3);
  uVar22 = *(uint *)(lVar19 + 0x48);
  uVar29 = *(uint *)(lVar19 + 0x4c);
  local_90 = lVar19 + 0x90;
  local_60 = lVar19 + 0x550;
  local_68 = lVar19 + 0x88;
  local_70 = lVar19 + 0x70;
  local_80 = lVar19 + 0x310;
  local_58 = lVar19 + 0x74;
  local_98 = 0;
  local_a8 = param_1;
  local_94 = uVar20;
  local_84 = param_2;
  local_74 = uVar26;
LAB_140184b7a:
  pbVar18 = pbVar28;
  switch(iVar5) {
  case 0x3f34:
    uVar17 = *(uint *)(lVar19 + 0x10);
    if (uVar17 == 0) {
      *(undefined4 *)(lVar19 + 8) = 0x3f40;
    }
    else {
      if (uVar29 < 0x10) {
        do {
          if (uVar26 == 0) goto LAB_140186071;
          uVar26 = uVar26 - 1;
          bVar11 = *pbVar28;
          pbVar28 = pbVar28 + 1;
          uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
          bVar30 = uVar29 < 8;
          uVar29 = uVar29 + 8;
        } while (bVar30);
      }
      if (((uVar17 & 2) == 0) || (uVar22 != 0x8b1f)) {
        if (*(longlong *)(lVar19 + 0x28) != 0) {
          *(undefined4 *)(*(longlong *)(lVar19 + 0x28) + 0x40) = 0xffffffff;
          uVar17 = *(uint *)(lVar19 + 0x10);
        }
        if (((uVar17 & 1) == 0) ||
           (0x8421084 < ((uVar22 >> 8) + (uVar22 & 0xff) * 0x100) * -0x42108421)) {
          pcVar10 = "incorrect header check";
          goto LAB_140185fce;
        }
        if ((uVar22 & 0xf) != 8) goto LAB_140185fc7;
        uVar13 = uVar22 >> 4 & 0xf;
        uVar17 = uVar13 + 8;
        uVar4 = *(uint *)(lVar19 + 0x30);
        if (*(uint *)(lVar19 + 0x30) == 0) {
          *(uint *)(lVar19 + 0x30) = uVar17;
          uVar4 = uVar17;
        }
        if ((uVar13 < 8) && (uVar17 <= uVar4)) {
          *(int *)(lVar19 + 0x1c) = 0x100 << (sbyte)uVar13;
          *(undefined4 *)(lVar19 + 0x18) = 0;
          uVar29 = 0;
          uVar6 = FUN_1401865e5(0,0,0);
          *(undefined4 *)(lVar19 + 0x20) = uVar6;
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
          *(uint *)(lVar19 + 8) = (uint)((uVar22 >> 0xd & 1) == 0) * 2 + 0x3f3d;
          uVar22 = 0;
        }
        else {
          uVar29 = uVar29 - 4;
          param_1[4] = "invalid window size";
          *(undefined4 *)(lVar19 + 8) = 0x3f51;
          uVar22 = uVar22 >> 4;
        }
      }
      else {
        if (*(int *)(lVar19 + 0x30) == 0) {
          *(undefined4 *)(lVar19 + 0x30) = 0xf;
        }
        uVar22 = 0;
        FUN_1401865dd(0,0,0);
        local_4c = CONCAT22(local_4c._2_2_,0x8b1f);
        uVar6 = FUN_1401865dd();
        *(undefined4 *)(lVar19 + 0x20) = uVar6;
        *(undefined4 *)(lVar19 + 8) = 0x3f35;
        uVar29 = 0;
      }
    }
    break;
  case 0x3f35:
    if (uVar29 < 0x10) {
      do {
        if (uVar26 == 0) goto LAB_140186071;
        uVar26 = uVar26 - 1;
        bVar11 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
        bVar30 = uVar29 < 8;
        uVar29 = uVar29 + 8;
      } while (bVar30);
    }
    *(uint *)(lVar19 + 0x18) = uVar22;
    if ((char)uVar22 == '\b') {
      if ((uVar22 & 0xe000) == 0) {
        uVar29 = uVar22;
        if (*(uint **)(lVar19 + 0x28) != (uint *)0x0) {
          **(uint **)(lVar19 + 0x28) = uVar22 >> 8 & 1;
          uVar29 = *(uint *)(lVar19 + 0x18);
        }
        if (((uVar29 >> 9 & 1) != 0) && ((*(byte *)(lVar19 + 0x10) & 4) != 0)) {
          local_4c._0_2_ = CONCAT11((char)(uVar22 >> 8),8);
          uVar6 = FUN_1401865dd(*(undefined4 *)(lVar19 + 0x20));
          *(undefined4 *)(lVar19 + 0x20) = uVar6;
        }
        *(undefined4 *)(lVar19 + 8) = 0x3f36;
        uVar29 = 0;
        uVar22 = 0;
        goto LAB_1401857ea;
      }
      pcVar10 = "unknown header flags set";
    }
    else {
LAB_140185fc7:
      pcVar10 = "unknown compression method";
    }
    goto LAB_140185fce;
  case 0x3f36:
    if (uVar29 < 0x20) {
LAB_1401857ea:
      do {
        if (uVar26 == 0) goto LAB_140186071;
        uVar26 = uVar26 - 1;
        bVar11 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
        bVar30 = uVar29 < 0x18;
        uVar29 = uVar29 + 8;
      } while (bVar30);
    }
    if (*(longlong *)(lVar19 + 0x28) != 0) {
      *(uint *)(*(longlong *)(lVar19 + 0x28) + 4) = uVar22;
    }
    if (((*(byte *)(lVar19 + 0x19) & 2) != 0) && ((*(byte *)(lVar19 + 0x10) & 4) != 0)) {
      local_4c = uVar22;
      uVar6 = FUN_1401865dd(*(undefined4 *)(lVar19 + 0x20));
      *(undefined4 *)(lVar19 + 0x20) = uVar6;
    }
    *(undefined4 *)(lVar19 + 8) = 0x3f37;
    uVar29 = 0;
    uVar22 = 0;
LAB_140185857:
    do {
      if (uVar26 == 0) goto LAB_140186071;
      uVar26 = uVar26 - 1;
      bVar11 = *pbVar28;
      pbVar28 = pbVar28 + 1;
      uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
      bVar30 = uVar29 < 8;
      uVar29 = uVar29 + 8;
    } while (bVar30);
    goto LAB_14018587e;
  case 0x3f37:
    if (uVar29 < 0x10) goto LAB_140185857;
LAB_14018587e:
    local_b0 = CONCAT44(local_b0._4_4_,uVar20);
    if (*(longlong *)(lVar19 + 0x28) != 0) {
      *(uint *)(*(longlong *)(lVar19 + 0x28) + 8) = uVar22 & 0xff;
      *(uint *)(*(longlong *)(lVar19 + 0x28) + 0xc) = uVar22 >> 8;
    }
    uVar20 = *(uint *)(lVar19 + 0x18);
    if (((uVar20 >> 9 & 1) != 0) && ((*(byte *)(lVar19 + 0x10) & 4) != 0)) {
      local_4c = CONCAT22(local_4c._2_2_,(short)uVar22);
      uVar6 = FUN_1401865dd(*(undefined4 *)(lVar19 + 0x20));
      *(undefined4 *)(lVar19 + 0x20) = uVar6;
    }
    *(undefined4 *)(lVar19 + 8) = 0x3f38;
    uVar22 = 0;
    uVar29 = 0;
    uVar17 = 0;
    uVar4 = 0;
    if ((uVar20 >> 10 & 1) == 0) {
LAB_1401858ee:
      uVar29 = uVar17;
      if (*(longlong *)(lVar19 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(lVar19 + 0x28) + 0x10) = 0;
      }
LAB_140185948:
      uVar20 = (uint)local_b0;
      uVar22 = uVar4;
    }
    else {
LAB_140185901:
      do {
        if (uVar26 == 0) goto LAB_140186045;
        uVar26 = uVar26 - 1;
        bVar11 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
        bVar30 = uVar29 < 8;
        uVar29 = uVar29 + 8;
      } while (bVar30);
LAB_140185928:
      *(uint *)(lVar19 + 0x50) = uVar22;
      if (*(longlong *)(lVar19 + 0x28) != 0) {
        *(uint *)(*(longlong *)(lVar19 + 0x28) + 0x18) = uVar22;
        uVar20 = *(uint *)(lVar19 + 0x18);
      }
      uVar4 = 0;
      if ((uVar20 >> 9 & 1) == 0) {
        uVar29 = 0;
        goto LAB_140185948;
      }
      uVar20 = (uint)local_b0;
      if ((*(byte *)(lVar19 + 0x10) & 4) != 0) {
        local_4c = CONCAT22(local_4c._2_2_,(short)uVar22);
        uVar6 = FUN_1401865dd(*(undefined4 *)(lVar19 + 0x20));
        *(undefined4 *)(lVar19 + 0x20) = uVar6;
      }
      uVar22 = 0;
      uVar29 = 0;
    }
    *(undefined4 *)(lVar19 + 8) = 0x3f39;
switchD_140184b8f_caseD_3f39:
    uVar17 = *(uint *)(lVar19 + 0x18);
    if ((uVar17 >> 10 & 1) != 0) {
      local_b0 = CONCAT44(local_b0._4_4_,uVar20);
      uVar4 = *(uint *)(lVar19 + 0x50);
      uVar20 = uVar26;
      if (uVar4 < uVar26) {
        uVar20 = uVar4;
      }
      if (uVar20 != 0) {
        lVar9 = *(longlong *)(lVar19 + 0x28);
        if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x10) != 0)) &&
           (uVar4 = *(int *)(lVar9 + 0x18) - uVar4, uVar4 < *(uint *)(lVar9 + 0x1c))) {
          FUN_1401c5180(*(longlong *)(lVar9 + 0x10) + (ulonglong)uVar4);
          uVar17 = *(uint *)(lVar19 + 0x18);
        }
        if (((uVar17 >> 9 & 1) != 0) && ((*(byte *)(lVar19 + 0x10) & 4) != 0)) {
          uVar6 = FUN_1401865dd(*(undefined4 *)(lVar19 + 0x20));
          *(undefined4 *)(lVar19 + 0x20) = uVar6;
        }
        uVar26 = uVar26 - uVar20;
        pbVar28 = pbVar28 + uVar20;
        uVar4 = *(int *)(lVar19 + 0x50) - uVar20;
        *(uint *)(lVar19 + 0x50) = uVar4;
      }
      param_1 = local_a8;
      uVar20 = (uint)local_b0;
      if (uVar4 != 0) goto LAB_140186074;
    }
    *(undefined4 *)(lVar19 + 0x50) = 0;
    *(undefined4 *)(lVar19 + 8) = 0x3f3a;
LAB_140185a0b:
    if ((uVar17 >> 0xb & 1) == 0) {
      if (*(longlong *)(lVar19 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(lVar19 + 0x28) + 0x20) = 0;
      }
LAB_140185abc:
      *(undefined4 *)(lVar19 + 0x50) = 0;
      *(undefined4 *)(lVar19 + 8) = 0x3f3b;
      param_1 = local_a8;
switchD_140184b8f_caseD_3f3b:
      if ((*(byte *)(lVar19 + 0x19) & 0x10) == 0) {
        if (*(longlong *)(lVar19 + 0x28) != 0) {
          *(undefined8 *)(*(longlong *)(lVar19 + 0x28) + 0x30) = 0;
        }
LAB_140185b7a:
        *(undefined4 *)(lVar19 + 8) = 0x3f3c;
switchD_140184b8f_caseD_3f3c:
        if ((*(uint *)(lVar19 + 0x18) >> 9 & 1) != 0) {
          uVar4 = uVar29;
          if (uVar29 < 0x10) {
            do {
              if (uVar26 == 0) goto LAB_140186071;
              uVar26 = uVar26 - 1;
              bVar11 = *pbVar28;
              pbVar28 = pbVar28 + 1;
              uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
              uVar4 = uVar29 + 8;
              bVar30 = uVar29 < 8;
              uVar29 = uVar4;
            } while (bVar30);
          }
          uVar29 = 0;
          if (((*(byte *)(lVar19 + 0x10) & 4) != 0) && (uVar22 != *(ushort *)(lVar19 + 0x20))) {
            pcVar10 = "header crc mismatch";
LAB_140185cf8:
            param_1[4] = pcVar10;
            *(undefined4 *)(lVar19 + 8) = 0x3f51;
            uVar29 = uVar4;
            break;
          }
          uVar22 = 0;
        }
        if (*(longlong *)(lVar19 + 0x28) != 0) {
          *(uint *)(*(longlong *)(lVar19 + 0x28) + 0x3c) = *(uint *)(lVar19 + 0x18) >> 9 & 1;
          *(undefined4 *)(*(longlong *)(lVar19 + 0x28) + 0x40) = 1;
        }
        uVar6 = FUN_1401865dd();
        *(undefined4 *)(lVar19 + 0x20) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
        *(undefined4 *)(lVar19 + 8) = 0x3f3f;
        break;
      }
      if (uVar26 != 0) {
        local_b0 = CONCAT44(local_b0._4_4_,uVar20);
        uVar8 = 0;
        do {
          bVar11 = pbVar28[uVar8];
          lVar9 = *(longlong *)(lVar19 + 0x28);
          if ((lVar9 != 0) && (lVar23 = *(longlong *)(lVar9 + 0x30), lVar23 != 0)) {
            uVar20 = *(uint *)(lVar19 + 0x50);
            if (uVar20 < *(uint *)(lVar9 + 0x38)) {
              *(uint *)(lVar19 + 0x50) = uVar20 + 1;
              *(byte *)(lVar23 + (ulonglong)uVar20) = bVar11;
            }
          }
          uVar8 = uVar8 + 1;
        } while ((bVar11 != 0) && (uVar8 < uVar26));
        local_a0 = puVar27;
        if (((*(byte *)(lVar19 + 0x19) & 2) != 0) && ((*(byte *)(lVar19 + 0x10) & 4) != 0)) {
          uVar6 = FUN_1401865dd(*(undefined4 *)(lVar19 + 0x20));
          *(undefined4 *)(lVar19 + 0x20) = uVar6;
        }
        if (bVar11 != 0) goto LAB_1401861d3;
        uVar26 = uVar26 - (int)uVar8;
        pbVar28 = pbVar28 + uVar8;
        param_1 = local_a8;
        puVar27 = local_a0;
        uVar20 = (uint)local_b0;
        goto LAB_140185b7a;
      }
      goto LAB_140186071;
    }
    if (uVar26 != 0) {
      local_b0 = CONCAT44(local_b0._4_4_,uVar20);
      uVar8 = 0;
      do {
        bVar11 = pbVar28[uVar8];
        lVar9 = *(longlong *)(lVar19 + 0x28);
        if ((lVar9 != 0) && (lVar23 = *(longlong *)(lVar9 + 0x20), lVar23 != 0)) {
          uVar20 = *(uint *)(lVar19 + 0x50);
          if (uVar20 < *(uint *)(lVar9 + 0x28)) {
            *(uint *)(lVar19 + 0x50) = uVar20 + 1;
            *(byte *)(lVar23 + (ulonglong)uVar20) = bVar11;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((bVar11 != 0) && (uVar8 < uVar26));
      local_a0 = puVar27;
      if (((*(byte *)(lVar19 + 0x19) & 2) != 0) && ((*(byte *)(lVar19 + 0x10) & 4) != 0)) {
        uVar6 = FUN_1401865dd(*(undefined4 *)(lVar19 + 0x20));
        *(undefined4 *)(lVar19 + 0x20) = uVar6;
      }
      if (bVar11 == 0) {
        uVar26 = uVar26 - (int)uVar8;
        pbVar28 = pbVar28 + uVar8;
        puVar27 = local_a0;
        uVar20 = (uint)local_b0;
        goto LAB_140185abc;
      }
LAB_1401861d3:
      pbVar28 = pbVar28 + uVar8;
      uVar26 = uVar26 - (int)uVar8;
      param_1 = local_a8;
      puVar27 = local_a0;
      goto LAB_140186061;
    }
    uVar26 = 0;
    param_1 = local_a8;
    goto LAB_140186074;
  case 0x3f38:
    local_b0 = CONCAT44(local_b0._4_4_,uVar20);
    uVar20 = *(uint *)(lVar19 + 0x18);
    uVar17 = uVar29;
    uVar4 = uVar22;
    if ((uVar20 >> 10 & 1) != 0) {
      if (uVar29 < 0x10) goto LAB_140185901;
      goto LAB_140185928;
    }
    goto LAB_1401858ee;
  case 0x3f39:
    goto switchD_140184b8f_caseD_3f39;
  case 0x3f3a:
    uVar17 = *(uint *)(lVar19 + 0x18);
    goto LAB_140185a0b;
  case 0x3f3b:
    goto switchD_140184b8f_caseD_3f3b;
  case 0x3f3c:
    goto switchD_140184b8f_caseD_3f3c;
  case 0x3f3d:
    if (uVar29 < 0x20) {
      do {
        if (uVar26 == 0) goto LAB_140186071;
        uVar26 = uVar26 - 1;
        bVar11 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
        bVar30 = uVar29 < 0x18;
        uVar29 = uVar29 + 8;
      } while (bVar30);
    }
    uVar29 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
    *(uint *)(lVar19 + 0x20) = uVar29;
    *(uint *)((longlong)param_1 + 0x4c) = uVar29;
    *(undefined4 *)(lVar19 + 8) = 0x3f3e;
    uVar22 = 0;
    uVar29 = 0;
  case 0x3f3e:
    if (*(int *)(lVar19 + 0x14) != 0) {
      uVar6 = FUN_1401865e5(0,0,0);
      *(undefined4 *)(lVar19 + 0x20) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
      *(undefined4 *)(lVar19 + 8) = 0x3f3f;
switchD_140184b8f_caseD_3f3f:
      bVar11 = (byte)uVar29;
      if (*(int *)(lVar19 + 0xc) != 0) {
        uVar29 = uVar29 & 0xfffffff8;
        *(undefined4 *)(lVar19 + 8) = 0x3f4e;
        uVar22 = uVar22 >> (bVar11 & 7);
        break;
      }
      if (2 < uVar29) {
LAB_140184e5e:
        *(uint *)(lVar19 + 0xc) = uVar22 & 1;
        switch(uVar22 >> 1 & 3) {
        case 0:
          uVar6 = 0x3f41;
          break;
        case 1:
          FUN_1401865ed();
          uVar6 = 0x3f47;
          break;
        case 2:
          uVar6 = 0x3f44;
          break;
        case 3:
          param_1[4] = "invalid block type";
          uVar6 = 0x3f51;
        }
        *(undefined4 *)(lVar19 + 8) = uVar6;
        uVar22 = uVar22 >> 3;
        uVar29 = uVar29 - 3;
        break;
      }
      if (uVar26 != 0) {
        uVar29 = uVar29 | 8;
        uVar26 = uVar26 - 1;
        bVar1 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = ((uint)bVar1 << (bVar11 & 0x1f)) + uVar22;
        goto LAB_140184e5e;
      }
      goto LAB_140186071;
    }
    param_1[2] = puVar27;
    *(uint *)(param_1 + 3) = uVar20;
    *param_1 = pbVar28;
    *(uint *)(param_1 + 1) = uVar26;
    *(uint *)(lVar19 + 0x48) = uVar22;
    *(uint *)(lVar19 + 0x4c) = uVar29;
    iVar5 = 2;
    goto LAB_140184a97;
  case 0x3f3f:
  case 0x3f40:
    goto switchD_140184b8f_caseD_3f3f;
  case 0x3f41:
    uVar22 = uVar22 >> ((byte)uVar29 & 7);
    uVar17 = uVar29 & 0xfffffff8;
    bVar30 = uVar29 < 0x20;
    uVar29 = uVar17;
    if (bVar30) {
      do {
        if (uVar26 == 0) {
          uVar26 = 0;
          goto LAB_140186074;
        }
        uVar26 = uVar26 - 1;
        bVar11 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
        uVar17 = uVar29 + 8;
        bVar30 = uVar29 < 0x18;
        uVar29 = uVar17;
      } while (bVar30);
    }
    if ((uVar22 & 0xffff) == ~uVar22 >> 0x10) {
      *(uint *)(lVar19 + 0x50) = uVar22 & 0xffff;
      uVar22 = 0;
      uVar29 = 0;
      goto switchD_140184b8f_caseD_3f42;
    }
    pcVar10 = "invalid stored block lengths";
    goto LAB_140185fce;
  case 0x3f42:
switchD_140184b8f_caseD_3f42:
    *(undefined4 *)(lVar19 + 8) = 0x3f43;
  case 0x3f43:
    uVar17 = *(uint *)(lVar19 + 0x50);
    param_1 = local_a8;
    if (uVar17 == 0) {
      *(undefined4 *)(lVar19 + 8) = 0x3f3f;
    }
    else {
      if (uVar26 <= uVar17) {
        uVar17 = uVar26;
      }
      if (uVar20 <= uVar17) {
        uVar17 = uVar20;
      }
      if (uVar17 == 0) goto LAB_140186074;
      uVar8 = (ulonglong)uVar17;
      local_b0 = lVar19;
      FUN_1401c5180(puVar27,pbVar28,uVar8);
      uVar26 = uVar26 - uVar17;
      pbVar28 = pbVar28 + uVar8;
      *(int *)(local_b0 + 0x50) = *(int *)(local_b0 + 0x50) - uVar17;
      lVar19 = local_b0;
      param_1 = local_a8;
      puVar27 = puVar27 + uVar8;
      uVar20 = uVar20 - uVar17;
    }
    break;
  case 0x3f44:
    if (uVar29 < 0xe) {
      do {
        if (uVar26 == 0) goto LAB_140186071;
        uVar26 = uVar26 - 1;
        bVar11 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
        bVar30 = uVar29 < 6;
        uVar29 = uVar29 + 8;
      } while (bVar30);
    }
    uVar4 = uVar22 & 0x1f;
    *(uint *)(lVar19 + 0x7c) = uVar4 + 0x101;
    uVar13 = uVar22 >> 5 & 0x1f;
    *(uint *)(lVar19 + 0x80) = uVar13 + 1;
    uVar17 = (uVar22 >> 10 & 0xf) + 4;
    *(uint *)(lVar19 + 0x78) = uVar17;
    uVar22 = uVar22 >> 0xe;
    uVar29 = uVar29 - 0xe;
    if (uVar13 < 0x1e && uVar4 < 0x1e) {
      *(undefined4 *)(lVar19 + 0x84) = 0;
      *(undefined4 *)(lVar19 + 8) = 0x3f45;
      uVar4 = 0;
LAB_140184fe9:
      puVar14 = (ushort *)(&DAT_140eb18d0 + (ulonglong)uVar4 * 2);
      uVar7 = (ulonglong)uVar4;
      do {
        uVar4 = uVar29;
        if (uVar29 < 3) {
          if (uVar26 == 0) goto LAB_140186071;
          uVar4 = uVar29 | 8;
          bVar11 = *pbVar28;
          uVar26 = uVar26 - 1;
          pbVar28 = pbVar28 + 1;
          uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
        }
        uVar8 = uVar7 + 1;
        *(int *)(lVar19 + 0x84) = (int)uVar7 + 1;
        *(ushort *)(lVar19 + 0x90 + (ulonglong)*puVar14 * 2) = (ushort)uVar22 & 7;
        uVar22 = uVar22 >> 3;
        uVar29 = uVar4 - 3;
        puVar14 = puVar14 + 1;
        uVar7 = uVar8;
      } while (uVar8 < uVar17);
      goto LAB_140185055;
    }
    pcVar10 = "too many length or distance symbols";
    goto LAB_140185fce;
  case 0x3f45:
    uVar17 = *(uint *)(lVar19 + 0x78);
    uVar4 = *(uint *)(lVar19 + 0x84);
    uVar8 = (ulonglong)uVar4;
    if (uVar4 < uVar17) goto LAB_140184fe9;
LAB_140185055:
    if ((uint)uVar8 < 0x13) {
      puVar14 = (ushort *)(&DAT_140eb18d0 + (uVar8 & 0xffffffff) * 2);
      do {
        *(undefined2 *)(local_90 + (ulonglong)*puVar14 * 2) = 0;
        puVar14 = puVar14 + 1;
        uVar17 = (uint)uVar8;
        uVar4 = uVar17 + 1;
        uVar8 = (ulonglong)uVar4;
      } while (uVar17 < 0x12);
      *(uint *)(lVar19 + 0x84) = uVar4;
    }
    *(longlong *)(lVar19 + 0x88) = local_60;
    *(longlong *)(lVar19 + 0x60) = local_60;
    *(undefined4 *)(lVar19 + 0x70) = 7;
    local_c0 = local_80;
    local_c8 = local_70;
    uVar8 = 0;
    local_98 = FUN_140186612(0,local_90,0x13,local_68);
    if (local_98 == 0) {
      *(undefined4 *)(lVar19 + 0x84) = 0;
      *(undefined4 *)(lVar19 + 8) = 0x3f46;
      local_98 = 0;
      goto LAB_14018510f;
    }
    local_a8[4] = "invalid code lengths set";
    *(undefined4 *)(lVar19 + 8) = 0x3f51;
    param_1 = local_a8;
    break;
  case 0x3f46:
    uVar8 = (ulonglong)*(uint *)(lVar19 + 0x84);
LAB_14018510f:
    lVar23 = local_68;
    lVar9 = local_90;
    local_b0 = CONCAT44(local_b0._4_4_,uVar20);
    iVar5 = *(int *)(lVar19 + 0x7c);
    uVar20 = *(int *)(lVar19 + 0x80) + iVar5;
    param_1 = local_a8;
    if ((uint)uVar8 < uVar20) {
      lVar2 = *(longlong *)(lVar19 + 0x60);
      uVar17 = ~(-1 << (*(byte *)(lVar19 + 0x70) & 0x1f));
      pbVar18 = pbVar28;
      do {
        uVar7 = (ulonglong)(uVar22 & uVar17);
        bVar11 = *(byte *)(lVar2 + 1 + uVar7 * 4);
        pbVar21 = pbVar18;
        pbVar28 = pbVar18;
        uVar4 = uVar29;
        uVar13 = uVar26;
        if (uVar29 < bVar11) {
          do {
            local_a0 = puVar27;
            if (uVar13 == 0) goto LAB_14018604a;
            uVar13 = uVar13 - 1;
            pbVar28 = pbVar21 + 1;
            uVar22 = uVar22 + ((uint)*pbVar21 << ((byte)uVar4 & 0x1f));
            uVar4 = uVar4 + 8;
            uVar7 = (ulonglong)(uVar22 & uVar17);
            bVar11 = *(byte *)(lVar2 + 1 + uVar7 * 4);
            pbVar21 = pbVar28;
          } while (uVar4 < bVar11);
        }
        uVar26 = uVar13;
        uVar29 = uVar4;
        uVar24 = *(ushort *)(lVar2 + 2 + uVar7 * 4);
        iVar3 = (int)uVar8;
        if (uVar24 < 0x10) {
          uVar22 = uVar22 >> (bVar11 & 0x1f);
          uVar29 = uVar29 - bVar11;
          *(uint *)(lVar19 + 0x84) = iVar3 + 1U;
          *(ushort *)(lVar19 + 0x90 + uVar8 * 2) = uVar24;
          uVar8 = (ulonglong)(iVar3 + 1U);
        }
        else {
          uVar4 = (uint)bVar11;
          if (uVar24 == 0x10) {
            for (; uVar29 < bVar11 + 2; uVar29 = uVar29 + 8) {
              if (uVar26 == 0) goto LAB_1401861c5;
              uVar26 = uVar26 - 1;
              bVar1 = *pbVar28;
              pbVar28 = pbVar28 + 1;
              uVar22 = uVar22 + ((uint)bVar1 << ((byte)uVar29 & 0x1f));
            }
            uVar22 = uVar22 >> (bVar11 & 0x1f);
            uVar29 = uVar29 - uVar4;
            if (iVar3 == 0) {
              local_a8[4] = "invalid bit length repeat";
              *(undefined4 *)(lVar19 + 8) = 0x3f51;
              local_a0 = puVar27;
              goto LAB_140185782;
            }
            uVar15 = *(undefined2 *)(local_90 + (ulonglong)(iVar3 - 1) * 2);
            iVar12 = (uVar22 & 3) + 3;
            uVar22 = uVar22 >> 2;
            uVar29 = uVar29 - 2;
          }
          else {
            if (uVar24 == 0x11) {
              for (; uVar29 < bVar11 + 3; uVar29 = uVar29 + 8) {
                if (uVar26 == 0) goto LAB_1401861c5;
                uVar26 = uVar26 - 1;
                bVar1 = *pbVar28;
                pbVar28 = pbVar28 + 1;
                uVar22 = uVar22 + ((uint)bVar1 << ((byte)uVar29 & 0x1f));
              }
              uVar22 = uVar22 >> (bVar11 & 0x1f);
              iVar12 = (uVar22 & 7) + 3;
              uVar22 = uVar22 >> 3;
              uVar29 = (uVar29 - uVar4) - 3;
            }
            else {
              for (; uVar29 < bVar11 + 7; uVar29 = uVar29 + 8) {
                if (uVar26 == 0) goto LAB_1401861c5;
                uVar26 = uVar26 - 1;
                bVar1 = *pbVar28;
                pbVar28 = pbVar28 + 1;
                uVar22 = uVar22 + ((uint)bVar1 << ((byte)uVar29 & 0x1f));
              }
              uVar22 = uVar22 >> (bVar11 & 0x1f);
              iVar12 = (uVar22 & 0x7f) + 0xb;
              uVar22 = uVar22 >> 7;
              uVar29 = (uVar29 - uVar4) - 7;
            }
            uVar15 = 0;
          }
          uVar7 = uVar8;
          if (uVar20 < (uint)(iVar12 + iVar3)) {
            pcVar10 = "invalid bit length repeat";
            local_a0 = puVar27;
            goto LAB_140185771;
          }
          do {
            uVar4 = (int)uVar7 + 1;
            uVar8 = (ulonglong)uVar4;
            *(undefined2 *)(local_90 + uVar7 * 2) = uVar15;
            iVar12 = iVar12 + -1;
            uVar7 = uVar8;
          } while (iVar12 != 0);
          *(uint *)(lVar19 + 0x84) = uVar4;
        }
        pbVar18 = pbVar28;
      } while ((uint)uVar8 < uVar20);
    }
    if (*(short *)(lVar19 + 0x290) == 0) {
      pcVar10 = "invalid code -- missing end-of-block";
      local_a0 = puVar27;
    }
    else {
      *(longlong *)(lVar19 + 0x88) = local_60;
      *(longlong *)(lVar19 + 0x60) = local_60;
      *(undefined4 *)(lVar19 + 0x70) = 9;
      local_c0 = local_80;
      local_c8 = local_70;
      local_a0 = puVar27;
      iVar5 = FUN_140186612(1,local_90,iVar5,local_68);
      param_1 = local_a8;
      if (iVar5 == 0) {
        *(undefined8 *)(lVar19 + 0x68) = *(undefined8 *)(lVar19 + 0x88);
        *(undefined4 *)(lVar19 + 0x74) = 6;
        local_c0 = local_80;
        local_c8 = local_58;
        local_98 = FUN_140186612(2,lVar9 + (ulonglong)*(uint *)(lVar19 + 0x7c) * 2,
                                 *(undefined4 *)(lVar19 + 0x80),lVar23);
        if (local_98 == 0) {
          local_98 = 0;
          puVar27 = local_a0;
          uVar20 = (uint)local_b0;
          goto switchD_140184b8f_caseD_3f47;
        }
        pcVar10 = "invalid distances set";
      }
      else {
        pcVar10 = "invalid literal/lengths set";
        local_98 = iVar5;
      }
    }
LAB_140185771:
    param_1[4] = pcVar10;
    *(undefined4 *)(lVar19 + 8) = 0x3f51;
LAB_140185782:
    puVar27 = local_a0;
    uVar20 = (uint)local_b0;
    break;
  case 0x3f47:
switchD_140184b8f_caseD_3f47:
    *(undefined4 *)(lVar19 + 8) = 0x3f48;
    pbVar18 = pbVar28;
  case 0x3f48:
    if ((5 < uVar26) && (0x101 < uVar20)) {
      param_1[2] = puVar27;
      *(uint *)(param_1 + 3) = uVar20;
      *param_1 = pbVar18;
      *(uint *)(param_1 + 1) = uVar26;
      *(uint *)(lVar19 + 0x48) = uVar22;
      *(uint *)(lVar19 + 0x4c) = uVar29;
      FUN_140186ab2(param_1);
      puVar27 = (undefined1 *)param_1[2];
      uVar20 = *(uint *)(param_1 + 3);
      pbVar28 = (byte *)*param_1;
      uVar26 = *(uint *)(param_1 + 1);
      uVar22 = *(uint *)(lVar19 + 0x48);
      uVar29 = *(uint *)(lVar19 + 0x4c);
      if (*(int *)(lVar19 + 8) == 0x3f3f) {
        *(undefined4 *)(lVar19 + 0x1be4) = 0xffffffff;
      }
      break;
    }
    *(undefined4 *)(lVar19 + 0x1be4) = 0;
    lVar9 = *(longlong *)(lVar19 + 0x60);
    uVar16 = ~(-1 << (*(byte *)(lVar19 + 0x70) & 0x1f));
    uVar8 = (ulonglong)(uVar22 & uVar16);
    uVar13 = (uint)*(byte *)(lVar9 + 1 + uVar8 * 4);
    pbVar28 = pbVar18;
    uVar4 = uVar26;
    uVar17 = uVar29;
    if (uVar29 < uVar13) {
      local_b0 = CONCAT44(local_b0._4_4_,uVar20);
      do {
        if (uVar4 == 0) goto LAB_14018603b;
        uVar4 = uVar4 - 1;
        bVar11 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar17 & 0x1f));
        uVar17 = uVar17 + 8;
        uVar8 = (ulonglong)(uVar22 & uVar16);
        uVar13 = (uint)*(byte *)(lVar9 + 1 + uVar8 * 4);
      } while (uVar17 < uVar13);
    }
    uVar29 = uVar17;
    uVar26 = uVar4;
    pbVar18 = (byte *)(lVar9 + uVar8 * 4);
    uVar24 = *(ushort *)(pbVar18 + 2);
    bVar11 = *pbVar18;
    if ((byte)(bVar11 - 1) < 0xf) {
      bVar1 = (byte)uVar13;
      uVar25 = ~(-1 << (bVar11 + bVar1 & 0x1f));
      uVar8 = (ulonglong)(((uVar22 & uVar25) >> (bVar1 & 0x1f)) + (uint)uVar24);
      uVar16 = (uint)*(byte *)(lVar9 + 1 + uVar8 * 4);
      pbVar21 = pbVar28;
      uVar17 = uVar26;
      uVar4 = uVar29;
      if (uVar29 < uVar13 + uVar16) {
        local_b0 = CONCAT44(local_b0._4_4_,uVar20);
        do {
          pbVar18 = pbVar28;
          local_a0 = puVar27;
          if (uVar17 == 0) goto LAB_14018604a;
          uVar17 = uVar17 - 1;
          bVar11 = *pbVar21;
          pbVar21 = pbVar21 + 1;
          uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar4 & 0x1f));
          uVar4 = uVar4 + 8;
          uVar8 = (ulonglong)(((uVar22 & uVar25) >> (bVar1 & 0x1f)) + (uint)uVar24);
          uVar16 = (uint)*(byte *)(lVar9 + 1 + uVar8 * 4);
          param_1 = local_a8;
        } while (uVar4 < uVar13 + uVar16);
      }
      uVar26 = uVar17;
      pbVar28 = (byte *)(lVar9 + uVar8 * 4);
      uVar24 = *(ushort *)(pbVar28 + 2);
      bVar11 = *pbVar28;
      uVar22 = uVar22 >> (bVar1 & 0x1f);
      uVar29 = uVar4 - uVar13;
      pbVar28 = pbVar21;
      uVar17 = uVar13;
      uVar13 = uVar16;
    }
    else {
      uVar17 = 0;
    }
    uVar22 = uVar22 >> ((byte)uVar13 & 0x1f);
    uVar29 = uVar29 - uVar13;
    *(uint *)(lVar19 + 0x1be4) = uVar17 + uVar13;
    *(uint *)(lVar19 + 0x50) = (uint)uVar24;
    if (bVar11 == 0) {
      *(undefined4 *)(lVar19 + 8) = 0x3f4d;
      break;
    }
    if ((bVar11 & 0x20) != 0) {
      *(undefined4 *)(lVar19 + 0x1be4) = 0xffffffff;
      *(undefined4 *)(lVar19 + 8) = 0x3f3f;
      break;
    }
    if ((bVar11 & 0x40) != 0) {
      pcVar10 = "invalid literal/length code";
      goto LAB_140185fce;
    }
    uVar17 = bVar11 & 0xf;
    *(uint *)(lVar19 + 0x58) = uVar17;
    *(undefined4 *)(lVar19 + 8) = 0x3f49;
LAB_140184d50:
    pbVar18 = pbVar28;
    uVar4 = uVar29;
    uVar13 = uVar26;
    if (uVar17 == 0) {
      iVar5 = *(int *)(lVar19 + 0x50);
    }
    else {
      for (; uVar4 < uVar17; uVar4 = uVar4 + 8) {
        if (uVar13 == 0) goto LAB_140186067;
        uVar22 = uVar22 + ((uint)*pbVar18 << ((byte)uVar4 & 0x1f));
        pbVar18 = pbVar18 + 1;
        uVar13 = uVar13 - 1;
      }
      iVar5 = (~(-1 << ((byte)uVar17 & 0x1f)) & uVar22) + *(int *)(lVar19 + 0x50);
      uVar22 = uVar22 >> ((byte)uVar17 & 0x1f);
      *(int *)(lVar19 + 0x50) = iVar5;
      *(int *)(lVar19 + 0x1be4) = *(int *)(lVar19 + 0x1be4) + uVar17;
      uVar29 = uVar4 - uVar17;
      pbVar28 = pbVar18;
      uVar26 = uVar13;
    }
    *(int *)(lVar19 + 0x1be8) = iVar5;
    *(undefined4 *)(lVar19 + 8) = 0x3f4a;
    pbVar18 = pbVar28;
switchD_140184b8f_caseD_3f4a:
    lVar9 = *(longlong *)(lVar19 + 0x68);
    uVar16 = ~(-1 << (*(byte *)(lVar19 + 0x74) & 0x1f));
    uVar8 = (ulonglong)(uVar22 & uVar16);
    uVar13 = (uint)*(byte *)(lVar9 + 1 + uVar8 * 4);
    pbVar28 = pbVar18;
    uVar4 = uVar26;
    uVar17 = uVar29;
    if (uVar29 < uVar13) {
      local_b0 = CONCAT44(local_b0._4_4_,uVar20);
      do {
        if (uVar4 == 0) goto LAB_14018603b;
        uVar4 = uVar4 - 1;
        bVar11 = *pbVar28;
        pbVar28 = pbVar28 + 1;
        uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar17 & 0x1f));
        uVar17 = uVar17 + 8;
        uVar8 = (ulonglong)(uVar22 & uVar16);
        uVar13 = (uint)*(byte *)(lVar9 + 1 + uVar8 * 4);
      } while (uVar17 < uVar13);
    }
    uVar29 = uVar17;
    uVar26 = uVar4;
    pbVar18 = (byte *)(lVar9 + uVar8 * 4);
    uVar24 = *(ushort *)(pbVar18 + 2);
    bVar11 = *pbVar18;
    if (bVar11 < 0x10) {
      bVar1 = (byte)uVar13;
      uVar25 = ~(-1 << (bVar11 + bVar1 & 0x1f));
      uVar8 = (ulonglong)(((uVar22 & uVar25) >> (bVar1 & 0x1f)) + (uint)uVar24);
      uVar16 = (uint)*(byte *)(lVar9 + 1 + uVar8 * 4);
      pbVar21 = pbVar28;
      uVar17 = uVar26;
      uVar4 = uVar29;
      if (uVar29 < uVar13 + uVar16) {
        local_b0 = CONCAT44(local_b0._4_4_,uVar20);
        do {
          pbVar18 = pbVar28;
          local_a0 = puVar27;
          if (uVar17 == 0) goto LAB_14018604a;
          uVar17 = uVar17 - 1;
          bVar11 = *pbVar21;
          pbVar21 = pbVar21 + 1;
          uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar4 & 0x1f));
          uVar4 = uVar4 + 8;
          uVar8 = (ulonglong)(((uVar22 & uVar25) >> (bVar1 & 0x1f)) + (uint)uVar24);
          uVar16 = (uint)*(byte *)(lVar9 + 1 + uVar8 * 4);
          param_1 = local_a8;
        } while (uVar4 < uVar13 + uVar16);
      }
      uVar26 = uVar17;
      pbVar28 = (byte *)(lVar9 + uVar8 * 4);
      uVar24 = *(ushort *)(pbVar28 + 2);
      uVar22 = uVar22 >> (bVar1 & 0x1f);
      bVar11 = *pbVar28;
      uVar29 = uVar4 - uVar13;
      iVar5 = uVar13 + *(int *)(lVar19 + 0x1be4);
      pbVar28 = pbVar21;
      uVar13 = uVar16;
    }
    else {
      iVar5 = *(int *)(lVar19 + 0x1be4);
    }
    uVar22 = uVar22 >> ((byte)uVar13 & 0x1f);
    uVar29 = uVar29 - uVar13;
    *(uint *)(lVar19 + 0x1be4) = iVar5 + uVar13;
    if ((bVar11 & 0x40) == 0) {
      *(uint *)(lVar19 + 0x54) = (uint)uVar24;
      uVar17 = bVar11 & 0xf;
      *(uint *)(lVar19 + 0x58) = uVar17;
      *(undefined4 *)(lVar19 + 8) = 0x3f4b;
LAB_140185511:
      pbVar18 = pbVar28;
      uVar13 = uVar26;
      uVar4 = uVar29;
      if (uVar17 != 0) {
        for (; uVar4 < uVar17; uVar4 = uVar4 + 8) {
          if (uVar13 == 0) goto LAB_140186067;
          uVar22 = uVar22 + ((uint)*pbVar18 << ((byte)uVar4 & 0x1f));
          pbVar18 = pbVar18 + 1;
          uVar13 = uVar13 - 1;
        }
        *(int *)(lVar19 + 0x54) =
             *(int *)(lVar19 + 0x54) + (~(-1 << ((byte)uVar17 & 0x1f)) & uVar22);
        uVar22 = uVar22 >> ((byte)uVar17 & 0x1f);
        *(int *)(lVar19 + 0x1be4) = *(int *)(lVar19 + 0x1be4) + uVar17;
        uVar29 = uVar4 - uVar17;
      }
      *(undefined4 *)(lVar19 + 8) = 0x3f4c;
      pbVar28 = pbVar18;
      uVar26 = uVar13;
switchD_140184b8f_caseD_3f4c:
      if (uVar20 != 0) {
        uVar17 = *(uint *)(lVar19 + 0x54);
        if (local_94 - uVar20 < uVar17) {
          uVar17 = uVar17 - (local_94 - uVar20);
          if ((*(uint *)(lVar19 + 0x38) < uVar17) && (*(int *)(lVar19 + 0x1be0) != 0)) {
            pcVar10 = "invalid distance too far back";
            goto LAB_140185fce;
          }
          uVar4 = *(uint *)(lVar19 + 0x3c);
          uVar13 = uVar17 - uVar4;
          if (uVar17 < uVar4 || uVar13 == 0) {
            uVar4 = uVar4 - uVar17;
          }
          else {
            uVar4 = *(int *)(lVar19 + 0x34) - uVar13;
            uVar17 = uVar13;
          }
          lVar9 = (ulonglong)uVar4 + *(longlong *)(lVar19 + 0x40);
          uVar4 = *(uint *)(lVar19 + 0x50);
          if (uVar4 <= uVar17) {
            uVar17 = uVar4;
          }
        }
        else {
          lVar9 = (longlong)puVar27 - (ulonglong)uVar17;
          uVar4 = *(uint *)(lVar19 + 0x50);
          uVar17 = uVar4;
        }
        uVar13 = uVar20;
        if (uVar17 < uVar20) {
          uVar13 = uVar17;
        }
        *(uint *)(lVar19 + 0x50) = uVar4 - uVar13;
        uVar4 = uVar20;
        if (uVar17 < uVar20) {
          uVar4 = uVar17;
        }
        lVar23 = 0;
        do {
          puVar27[lVar23] = *(undefined1 *)(lVar9 + lVar23);
          lVar23 = lVar23 + 1;
        } while (uVar4 != (uint)lVar23);
        uVar20 = uVar20 - uVar13;
        puVar27 = puVar27 + lVar23;
        if (*(int *)(lVar19 + 0x50) == 0) {
LAB_14018562d:
          *(undefined4 *)(lVar19 + 8) = 0x3f48;
        }
        break;
      }
LAB_1401861de:
      uVar20 = 0;
      goto LAB_140186074;
    }
    pcVar10 = "invalid distance code";
LAB_140185fce:
    param_1[4] = pcVar10;
    *(undefined4 *)(lVar19 + 8) = 0x3f51;
    break;
  case 0x3f49:
    uVar17 = *(uint *)(lVar19 + 0x58);
    goto LAB_140184d50;
  case 0x3f4a:
    goto switchD_140184b8f_caseD_3f4a;
  case 0x3f4b:
    uVar17 = *(uint *)(lVar19 + 0x58);
    goto LAB_140185511;
  case 0x3f4c:
    goto switchD_140184b8f_caseD_3f4c;
  case 0x3f4d:
    if (uVar20 != 0) {
      *puVar27 = *(undefined1 *)(lVar19 + 0x50);
      puVar27 = puVar27 + 1;
      uVar20 = uVar20 - 1;
      goto LAB_14018562d;
    }
    goto LAB_1401861de;
  case 0x3f4e:
    if (*(int *)(lVar19 + 0x10) == 0) {
      uVar17 = 0;
    }
    else {
      local_b0 = CONCAT44(local_b0._4_4_,uVar20);
      uVar4 = uVar29;
      if (uVar29 < 0x20) {
        do {
          if (uVar26 == 0) goto LAB_140186045;
          uVar26 = uVar26 - 1;
          bVar11 = *pbVar28;
          pbVar28 = pbVar28 + 1;
          uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
          uVar4 = uVar29 + 8;
          bVar30 = uVar29 < 0x18;
          uVar29 = uVar4;
        } while (bVar30);
      }
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + (local_94 - uVar20);
      *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + (local_94 - uVar20);
      uVar17 = *(uint *)(lVar19 + 0x10);
      uVar13 = uVar17 & 4;
      if ((uVar13 != 0) && (local_94 != uVar20)) {
        if (*(int *)(lVar19 + 0x18) == 0) {
          uVar6 = FUN_1401865e5(*(undefined4 *)(lVar19 + 0x20));
        }
        else {
          uVar6 = FUN_1401865dd();
        }
        *(undefined4 *)(lVar19 + 0x20) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
        uVar17 = *(uint *)(lVar19 + 0x10);
        uVar13 = uVar17 & 4;
      }
      uVar29 = 0;
      uVar20 = (uint)local_b0;
      if (uVar13 != 0) {
        uVar13 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18
        ;
        if (*(int *)(lVar19 + 0x18) != 0) {
          uVar13 = uVar22;
        }
        if (uVar13 != *(uint *)(lVar19 + 0x20)) {
          param_1[4] = "incorrect data check";
          *(undefined4 *)(lVar19 + 8) = 0x3f51;
          local_94 = (uint)local_b0;
          uVar29 = uVar4;
          break;
        }
      }
      uVar22 = 0;
      local_94 = (uint)local_b0;
    }
    *(undefined4 *)(lVar19 + 8) = 0x3f4f;
    goto LAB_140185c99;
  case 0x3f4f:
    uVar17 = *(uint *)(lVar19 + 0x10);
LAB_140185c99:
    if ((uVar17 != 0) && (*(int *)(lVar19 + 0x18) != 0)) {
      uVar4 = uVar29;
      if (uVar29 < 0x20) {
        do {
          if (uVar26 == 0) goto LAB_140186071;
          uVar26 = uVar26 - 1;
          bVar11 = *pbVar28;
          pbVar28 = pbVar28 + 1;
          uVar22 = uVar22 + ((uint)bVar11 << ((byte)uVar29 & 0x1f));
          uVar4 = uVar29 + 8;
          bVar30 = uVar29 < 0x18;
          uVar29 = uVar4;
        } while (bVar30);
      }
      uVar29 = 0;
      if (((uVar17 & 4) == 0) || (uVar22 == *(uint *)(lVar19 + 0x24))) {
        uVar22 = 0;
        goto LAB_1401861e7;
      }
      pcVar10 = "incorrect length check";
      goto LAB_140185cf8;
    }
LAB_1401861e7:
    *(undefined4 *)(lVar19 + 8) = 0x3f50;
  case 0x3f50:
    goto switchD_140184b8f_caseD_3f50;
  case 0x3f51:
    local_98 = -3;
    goto LAB_140186074;
  case 0x3f52:
    goto switchD_140184b8f_caseD_3f52;
  default:
    iVar5 = -2;
    goto LAB_140184a97;
  }
  iVar5 = *(int *)(lVar19 + 8);
  goto LAB_140184b7a;
LAB_1401861c5:
  uVar26 = 0;
  local_a0 = puVar27;
  goto LAB_140186061;
LAB_14018603b:
  uVar29 = uVar29 + uVar26 * 8;
  pbVar28 = pbVar18 + uVar26;
LAB_140186045:
  uVar26 = 0;
LAB_140186061:
  uVar20 = (uint)local_b0;
  goto LAB_140186074;
LAB_14018604a:
  uVar29 = uVar29 + uVar26 * 8;
  pbVar28 = pbVar18 + uVar26;
  uVar26 = 0;
  param_1 = local_a8;
  puVar27 = local_a0;
  goto LAB_140186061;
LAB_140186067:
  uVar29 = uVar29 + uVar26 * 8;
  pbVar28 = pbVar28 + uVar26;
LAB_140186071:
  uVar26 = 0;
  goto LAB_140186074;
switchD_140184b8f_caseD_3f50:
  local_98 = 1;
LAB_140186074:
  uVar4 = local_74;
  uVar17 = local_94;
  param_1[2] = puVar27;
  *(uint *)(param_1 + 3) = uVar20;
  *param_1 = pbVar28;
  *(uint *)(param_1 + 1) = uVar26;
  *(uint *)(lVar19 + 0x48) = uVar22;
  *(uint *)(lVar19 + 0x4c) = uVar29;
  uVar29 = *(uint *)(param_1 + 3);
  if ((*(int *)(lVar19 + 0x34) != 0) ||
     (((uVar20 = local_94, local_94 != uVar29 && (uVar20 = uVar29, *(int *)(lVar19 + 8) < 0x3f51))
      && (local_84 != 4 || *(int *)(lVar19 + 8) < 0x3f4e)))) {
    iVar5 = FUN_140186fbd(param_1,param_1[2],local_94 - uVar29);
    if (iVar5 != 0) {
      *(undefined4 *)(lVar19 + 8) = 0x3f52;
switchD_140184b8f_caseD_3f52:
      iVar5 = -4;
      goto LAB_140184a97;
    }
    uVar20 = *(uint *)(param_1 + 3);
  }
  uVar29 = *(uint *)(param_1 + 1);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (uVar4 - uVar29);
  uVar22 = uVar17 - uVar20;
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + uVar22;
  *(int *)(lVar19 + 0x24) = *(int *)(lVar19 + 0x24) + uVar22;
  if (((*(byte *)(lVar19 + 0x10) & 4) != 0) && (uVar17 != uVar20)) {
    if (*(int *)(lVar19 + 0x18) == 0) {
      uVar6 = FUN_1401865e5(*(undefined4 *)(lVar19 + 0x20),local_a8[2] - (ulonglong)uVar22);
    }
    else {
      uVar6 = FUN_1401865dd();
    }
    *(undefined4 *)(lVar19 + 0x20) = uVar6;
    *(undefined4 *)((longlong)local_a8 + 0x4c) = uVar6;
  }
  iVar5 = *(int *)(lVar19 + 8);
  iVar3 = -5;
  if (local_98 != 0) {
    iVar3 = local_98;
  }
  *(uint *)(local_a8 + 9) =
       (uint)(iVar5 == 0x3f42 || iVar5 == 0x3f47) * 0x100 + (uint)(iVar5 == 0x3f3f) * 0x80 +
       (uint)(*(int *)(lVar19 + 0xc) != 0) * 0x40 + *(int *)(lVar19 + 0x4c);
  iVar5 = local_98;
  if (uVar17 == uVar20 && uVar4 == uVar29) {
    iVar5 = iVar3;
  }
  if (local_84 == 4) {
    iVar5 = iVar3;
  }
LAB_140184a97:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_e8)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_e8);
}

