/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10224757 */

int __fastcall FUN_10224757(undefined4 *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  uint local_74;
  undefined4 *local_70;
  uint local_6c;
  int local_68;
  byte *local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined1 *local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_74;
  iVar5 = FUN_1022621e();
  iVar20 = -2;
  if (((iVar5 == 0) && (local_54 = (undefined1 *)param_1[3], local_54 != (undefined1 *)0x0)) &&
     ((pbVar16 = (byte *)*param_1, pbVar16 != (byte *)0x0 || (param_1[1] == 0)))) {
    local_68 = param_1[7];
    iVar20 = *(int *)(local_68 + 4);
    if (iVar20 == 0x3f3f) {
      *(undefined4 *)(local_68 + 4) = 0x3f40;
      pbVar16 = (byte *)*param_1;
      local_54 = (undefined1 *)param_1[3];
      iVar20 = 0x3f40;
    }
    local_24 = param_1[1];
    local_5c = param_1[4];
    local_74 = *(uint *)(local_68 + 0x3c);
    uVar10 = *(uint *)(local_68 + 0x40);
    local_44 = local_68 + 0x74;
    local_2c = local_68 + 0x534;
    local_30 = local_68 + 0x70;
    local_34 = local_68 + 0x58;
    local_40 = local_68 + 0x2f4;
    local_1c = local_68 + 0x5c;
    local_48 = 0;
    iVar5 = local_68;
    uVar24 = local_24;
    local_70 = param_1;
    local_4c = local_5c;
    local_28 = param_2;
    do {
      puVar11 = local_54;
      iVar9 = local_68;
      uVar15 = uVar10;
      uVar21 = local_74;
      pbVar18 = pbVar16;
      uVar6 = uVar24;
      switch(iVar20) {
      case 0x3f34:
        uVar15 = *(uint *)(iVar5 + 0xc);
        if (uVar15 == 0) {
          *(undefined4 *)(iVar5 + 4) = 0x3f40;
          iVar9 = iVar5;
        }
        else {
          if (uVar10 < 0x10) {
            do {
              if (uVar24 == 0) goto LAB_10225de2;
              uVar24 = uVar24 - 1;
              bVar8 = *pbVar18;
              pbVar18 = pbVar18 + 1;
              uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
              bVar25 = uVar10 < 8;
              uVar10 = uVar10 + 8;
              pbVar16 = pbVar18;
              iVar5 = local_68;
              uVar6 = uVar24;
            } while (bVar25);
          }
          if (((uVar15 & 2) == 0) || (uVar21 != 0x8b1f)) {
            if (*(int *)(iVar5 + 0x24) != 0) {
              *(undefined4 *)(*(int *)(iVar5 + 0x24) + 0x30) = 0xffffffff;
              uVar15 = *(uint *)(iVar5 + 0xc);
            }
            if (((uVar15 & 1) == 0) ||
               (0x8421084 < ((uVar21 >> 8) + (uVar21 & 0xff) * 0x100) * -0x42108421)) {
              local_70[6] = "incorrect header check";
              local_74 = uVar21;
              goto LAB_10225cdd;
            }
            if ((uVar21 & 0xf) != 8) goto LAB_102250b3;
            local_74 = uVar21 >> 4;
            uVar14 = local_74 & 0xf;
            uVar24 = uVar14 + 8;
            uVar15 = *(uint *)(iVar5 + 0x28);
            if (*(uint *)(iVar5 + 0x28) == 0) {
              *(uint *)(local_68 + 0x28) = uVar24;
              uVar15 = uVar24;
            }
            local_64 = pbVar16;
            local_60 = uVar6;
            if ((uVar14 < 8) && (uVar24 <= uVar15)) {
              *(int *)(local_68 + 0x18) = 0x100 << (sbyte)uVar14;
              uVar10 = 0;
              *(undefined4 *)(local_68 + 0x14) = 0;
              local_74 = uVar21;
              uVar7 = thunk_FUN_10226ed9(0);
              *(undefined4 *)(iVar9 + 0x1c) = uVar7;
              local_70[0xc] = uVar7;
              *(uint *)(iVar9 + 4) = (uint)((uVar21 >> 0xd & 1) == 0) * 2 + 0x3f3d;
              local_74 = 0;
              pbVar16 = local_64;
              uVar6 = local_60;
            }
            else {
              uVar10 = uVar10 - 4;
              local_70[6] = "invalid window size";
              *(undefined4 *)(local_68 + 4) = 0x3f51;
            }
          }
          else {
            if (*(int *)(iVar5 + 0x28) == 0) {
              *(undefined4 *)(iVar5 + 0x28) = 0xf;
            }
            thunk_FUN_10226df7(0);
            local_18 = CONCAT22(local_18._2_2_,0x8b1f);
            uVar7 = thunk_FUN_10226df7(2);
            local_74 = 0;
            *(undefined4 *)(iVar5 + 0x1c) = uVar7;
            *(undefined4 *)(iVar5 + 4) = 0x3f35;
            uVar10 = 0;
            iVar9 = iVar5;
          }
        }
        break;
      case 0x3f35:
        if (uVar10 < 0x10) {
          do {
            if (uVar24 == 0) goto LAB_10225de2;
            uVar24 = uVar24 - 1;
            bVar8 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
            bVar25 = uVar10 < 8;
            uVar10 = uVar10 + 8;
            pbVar16 = pbVar18;
            uVar6 = uVar24;
          } while (bVar25);
        }
        *(uint *)(iVar5 + 0x14) = uVar21;
        if ((char)uVar21 == '\b') {
          if ((uVar21 & 0xe000) == 0) {
            uVar10 = uVar21;
            if (*(uint **)(iVar5 + 0x24) != (uint *)0x0) {
              **(uint **)(iVar5 + 0x24) = uVar21 >> 8 & 1;
              uVar10 = *(uint *)(iVar5 + 0x14);
            }
            if (((uVar10 >> 9 & 1) != 0) && ((*(byte *)(iVar5 + 0xc) & 4) != 0)) {
              local_18._0_2_ = CONCAT11((char)(uVar21 >> 8),8);
              uVar7 = thunk_FUN_10226df7(2);
              *(undefined4 *)(iVar5 + 0x1c) = uVar7;
            }
            *(undefined4 *)(iVar5 + 4) = 0x3f36;
            uVar10 = 0;
            uVar21 = 0;
            pbVar18 = pbVar16;
            goto LAB_10225572;
          }
          local_70[6] = "unknown header flags set";
          local_74 = uVar21;
        }
        else {
LAB_102250b3:
          local_74 = uVar21;
          local_70[6] = "unknown compression method";
        }
        goto LAB_10225cdd;
      case 0x3f36:
        if (uVar10 < 0x20) {
LAB_10225572:
          do {
            if (uVar6 == 0) goto LAB_10225de2;
            uVar6 = uVar6 - 1;
            pbVar16 = pbVar18 + 1;
            uVar21 = uVar21 + ((uint)*pbVar18 << ((byte)uVar10 & 0x1f));
            bVar25 = uVar10 < 0x18;
            uVar10 = uVar10 + 8;
            pbVar18 = pbVar16;
            uVar24 = uVar6;
          } while (bVar25);
        }
        if (*(int *)(iVar5 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar5 + 0x24) + 4) = uVar21;
        }
        if (((*(byte *)(iVar5 + 0x15) & 2) != 0) && ((*(byte *)(iVar5 + 0xc) & 4) != 0)) {
          local_18 = uVar21;
          uVar7 = thunk_FUN_10226df7(4);
          *(undefined4 *)(iVar5 + 0x1c) = uVar7;
        }
        *(undefined4 *)(iVar5 + 4) = 0x3f37;
        uVar10 = 0;
        uVar21 = 0;
LAB_102255c7:
        do {
          if (uVar24 == 0) goto LAB_10225de2;
          uVar24 = uVar24 - 1;
          bVar8 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
          bVar25 = uVar10 < 8;
          uVar10 = uVar10 + 8;
          pbVar16 = pbVar18;
        } while (bVar25);
        goto LAB_102255e3;
      case 0x3f37:
        if (uVar10 < 0x10) goto LAB_102255c7;
LAB_102255e3:
        if (*(int *)(iVar5 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar5 + 0x24) + 8) = uVar21 & 0xff;
          *(uint *)(*(int *)(iVar5 + 0x24) + 0xc) = uVar21 >> 8;
        }
        uVar15 = *(uint *)(iVar5 + 0x14);
        if (((uVar15 >> 9 & 1) != 0) && ((*(byte *)(iVar5 + 0xc) & 4) != 0)) {
          local_18 = CONCAT22(local_18._2_2_,(short)uVar21);
          uVar7 = thunk_FUN_10226df7(2);
          *(undefined4 *)(iVar5 + 0x1c) = uVar7;
        }
        *(undefined4 *)(iVar5 + 4) = 0x3f38;
        uVar10 = 0;
        uVar21 = 0;
        uVar6 = 0;
        if ((uVar15 >> 10 & 1) == 0) {
LAB_1022563c:
          if (*(int *)(iVar5 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar5 + 0x24) + 0x10) = 0;
          }
        }
        else {
LAB_10225650:
          do {
            if (uVar24 == 0) {
              uVar24 = 0;
              pbVar18 = pbVar16;
              uVar21 = uVar6;
              uVar15 = uVar10;
              goto LAB_10225ef7;
            }
            uVar24 = uVar24 - 1;
            bVar8 = *pbVar16;
            pbVar16 = pbVar16 + 1;
            uVar6 = uVar6 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
            bVar25 = uVar10 < 8;
            uVar10 = uVar10 + 8;
          } while (bVar25);
LAB_1022566a:
          *(uint *)(iVar5 + 0x44) = uVar6;
          if (*(int *)(iVar5 + 0x24) != 0) {
            *(uint *)(*(int *)(iVar5 + 0x24) + 0x14) = uVar6;
            uVar15 = *(uint *)(iVar5 + 0x14);
          }
          if (((uVar15 >> 9 & 1) != 0) && ((*(byte *)(iVar5 + 0xc) & 4) != 0)) {
            local_18 = CONCAT22(local_18._2_2_,(short)uVar6);
            uVar7 = thunk_FUN_10226df7(2);
            *(undefined4 *)(iVar5 + 0x1c) = uVar7;
          }
          uVar21 = 0;
          uVar10 = 0;
        }
        *(undefined4 *)(iVar5 + 4) = 0x3f39;
        local_6c = uVar10;
LAB_102256b2:
        uVar6 = *(uint *)(iVar5 + 0x14);
        if ((uVar6 >> 10 & 1) != 0) {
          uVar10 = *(uint *)(iVar5 + 0x44);
          uVar15 = uVar24;
          if (uVar10 < uVar24) {
            uVar15 = uVar10;
          }
          local_64 = pbVar16;
          if (uVar15 != 0) {
            iVar20 = *(int *)(iVar5 + 0x24);
            local_74 = uVar21;
            local_60 = uVar24;
            if ((iVar20 != 0) && (*(int *)(iVar20 + 0x10) != 0)) {
              uVar24 = *(uint *)(iVar20 + 0x18);
              uVar10 = *(int *)(iVar20 + 0x14) - uVar10;
              if (uVar10 <= uVar24 && uVar24 - uVar10 != 0) {
                uVar6 = uVar24 - uVar10;
                if (uVar10 + uVar15 <= uVar24) {
                  uVar6 = uVar15;
                }
                FUN_1025b2d0(*(int *)(iVar20 + 0x10) + uVar10,pbVar16,uVar6);
                uVar6 = *(uint *)(iVar5 + 0x14);
              }
            }
            if (((uVar6 >> 9 & 1) != 0) && ((*(byte *)(iVar5 + 0xc) & 4) != 0)) {
              uVar7 = thunk_FUN_10226df7(uVar15);
              *(undefined4 *)(iVar5 + 0x1c) = uVar7;
            }
            uVar24 = local_60 - uVar15;
            pbVar16 = local_64 + uVar15;
            uVar10 = *(int *)(iVar5 + 0x44) - uVar15;
            *(uint *)(iVar5 + 0x44) = uVar10;
            uVar21 = local_74;
          }
          pbVar18 = pbVar16;
          uVar15 = local_6c;
          if (uVar10 != 0) goto LAB_10225ef7;
        }
        *(undefined4 *)(iVar5 + 0x44) = 0;
        *(undefined4 *)(iVar5 + 4) = 0x3f3a;
LAB_10225768:
        if ((uVar6 >> 0xb & 1) != 0) {
          if (uVar24 == 0) {
            uVar24 = 0;
            pbVar18 = pbVar16;
            uVar15 = local_6c;
          }
          else {
            uVar15 = 0;
            do {
              bVar8 = pbVar16[uVar15];
              local_64 = (byte *)CONCAT31(local_64._1_3_,bVar8);
              iVar20 = *(int *)(iVar5 + 0x24);
              if (((iVar20 != 0) && (iVar9 = *(int *)(iVar20 + 0x1c), iVar9 != 0)) &&
                 (uVar10 = *(uint *)(iVar5 + 0x44), uVar10 < *(uint *)(iVar20 + 0x20))) {
                *(uint *)(iVar5 + 0x44) = uVar10 + 1;
                *(byte *)(iVar9 + uVar10) = bVar8;
              }
              uVar15 = uVar15 + 1;
            } while ((bVar8 != 0) && (uVar15 < uVar24));
            local_74 = uVar21;
            if (((*(byte *)(iVar5 + 0x15) & 2) != 0) && ((*(byte *)(iVar5 + 0xc) & 4) != 0)) {
              uVar7 = thunk_FUN_10226df7(uVar15);
              *(undefined4 *)(local_68 + 0x1c) = uVar7;
            }
            if ((char)local_64 == '\0') {
              uVar24 = uVar24 - uVar15;
              pbVar16 = pbVar16 + uVar15;
              uVar21 = local_74;
              goto LAB_102257ff;
            }
LAB_10225eb4:
            uVar24 = uVar24 - uVar15;
            pbVar18 = pbVar16 + uVar15;
            uVar21 = local_74;
            uVar15 = local_6c;
          }
          goto LAB_10225ef7;
        }
        if (*(int *)(iVar5 + 0x24) != 0) {
          *(undefined4 *)(*(int *)(iVar5 + 0x24) + 0x1c) = 0;
        }
LAB_102257ff:
        *(undefined4 *)(iVar5 + 0x44) = 0;
        *(undefined4 *)(iVar5 + 4) = 0x3f3b;
        uVar10 = local_6c;
        pbVar18 = pbVar16;
LAB_10225811:
        if ((*(byte *)(iVar5 + 0x15) & 0x10) == 0) {
          uVar15 = uVar10;
          if (*(int *)(iVar5 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar5 + 0x24) + 0x24) = 0;
          }
        }
        else {
          if (uVar24 == 0) {
LAB_10225de2:
            uVar24 = 0;
            uVar15 = uVar10;
            goto LAB_10225ef7;
          }
          uVar15 = 0;
          do {
            bVar8 = pbVar18[uVar15];
            local_64 = (byte *)CONCAT31(local_64._1_3_,bVar8);
            iVar20 = *(int *)(iVar5 + 0x24);
            if (((iVar20 != 0) && (iVar9 = *(int *)(iVar20 + 0x24), iVar9 != 0)) &&
               (uVar6 = *(uint *)(iVar5 + 0x44), uVar6 < *(uint *)(iVar20 + 0x28))) {
              *(uint *)(iVar5 + 0x44) = uVar6 + 1;
              *(byte *)(iVar9 + uVar6) = bVar8;
            }
            uVar15 = uVar15 + 1;
          } while ((bVar8 != 0) && (uVar15 < uVar24));
          local_74 = uVar21;
          local_6c = uVar10;
          if (((*(byte *)(iVar5 + 0x15) & 2) != 0) && ((*(byte *)(iVar5 + 0xc) & 4) != 0)) {
            uVar7 = thunk_FUN_10226df7(uVar15);
            *(undefined4 *)(local_68 + 0x1c) = uVar7;
          }
          pbVar16 = pbVar18;
          if ((char)local_64 != '\0') goto LAB_10225eb4;
          uVar24 = uVar24 - uVar15;
          pbVar18 = pbVar18 + uVar15;
          uVar21 = local_74;
          uVar15 = local_6c;
        }
        *(undefined4 *)(iVar5 + 4) = 0x3f3c;
LAB_102258ba:
        local_64 = *(byte **)(iVar5 + 0x14);
        uVar10 = uVar15;
        pbVar16 = pbVar18;
        uVar6 = uVar24;
        if (((uint)local_64 >> 9 & 1) != 0) {
          if (uVar15 < 0x10) {
            do {
              if (uVar24 == 0) goto LAB_10225de2;
              uVar24 = uVar24 - 1;
              bVar8 = *pbVar18;
              pbVar18 = pbVar18 + 1;
              uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
              uVar15 = uVar10 + 8;
              bVar25 = uVar10 < 8;
              uVar10 = uVar15;
            } while (bVar25);
          }
          uVar10 = 0;
          if (((*(byte *)(iVar5 + 0xc) & 4) != 0) && (uVar21 != *(ushort *)(local_68 + 0x1c))) {
            local_70[6] = "header crc mismatch";
            iVar5 = local_68;
            local_74 = uVar21;
LAB_10225a39:
            *(undefined4 *)(iVar5 + 4) = 0x3f51;
            uVar10 = uVar15;
            pbVar16 = pbVar18;
            iVar9 = iVar5;
            uVar6 = uVar24;
            break;
          }
          uVar21 = 0;
          pbVar16 = pbVar18;
          uVar6 = uVar24;
        }
        if (*(int *)(iVar5 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar5 + 0x24) + 0x2c) = (uint)local_64 >> 9 & 1;
          *(undefined4 *)(*(int *)(iVar5 + 0x24) + 0x30) = 1;
        }
        local_74 = uVar21;
        uVar7 = thunk_FUN_10226df7(0);
        *(undefined4 *)(iVar5 + 0x1c) = uVar7;
        local_70[0xc] = uVar7;
LAB_10225949:
        *(undefined4 *)(iVar5 + 4) = 0x3f3f;
        iVar9 = iVar5;
        break;
      case 0x3f38:
        uVar15 = *(uint *)(iVar5 + 0x14);
        if ((uVar15 >> 10 & 1) != 0) {
          uVar6 = local_74;
          if (uVar10 < 0x10) goto LAB_10225650;
          goto LAB_1022566a;
        }
        goto LAB_1022563c;
      case 0x3f39:
        local_6c = uVar10;
        goto LAB_102256b2;
      case 0x3f3a:
        uVar6 = *(uint *)(iVar5 + 0x14);
        local_6c = uVar10;
        goto LAB_10225768;
      case 0x3f3b:
        goto LAB_10225811;
      case 0x3f3c:
        goto LAB_102258ba;
      case 0x3f3d:
        if (uVar10 < 0x20) {
          do {
            if (uVar24 == 0) goto LAB_10225de2;
            uVar24 = uVar24 - 1;
            bVar8 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
            bVar25 = uVar10 < 0x18;
            uVar10 = uVar10 + 8;
          } while (bVar25);
        }
        uVar10 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 | uVar21 << 0x18
        ;
        *(uint *)(iVar5 + 0x1c) = uVar10;
        local_70[0xc] = uVar10;
        *(undefined4 *)(iVar5 + 4) = 0x3f3e;
        uVar21 = 0;
        uVar10 = 0;
        goto LAB_1022495e;
      case 0x3f3e:
LAB_1022495e:
        if (*(int *)(iVar5 + 0x10) != 0) {
          uVar7 = thunk_FUN_10226ed9(0);
          *(undefined4 *)(local_68 + 0x1c) = uVar7;
          local_70[0xc] = uVar7;
          *(undefined4 *)(local_68 + 4) = 0x3f3f;
          iVar5 = local_68;
LAB_1022498f:
          bVar8 = (byte)uVar10;
          if (*(int *)(iVar5 + 8) != 0) {
            *(undefined4 *)(iVar5 + 4) = 0x3f4e;
            uVar10 = uVar10 & 0xfffffff8;
            pbVar16 = pbVar18;
            iVar9 = iVar5;
            uVar6 = uVar24;
            local_74 = uVar21 >> (bVar8 & 7);
            break;
          }
          if (2 < uVar10) {
LAB_102249d6:
            *(uint *)(iVar5 + 8) = uVar21 & 1;
            uVar7 = 0x3f41;
            switch(uVar21 >> 1 & 3) {
            case 1:
              FUN_102263b4();
              uVar7 = 0x3f47;
              iVar5 = local_68;
              break;
            case 2:
              uVar7 = 0x3f44;
              break;
            case 3:
              local_70[6] = "invalid block type";
              uVar7 = 0x3f51;
            }
            *(undefined4 *)(iVar5 + 4) = uVar7;
            uVar10 = uVar10 - 3;
            pbVar16 = pbVar18;
            iVar9 = iVar5;
            uVar6 = uVar24;
            local_74 = uVar21 >> 3;
            break;
          }
          if (uVar24 != 0) {
            uVar10 = uVar10 | 8;
            bVar1 = *pbVar18;
            uVar24 = uVar24 - 1;
            pbVar18 = pbVar18 + 1;
            uVar21 = uVar21 + ((uint)bVar1 << (bVar8 & 0x1f));
            iVar5 = local_68;
            goto LAB_102249d6;
          }
          goto LAB_10225de2;
        }
        local_70[3] = local_54;
        local_70[4] = local_5c;
        *local_70 = pbVar18;
        local_70[1] = uVar24;
        *(uint *)(iVar5 + 0x3c) = uVar21;
        *(uint *)(iVar5 + 0x40) = uVar10;
        iVar20 = 2;
        goto LAB_1022477b;
      case 0x3f3f:
      case 0x3f40:
        goto LAB_1022498f;
      case 0x3f41:
        uVar21 = local_74 >> ((byte)uVar10 & 7);
        bVar25 = uVar10 < 0x20;
        uVar15 = uVar10 & 0xfffffff8;
        uVar10 = uVar10 & 0xfffffff8;
        if (bVar25) {
          do {
            if (uVar24 == 0) {
              uVar24 = 0;
              goto LAB_10225ef7;
            }
            uVar24 = uVar24 - 1;
            bVar8 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar15 & 0x1f));
            uVar10 = uVar15 + 8;
            bVar25 = uVar15 < 0x18;
            uVar15 = uVar10;
            pbVar16 = pbVar18;
            uVar6 = uVar24;
          } while (bVar25);
        }
        if ((uVar21 & 0xffff) == ~uVar21 >> 0x10) {
          *(uint *)(iVar5 + 0x44) = uVar21 & 0xffff;
          local_74 = 0;
          local_6c = 0;
          uVar24 = uVar6;
          goto LAB_10224c99;
        }
        local_70[6] = "invalid stored block lengths";
        local_74 = uVar21;
LAB_10225cdd:
        *(undefined4 *)(iVar5 + 4) = 0x3f51;
        iVar9 = iVar5;
        break;
      case 0x3f42:
        local_6c = uVar10;
LAB_10224c99:
        *(undefined4 *)(iVar5 + 4) = 0x3f43;
        uVar21 = local_74;
        pbVar18 = pbVar16;
        goto LAB_10224ca2;
      case 0x3f43:
        local_6c = uVar10;
LAB_10224ca2:
        uVar6 = *(uint *)(iVar5 + 0x44);
        local_74 = uVar21;
        if (uVar6 == 0) {
          *(undefined4 *)(iVar5 + 4) = 0x3f3f;
          uVar10 = local_6c;
          pbVar16 = pbVar18;
          iVar9 = iVar5;
          uVar6 = uVar24;
        }
        else {
          if (uVar24 <= uVar6) {
            uVar6 = uVar24;
          }
          if (local_5c <= uVar6) {
            uVar6 = local_5c;
          }
          uVar15 = local_6c;
          if (uVar6 == 0) goto LAB_10225ef7;
          local_60 = uVar24;
          FUN_1025b2d0(local_54,pbVar18,uVar6);
          local_5c = local_5c - uVar6;
          local_54 = puVar11 + uVar6;
          *(int *)(local_68 + 0x44) = *(int *)(local_68 + 0x44) - uVar6;
          uVar10 = local_6c;
          pbVar16 = pbVar18 + uVar6;
          iVar9 = local_68;
          uVar6 = local_60 - uVar6;
        }
        break;
      case 0x3f44:
        if (uVar10 < 0xe) {
          do {
            if (uVar24 == 0) goto LAB_10225de2;
            uVar24 = uVar24 - 1;
            bVar8 = *pbVar18;
            pbVar18 = pbVar18 + 1;
            uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
            bVar25 = uVar10 < 6;
            uVar10 = uVar10 + 8;
          } while (bVar25);
        }
        uVar15 = uVar21 & 0x1f;
        *(uint *)(iVar5 + 100) = uVar15 + 0x101;
        uVar6 = uVar21 >> 5 & 0x1f;
        *(uint *)(iVar5 + 0x68) = uVar6 + 1;
        local_6c = (uVar21 >> 10 & 0xf) + 4;
        *(uint *)(iVar5 + 0x60) = local_6c;
        uVar21 = uVar21 >> 0xe;
        uVar10 = uVar10 - 0xe;
        local_64 = pbVar18;
        local_60 = uVar24;
        if (uVar6 < 0x1e && uVar15 < 0x1e) {
          *(undefined4 *)(iVar5 + 0x6c) = 0;
          *(undefined4 *)(iVar5 + 4) = 0x3f45;
          uVar6 = 0;
LAB_10224d4e:
          do {
            uVar14 = uVar10;
            if (uVar10 < 3) {
              if (uVar24 == 0) {
                uVar24 = 0;
                pbVar18 = local_64;
                uVar15 = uVar10;
                goto LAB_10225ef7;
              }
              uVar14 = uVar10 | 8;
              bVar8 = *local_64;
              uVar24 = uVar24 - 1;
              local_64 = local_64 + 1;
              uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
            }
            uVar15 = uVar6 + 1;
            *(uint *)(local_68 + 0x6c) = uVar15;
            *(ushort *)(local_68 + 0x74 + (uint)*(ushort *)(&DAT_10322768 + uVar6 * 2) * 2) =
                 (ushort)uVar21 & 7;
            uVar21 = uVar21 >> 3;
            uVar10 = uVar14 - 3;
            uVar6 = uVar15;
            iVar5 = local_68;
          } while (uVar15 < local_6c);
          goto LAB_10224da7;
        }
        local_70[6] = "too many length or distance symbols";
        iVar9 = iVar5;
        goto LAB_10224e20;
      case 0x3f45:
        local_6c = *(uint *)(iVar5 + 0x60);
        uVar15 = *(uint *)(iVar5 + 0x6c);
        uVar6 = uVar15;
        local_64 = pbVar16;
        if (uVar15 < local_6c) goto LAB_10224d4e;
LAB_10224da7:
        if (uVar15 < 0x13) {
          do {
            iVar20 = uVar15 * 2;
            uVar15 = uVar15 + 1;
            *(undefined2 *)(local_44 + (uint)*(ushort *)(&DAT_10322768 + iVar20) * 2) = 0;
          } while (uVar15 != 0x13);
          *(undefined4 *)(local_68 + 0x6c) = 0x13;
        }
        *(int *)(local_68 + 0x70) = local_2c;
        *(int *)(local_68 + 0x50) = local_2c;
        *(undefined4 *)(local_68 + 0x58) = 7;
        local_50 = 0;
        local_60 = uVar24;
        local_48 = FUN_102263d1(0x13,local_30,local_34,local_40);
        if (local_48 == 0) {
          *(undefined4 *)(iVar9 + 0x6c) = 0;
          *(undefined4 *)(iVar9 + 4) = 0x3f46;
          local_48 = 0;
          pbVar16 = local_64;
          uVar24 = local_60;
          goto LAB_10224e53;
        }
        local_70[6] = "invalid code lengths set";
LAB_10224e20:
        *(undefined4 *)(iVar9 + 4) = 0x3f51;
        pbVar16 = local_64;
        uVar6 = local_60;
        local_74 = uVar21;
        break;
      case 0x3f46:
        local_50 = *(uint *)(iVar5 + 0x6c);
        iVar9 = iVar5;
LAB_10224e53:
        iVar5 = local_30;
        iVar20 = local_68;
        local_20 = *(int *)(iVar9 + 100);
        local_38 = *(int *)(iVar9 + 0x68) + local_20;
        local_6c = uVar10;
        if (local_50 < local_38) {
          local_58 = *(uint *)(iVar9 + 0x50);
          local_3c = ~(-1 << (*(byte *)(iVar9 + 0x58) & 0x1f));
          uVar10 = local_50;
          local_64 = pbVar16;
          local_60 = uVar24;
          do {
            local_50 = uVar10;
            uVar10 = uVar21 & local_3c;
            uVar6 = (uint)*(byte *)(local_58 + 1 + uVar10 * 4);
            uVar15 = local_6c;
            uVar24 = local_60;
            pbVar18 = local_64;
            pbVar16 = local_64;
            if (local_6c < uVar6) {
              do {
                if (uVar24 == 0) {
                  uVar15 = local_6c + local_60 * 8;
                  pbVar16 = local_64 + local_60;
                  goto LAB_10225e94;
                }
                uVar24 = uVar24 - 1;
                pbVar16 = pbVar18 + 1;
                uVar21 = uVar21 + ((uint)*pbVar18 << ((byte)uVar15 & 0x1f));
                uVar15 = uVar15 + 8;
                uVar10 = uVar21 & local_3c;
                uVar6 = (uint)*(byte *)(local_58 + 1 + uVar10 * 4);
                pbVar18 = pbVar16;
              } while (uVar15 < uVar6);
            }
            uVar3 = *(ushort *)(local_58 + 2 + uVar10 * 4);
            bVar8 = (byte)uVar6;
            if (uVar3 < 0x10) {
              local_74 = uVar21 >> (bVar8 & 0x1f);
              local_6c = uVar15 - uVar6;
              uVar10 = local_50 + 1;
              *(uint *)(local_68 + 0x6c) = uVar10;
              *(ushort *)(local_68 + 0x74 + local_50 * 2) = uVar3;
            }
            else {
              if (uVar3 == 0x10) {
                for (; uVar15 < uVar6 + 2; uVar15 = uVar15 + 8) {
                  if (uVar24 == 0) goto LAB_10225e94;
                  uVar24 = uVar24 - 1;
                  bVar1 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                  uVar21 = uVar21 + ((uint)bVar1 << ((byte)uVar15 & 0x1f));
                }
                local_74 = uVar21 >> (bVar8 & 0x1f);
                if (local_50 == 0) {
                  local_70[6] = "invalid bit length repeat";
                  *(undefined4 *)(local_68 + 4) = 0x3f51;
                  uVar10 = uVar15 - uVar6;
                  iVar9 = iVar20;
                  uVar6 = uVar24;
                  goto LAB_10225ce4;
                }
                uVar12 = *(undefined2 *)(local_68 + 0x72 + local_50 * 2);
                iVar9 = (local_74 & 3) + 3;
                local_74 = local_74 >> 2;
                local_6c = (uVar15 - uVar6) - 2;
              }
              else {
                if (uVar3 == 0x11) {
                  for (; uVar15 < uVar6 + 3; uVar15 = uVar15 + 8) {
                    if (uVar24 == 0) goto LAB_10225e94;
                    uVar24 = uVar24 - 1;
                    bVar1 = *pbVar16;
                    pbVar16 = pbVar16 + 1;
                    uVar21 = uVar21 + ((uint)bVar1 << ((byte)uVar15 & 0x1f));
                  }
                  uVar21 = uVar21 >> (bVar8 & 0x1f);
                  iVar9 = (uVar21 & 7) + 3;
                  local_74 = uVar21 >> 3;
                  local_6c = (uVar15 - uVar6) - 3;
                }
                else {
                  for (; uVar15 < uVar6 + 7; uVar15 = uVar15 + 8) {
                    if (uVar24 == 0) goto LAB_10225e94;
                    uVar24 = uVar24 - 1;
                    bVar1 = *pbVar16;
                    pbVar16 = pbVar16 + 1;
                    uVar21 = uVar21 + ((uint)bVar1 << ((byte)uVar15 & 0x1f));
                  }
                  uVar21 = uVar21 >> (bVar8 & 0x1f);
                  iVar9 = (uVar21 & 0x7f) + 0xb;
                  local_74 = uVar21 >> 7;
                  local_6c = (uVar15 - uVar6) - 7;
                }
                uVar12 = 0;
              }
              uVar10 = local_50;
              if (local_38 < iVar9 + local_50) {
                local_70[6] = "invalid bit length repeat";
                *(undefined4 *)(local_68 + 4) = 0x3f51;
                uVar10 = local_6c;
                iVar9 = iVar20;
                uVar6 = uVar24;
                goto LAB_10225ce4;
              }
              do {
                *(undefined2 *)(local_44 + uVar10 * 2) = uVar12;
                uVar10 = uVar10 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
              *(uint *)(local_68 + 0x6c) = uVar10;
            }
            uVar21 = local_74;
            local_64 = pbVar16;
            local_60 = uVar24;
          } while (uVar10 < local_38);
        }
        local_74 = uVar21;
        if (*(short *)(local_68 + 0x274) == 0) {
          local_70[6] = "invalid code -- missing end-of-block";
        }
        else {
          *(int *)(local_68 + 0x70) = local_2c;
          *(int *)(local_68 + 0x50) = local_2c;
          *(undefined4 *)(local_68 + 0x58) = 9;
          local_48 = FUN_102263d1(local_20,local_30,local_34,local_40);
          if (local_48 == 0) {
            *(undefined4 *)(iVar20 + 0x54) = *(undefined4 *)(iVar20 + 0x70);
            *(undefined4 *)(iVar20 + 0x5c) = 6;
            local_48 = FUN_102263d1(*(undefined4 *)(iVar20 + 0x68),iVar5,local_1c,local_40);
            if (local_48 == 0) {
              local_48 = 0;
              uVar10 = local_6c;
              goto switchD_10224843_caseD_3f47;
            }
            local_70[6] = "invalid distances set";
          }
          else {
            local_70[6] = "invalid literal/lengths set";
          }
        }
        *(undefined4 *)(iVar20 + 4) = 0x3f51;
        uVar10 = local_6c;
        iVar9 = iVar20;
        uVar6 = uVar24;
        break;
      case 0x3f47:
switchD_10224843_caseD_3f47:
        *(undefined4 *)(local_68 + 4) = 0x3f48;
      case 0x3f48:
        iVar9 = local_68;
        puVar4 = local_70;
        if ((5 < uVar24) && (0x101 < local_5c)) {
          local_70[3] = local_54;
          local_70[4] = local_5c;
          *local_70 = pbVar16;
          local_70[1] = uVar24;
          *(uint *)(local_68 + 0x3c) = local_74;
          *(uint *)(local_68 + 0x40) = uVar10;
          FUN_10226850();
          local_54 = (undefined1 *)puVar4[3];
          local_5c = puVar4[4];
          pbVar16 = (byte *)*puVar4;
          uVar6 = puVar4[1];
          uVar10 = *(uint *)(iVar9 + 0x40);
          local_74 = *(uint *)(iVar9 + 0x3c);
          if (*(int *)(iVar9 + 4) == 0x3f3f) {
            *(undefined4 *)(iVar9 + 0x1bc8) = 0xffffffff;
          }
          break;
        }
        *(undefined4 *)(local_68 + 0x1bc8) = 0;
        uVar15 = *(uint *)(local_68 + 0x50);
        uVar23 = ~(-1 << (*(byte *)(local_68 + 0x58) & 0x1f));
        uVar14 = local_74 & uVar23;
        uVar13 = (uint)*(byte *)(uVar15 + 1 + uVar14 * 4);
        uVar21 = uVar10;
        pbVar18 = pbVar16;
        uVar6 = uVar24;
        local_64 = pbVar16;
        if (uVar10 < uVar13) {
          do {
            local_6c = uVar10;
            local_64 = pbVar16;
            local_60 = uVar24;
            local_58 = uVar15;
            if (uVar6 == 0) goto LAB_10225def;
            uVar6 = uVar6 - 1;
            local_64 = pbVar18 + 1;
            local_74 = local_74 + ((uint)*pbVar18 << ((byte)uVar21 & 0x1f));
            uVar21 = uVar21 + 8;
            uVar14 = local_74 & uVar23;
            uVar13 = (uint)*(byte *)(uVar15 + 1 + uVar14 * 4);
            pbVar18 = local_64;
          } while (uVar21 < uVar13);
        }
        pcVar19 = (char *)(uVar15 + uVar14 * 4);
        uVar3 = *(ushort *)(pcVar19 + 2);
        local_6c = CONCAT22(local_6c._2_2_,uVar3);
        cVar2 = *pcVar19;
        pbVar16 = local_64;
        local_50 = uVar13;
        if ((byte)(cVar2 - 1U) < 0xf) {
          bVar8 = (byte)uVar13;
          uVar22 = ~(-1 << (cVar2 + bVar8 & 0x1f));
          uVar17 = (local_74 & uVar22) >> (bVar8 & 0x1f);
          uVar10 = uVar15 + (uint)uVar3 * 4;
          uVar14 = (uint)*(byte *)(uVar10 + 1 + uVar17 * 4);
          uVar24 = uVar21;
          uVar23 = uVar6;
          pbVar18 = local_64;
          local_58 = uVar15;
          if (uVar21 < uVar13 + uVar14) {
            do {
              local_6c = uVar21;
              local_60 = uVar6;
              local_58 = uVar10;
              if (uVar23 == 0) goto LAB_10225def;
              uVar23 = uVar23 - 1;
              pbVar16 = pbVar18 + 1;
              local_74 = local_74 + ((uint)*pbVar18 << ((byte)uVar24 & 0x1f));
              uVar17 = (local_74 & uVar22) >> (bVar8 & 0x1f);
              uVar24 = uVar24 + 8;
              uVar14 = (uint)*(byte *)(uVar10 + 1 + uVar17 * 4);
              pbVar18 = pbVar16;
            } while (uVar24 < uVar13 + uVar14);
          }
          puVar11 = (undefined1 *)(uVar10 + uVar17 * 4);
          local_6c = CONCAT22(local_6c._2_2_,*(undefined2 *)(puVar11 + 2));
          local_60 = CONCAT31(local_60._1_3_,*puVar11);
          local_74 = local_74 >> (bVar8 & 0x1f);
          uVar21 = uVar24 - uVar13;
          uVar24 = uVar13;
          uVar6 = uVar23;
        }
        else {
          uVar24 = 0;
          local_60 = CONCAT31(local_60._1_3_,cVar2);
          uVar14 = uVar13;
        }
        uVar10 = uVar21 - uVar14;
        *(uint *)(local_68 + 0x1bc8) = uVar24 + uVar14;
        *(uint *)(local_68 + 0x44) = local_6c & 0xffff;
        uVar21 = local_74 >> ((byte)uVar14 & 0x1f);
        if ((char)local_60 == '\0') {
          *(undefined4 *)(local_68 + 4) = 0x3f4d;
          local_74 = uVar21;
          break;
        }
        iVar5 = local_68;
        if ((local_60 & 0x20) != 0) {
          *(undefined4 *)(local_68 + 0x1bc8) = 0xffffffff;
          local_74 = uVar21;
          goto LAB_10225949;
        }
        if ((local_60 & 0x40) != 0) {
          local_70[6] = "invalid literal/length code";
          local_74 = uVar21;
          goto LAB_10225cdd;
        }
        local_60 = local_60 & 0xf;
        *(uint *)(local_68 + 0x4c) = local_60;
        *(undefined4 *)(local_68 + 4) = 0x3f49;
LAB_10224c32:
        uVar24 = uVar10;
        pbVar18 = pbVar16;
        uVar15 = uVar6;
        if (local_60 == 0) {
          iVar20 = *(int *)(iVar5 + 0x44);
        }
        else {
          for (; iVar5 = local_68, uVar24 < local_60; uVar24 = uVar24 + 8) {
            local_6c = uVar10;
            if (uVar15 == 0) {
              uVar24 = 0;
              pbVar18 = pbVar16 + uVar6;
              uVar15 = uVar10 + uVar6 * 8;
              local_64 = pbVar16;
              local_60 = uVar6;
              goto LAB_10225ef7;
            }
            uVar21 = uVar21 + ((uint)*pbVar18 << ((byte)uVar24 & 0x1f));
            pbVar18 = pbVar18 + 1;
            uVar15 = uVar15 - 1;
          }
          iVar20 = (~(-1 << ((byte)local_60 & 0x1f)) & uVar21) + *(int *)(local_68 + 0x44);
          uVar21 = uVar21 >> ((byte)local_60 & 0x1f);
          *(int *)(local_68 + 0x44) = iVar20;
          *(int *)(local_68 + 0x1bc8) = *(int *)(local_68 + 0x1bc8) + local_60;
          uVar10 = uVar24 - local_60;
          uVar6 = uVar15;
          pbVar16 = pbVar18;
        }
        *(int *)(iVar5 + 0x1bcc) = iVar20;
        *(undefined4 *)(iVar5 + 4) = 0x3f4a;
        local_64 = pbVar16;
LAB_10225105:
        uVar24 = *(uint *)(iVar5 + 0x54);
        uVar17 = ~(-1 << (*(byte *)(iVar5 + 0x5c) & 0x1f));
        uVar15 = uVar21 & uVar17;
        uVar13 = (uint)*(byte *)(uVar24 + 1 + uVar15 * 4);
        uVar14 = uVar10;
        pbVar16 = local_64;
        uVar23 = uVar6;
        local_74 = uVar21;
        pbVar18 = local_64;
        if (uVar10 < uVar13) {
          do {
            local_6c = uVar10;
            local_60 = uVar6;
            local_58 = uVar24;
            if (uVar23 == 0) goto LAB_10225def;
            uVar23 = uVar23 - 1;
            pbVar18 = pbVar16 + 1;
            local_74 = local_74 + ((uint)*pbVar16 << ((byte)uVar14 & 0x1f));
            uVar14 = uVar14 + 8;
            uVar15 = local_74 & uVar17;
            uVar13 = (uint)*(byte *)(uVar24 + 1 + uVar15 * 4);
            pbVar16 = pbVar18;
          } while (uVar14 < uVar13);
        }
        local_64 = pbVar18;
        pbVar16 = (byte *)(uVar24 + uVar15 * 4);
        uVar3 = *(ushort *)(pbVar16 + 2);
        local_6c = CONCAT22(local_6c._2_2_,uVar3);
        bVar8 = *pbVar16;
        local_58 = (uint)bVar8;
        pbVar16 = local_64;
        local_60 = uVar23;
        if (local_58 < 0x10) {
          bVar1 = (byte)uVar13;
          local_50 = ~(-1 << (bVar8 + bVar1 & 0x1f));
          uVar6 = (local_74 & local_50) >> (bVar1 & 0x1f);
          local_58 = uVar24 + (uint)uVar3 * 4;
          uVar15 = (uint)*(byte *)(local_58 + 1 + uVar6 * 4);
          uVar10 = uVar14;
          pbVar18 = local_64;
          uVar24 = uVar23;
          local_6c = (uint)uVar3;
          if (uVar14 < uVar13 + uVar15) {
            do {
              local_6c = uVar14;
              local_60 = uVar23;
              if (uVar24 == 0) goto LAB_10225def;
              local_60 = uVar24 - 1;
              pbVar16 = pbVar18 + 1;
              local_74 = local_74 + ((uint)*pbVar18 << ((byte)uVar10 & 0x1f));
              uVar6 = (local_74 & local_50) >> (bVar1 & 0x1f);
              uVar10 = uVar10 + 8;
              uVar15 = (uint)*(byte *)(local_58 + 1 + uVar6 * 4);
              pbVar18 = pbVar16;
              uVar24 = local_60;
            } while (uVar10 < uVar13 + uVar15);
          }
          pbVar18 = (byte *)(local_58 + uVar6 * 4);
          local_6c = CONCAT22(local_6c._2_2_,*(undefined2 *)(pbVar18 + 2));
          local_58 = (uint)*pbVar18;
          uVar14 = uVar10 - uVar13;
          iVar20 = uVar13 + *(int *)(local_68 + 0x1bc8);
          uVar13 = uVar15;
          uVar21 = local_74 >> (bVar1 & 0x1f);
        }
        else {
          iVar20 = *(int *)(local_68 + 0x1bc8);
          uVar21 = local_74;
        }
        uVar21 = uVar21 >> ((byte)uVar13 & 0x1f);
        *(uint *)(local_68 + 0x1bc8) = iVar20 + uVar13;
        uVar10 = uVar14 - uVar13;
        if ((local_58 & 0x40) != 0) {
          local_70[6] = "invalid distance code";
          *(undefined4 *)(local_68 + 4) = 0x3f51;
          iVar9 = local_68;
          uVar6 = local_60;
          local_74 = uVar21;
          break;
        }
        *(uint *)(local_68 + 0x48) = local_6c & 0xffff;
        uVar15 = local_58 & 0xf;
        *(uint *)(local_68 + 0x4c) = uVar15;
        *(undefined4 *)(local_68 + 4) = 0x3f4b;
        iVar5 = local_68;
        uVar6 = local_60;
LAB_1022529b:
        pbVar18 = pbVar16;
        uVar24 = uVar6;
        uVar14 = uVar10;
        if (uVar15 != 0) {
          for (; iVar5 = local_68, local_60 = uVar6, uVar14 < uVar15; uVar14 = uVar14 + 8) {
            local_6c = uVar10;
            local_64 = pbVar16;
            if (uVar24 == 0) {
              uVar24 = 0;
              pbVar18 = pbVar16 + uVar6;
              uVar15 = uVar10 + uVar6 * 8;
              goto LAB_10225ef7;
            }
            uVar21 = uVar21 + ((uint)*pbVar18 << ((byte)uVar14 & 0x1f));
            pbVar18 = pbVar18 + 1;
            uVar24 = uVar24 - 1;
          }
          *(int *)(local_68 + 0x48) =
               *(int *)(local_68 + 0x48) + (~(-1 << ((byte)uVar15 & 0x1f)) & uVar21);
          uVar21 = uVar21 >> ((byte)uVar15 & 0x1f);
          *(int *)(local_68 + 0x1bc8) = *(int *)(local_68 + 0x1bc8) + uVar15;
          uVar10 = uVar14 - uVar15;
        }
        *(undefined4 *)(iVar5 + 4) = 0x3f4c;
LAB_10225333:
        if (local_5c == 0) {
          local_5c = 0;
          uVar15 = uVar10;
          goto LAB_10225ef7;
        }
        uVar15 = *(uint *)(iVar5 + 0x48);
        uVar14 = uVar15 - (local_4c - local_5c);
        uVar6 = uVar24;
        pbVar16 = pbVar18;
        local_74 = uVar21;
        if (uVar15 < local_4c - local_5c || uVar14 == 0) {
          iVar20 = (int)local_54 - uVar15;
          uVar14 = *(uint *)(iVar5 + 0x44);
          uVar15 = uVar14;
        }
        else {
          if ((*(uint *)(iVar5 + 0x30) < uVar14) && (*(int *)(iVar5 + 0x1bc4) != 0)) {
            local_70[6] = "invalid distance too far back";
            goto LAB_10225cdd;
          }
          uVar15 = *(uint *)(iVar5 + 0x34);
          uVar21 = uVar14 - uVar15;
          if (uVar14 < uVar15 || uVar21 == 0) {
            iVar20 = (uVar15 - uVar14) + *(int *)(iVar5 + 0x38);
          }
          else {
            iVar20 = (*(int *)(iVar5 + 0x2c) - uVar21) + *(int *)(iVar5 + 0x38);
            uVar14 = uVar21;
          }
          uVar15 = *(uint *)(iVar5 + 0x44);
          if (uVar15 <= uVar14) {
            uVar14 = uVar15;
          }
        }
        if (local_5c <= uVar14) {
          uVar14 = local_5c;
        }
        *(uint *)(iVar5 + 0x44) = uVar15 - uVar14;
        uVar15 = 0;
        do {
          local_54[uVar15] = *(undefined1 *)(iVar20 + uVar15);
          uVar15 = uVar15 + 1;
        } while (uVar14 != uVar15);
        local_5c = local_5c - uVar14;
        local_54 = local_54 + uVar15;
        iVar9 = iVar5;
        local_6c = uVar10;
        local_60 = uVar24;
        if (*(int *)(iVar5 + 0x44) == 0) {
          *(undefined4 *)(iVar5 + 4) = 0x3f48;
        }
        break;
      case 0x3f49:
        local_60 = *(uint *)(iVar5 + 0x4c);
        goto LAB_10224c32;
      case 0x3f4a:
        local_64 = pbVar16;
        goto LAB_10225105;
      case 0x3f4b:
        uVar15 = *(uint *)(iVar5 + 0x4c);
        goto LAB_1022529b;
      case 0x3f4c:
        goto LAB_10225333;
      case 0x3f4d:
        if (local_5c == 0) {
          local_5c = 0;
          goto LAB_10225ef7;
        }
        *local_54 = *(undefined1 *)(iVar5 + 0x44);
        local_54 = local_54 + 1;
        local_5c = local_5c - 1;
        *(undefined4 *)(iVar5 + 4) = 0x3f48;
        iVar9 = iVar5;
        break;
      case 0x3f4e:
        if (*(int *)(iVar5 + 0xc) == 0) {
          uVar6 = 0;
        }
        else {
          if (uVar10 < 0x20) {
            do {
              if (uVar24 == 0) {
                uVar24 = 0;
                pbVar18 = pbVar16;
                uVar15 = uVar10;
                iVar5 = local_68;
                goto LAB_10225ef7;
              }
              uVar24 = uVar24 - 1;
              bVar8 = *pbVar16;
              pbVar16 = pbVar16 + 1;
              uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
              uVar15 = uVar10 + 8;
              bVar25 = uVar10 < 0x18;
              uVar10 = uVar15;
            } while (bVar25);
          }
          iVar20 = local_4c - local_5c;
          local_70[5] = local_70[5] + iVar20;
          *(int *)(local_68 + 0x20) = *(int *)(local_68 + 0x20) + iVar20;
          uVar6 = *(uint *)(local_68 + 0xc);
          uVar10 = uVar6 & 4;
          local_74 = uVar21;
          local_60 = uVar24;
          if ((uVar10 != 0) && (local_4c != local_5c)) {
            if (*(int *)(local_68 + 0x14) == 0) {
              uVar7 = thunk_FUN_10226ed9(iVar20);
            }
            else {
              uVar7 = thunk_FUN_10226df7(iVar20);
            }
            *(undefined4 *)(local_68 + 0x1c) = uVar7;
            local_70[0xc] = uVar7;
            uVar6 = *(uint *)(local_68 + 0xc);
            uVar10 = uVar6 & 4;
          }
          uVar24 = local_60;
          iVar5 = local_68;
          if (uVar10 == 0) {
            local_4c = local_5c;
            uVar10 = 0;
            uVar21 = 0;
          }
          else {
            uVar10 = local_74 >> 0x18 | (local_74 & 0xff0000) >> 8 | (local_74 & 0xff00) << 8 |
                     local_74 << 0x18;
            if (*(int *)(local_68 + 0x14) != 0) {
              uVar10 = local_74;
            }
            if (uVar10 != *(uint *)(local_68 + 0x1c)) {
              local_70[6] = "incorrect data check";
              *(undefined4 *)(local_68 + 4) = 0x3f51;
              local_4c = local_5c;
              uVar10 = uVar15;
              iVar9 = local_68;
              uVar6 = local_60;
              break;
            }
            local_4c = local_5c;
            uVar10 = 0;
            uVar21 = 0;
          }
        }
        *(undefined4 *)(iVar5 + 4) = 0x3f4f;
        uVar15 = uVar10;
        pbVar18 = pbVar16;
        goto LAB_102259d7;
      case 0x3f4f:
        uVar6 = *(uint *)(iVar5 + 0xc);
LAB_102259d7:
        if ((uVar6 != 0) && (*(int *)(iVar5 + 0x14) != 0)) {
          uVar10 = uVar15;
          if (uVar15 < 0x20) {
            do {
              if (uVar24 == 0) goto LAB_10225de2;
              uVar24 = uVar24 - 1;
              bVar8 = *pbVar18;
              pbVar18 = pbVar18 + 1;
              uVar21 = uVar21 + ((uint)bVar8 << ((byte)uVar10 & 0x1f));
              uVar15 = uVar10 + 8;
              bVar25 = uVar10 < 0x18;
              uVar10 = uVar15;
              iVar5 = local_68;
            } while (bVar25);
          }
          if (((uVar6 & 4) == 0) || (uVar21 == *(uint *)(iVar5 + 0x20))) {
            uVar21 = 0;
            uVar15 = 0;
            goto LAB_10225ed8;
          }
          local_70[6] = "incorrect length check";
          local_74 = uVar21;
          goto LAB_10225a39;
        }
LAB_10225ed8:
        *(undefined4 *)(iVar5 + 4) = 0x3f50;
        local_48 = 1;
        goto LAB_10225ef7;
      case 0x3f50:
        goto switchD_10224843_caseD_3f50;
      case 0x3f51:
        local_48 = -3;
        goto LAB_10225ef7;
      case 0x3f52:
        goto switchD_10224843_caseD_3f52;
      default:
        iVar20 = -2;
        goto LAB_1022477b;
      }
LAB_10225ce4:
      iVar20 = *(int *)(iVar9 + 4);
      iVar5 = iVar9;
      uVar24 = uVar6;
    } while( true );
  }
LAB_1022477b:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_74)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar20;
switchD_10224843_caseD_3f50:
  local_48 = 1;
LAB_10225ef7:
  puVar4 = local_70;
  local_70[3] = local_54;
  local_70[4] = local_5c;
  *local_70 = pbVar18;
  local_70[1] = uVar24;
  *(uint *)(iVar5 + 0x3c) = uVar21;
  *(uint *)(iVar5 + 0x40) = uVar15;
  uVar10 = local_70[4];
  if ((*(int *)(iVar5 + 0x2c) != 0) ||
     (((uVar24 = local_4c, local_4c != uVar10 && (uVar24 = uVar10, *(int *)(iVar5 + 4) < 0x3f51)) &&
      (local_28 != 4 || *(int *)(iVar5 + 4) < 0x3f4e)))) {
    iVar20 = FUN_10226d20(local_4c - uVar10);
    if (iVar20 != 0) {
      *(undefined4 *)(iVar5 + 4) = 0x3f52;
switchD_10224843_caseD_3f52:
      iVar20 = -4;
      goto LAB_1022477b;
    }
    uVar24 = puVar4[4];
  }
  uVar10 = local_70[1];
  local_70[2] = local_70[2] + (local_24 - uVar10);
  iVar20 = local_4c - uVar24;
  local_70[5] = local_70[5] + iVar20;
  *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + iVar20;
  if (((*(byte *)(iVar5 + 0xc) & 4) != 0) && (local_4c != uVar24)) {
    if (*(int *)(iVar5 + 0x14) == 0) {
      uVar7 = thunk_FUN_10226ed9(iVar20);
    }
    else {
      uVar7 = thunk_FUN_10226df7(iVar20);
    }
    *(undefined4 *)(iVar5 + 0x1c) = uVar7;
    local_70[0xc] = uVar7;
  }
  iVar20 = *(int *)(iVar5 + 4);
  iVar9 = -5;
  if (local_48 != 0) {
    iVar9 = local_48;
  }
  local_70[0xb] =
       (uint)(iVar20 == 0x3f42 || iVar20 == 0x3f47) * 0x100 + (uint)(iVar20 == 0x3f3f) * 0x80 +
       (uint)(*(int *)(iVar5 + 8) != 0) * 0x40 + *(int *)(iVar5 + 0x40);
  iVar20 = local_48;
  if (local_4c == uVar24 && local_24 == uVar10) {
    iVar20 = iVar9;
  }
  if (local_28 == 4) {
    iVar20 = iVar9;
  }
  goto LAB_1022477b;
LAB_10225e94:
  uVar24 = 0;
  pbVar18 = pbVar16;
  iVar5 = local_68;
  goto LAB_10225ef7;
LAB_10225def:
  uVar24 = 0;
  pbVar18 = local_64 + local_60;
  uVar21 = local_74;
  uVar15 = local_6c + local_60 * 8;
  iVar5 = local_68;
  goto LAB_10225ef7;
}

