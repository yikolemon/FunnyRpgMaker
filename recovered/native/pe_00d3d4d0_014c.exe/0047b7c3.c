/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047b7c3 */

int __fastcall FUN_0047b7c3(int *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  bool bVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined2 uVar16;
  uint *puVar17;
  uint uVar18;
  byte *pbVar19;
  uint *puVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint local_74;
  int *local_70;
  uint local_6c;
  int local_68;
  uint *local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  undefined *local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_74;
  bVar6 = FUN_0047d28a((int)param_1);
  iVar22 = -2;
  if (((CONCAT31(extraout_var,bVar6) == 0) &&
      (local_54 = (uint *)param_1[3], local_54 != (uint *)0x0)) &&
     ((puVar17 = (uint *)*param_1, puVar17 != (uint *)0x0 || (param_1[1] == 0)))) {
    local_68 = param_1[7];
    iVar22 = *(int *)(local_68 + 4);
    if (iVar22 == 0x3f3f) {
      *(undefined4 *)(local_68 + 4) = 0x3f40;
      puVar17 = (uint *)*param_1;
      local_54 = (uint *)param_1[3];
      iVar22 = 0x3f40;
    }
    local_24 = param_1[1];
    local_5c = param_1[4];
    local_74 = *(uint *)(local_68 + 0x3c);
    uVar14 = *(uint *)(local_68 + 0x40);
    local_44 = local_68 + 0x74;
    local_2c = local_68 + 0x534;
    local_30 = (int *)(local_68 + 0x70);
    local_34 = (uint *)(local_68 + 0x58);
    local_40 = (undefined *)(local_68 + 0x2f4);
    local_1c = (uint *)(local_68 + 0x5c);
    local_48 = 0;
    iVar13 = local_68;
    uVar26 = local_24;
    local_70 = param_1;
    local_4c = local_5c;
    local_28 = param_2;
    do {
      puVar5 = local_54;
      iVar11 = local_68;
      uVar10 = uVar14;
      uVar23 = local_74;
      puVar20 = puVar17;
      uVar8 = uVar26;
      switch(iVar22) {
      case 0x3f34:
        uVar10 = *(uint *)(iVar13 + 0xc);
        if (uVar10 == 0) {
          *(undefined4 *)(iVar13 + 4) = 0x3f40;
          iVar11 = iVar13;
        }
        else {
          if (uVar14 < 0x10) {
            do {
              if (uVar26 == 0) goto LAB_0047ce4e;
              uVar26 = uVar26 - 1;
              uVar8 = *puVar20;
              puVar20 = (uint *)((int)puVar20 + 1);
              uVar23 = uVar23 + ((uint)(byte)uVar8 << ((byte)uVar14 & 0x1f));
              bVar6 = uVar14 < 8;
              uVar14 = uVar14 + 8;
              puVar17 = puVar20;
              iVar13 = local_68;
              uVar8 = uVar26;
            } while (bVar6);
          }
          if (((uVar10 & 2) == 0) || (uVar23 != 0x8b1f)) {
            if (*(int *)(iVar13 + 0x24) != 0) {
              *(undefined4 *)(*(int *)(iVar13 + 0x24) + 0x30) = 0xffffffff;
              uVar10 = *(uint *)(iVar13 + 0xc);
            }
            if (((uVar10 & 1) == 0) ||
               (0x8421084 < ((uVar23 >> 8) + (uVar23 & 0xff) * 0x100) * -0x42108421)) {
              local_70[6] = (int)"incorrect header check";
              local_74 = uVar23;
              goto LAB_0047cd49;
            }
            if ((uVar23 & 0xf) != 8) goto LAB_0047c11f;
            local_74 = uVar23 >> 4;
            uVar25 = local_74 & 0xf;
            uVar26 = uVar25 + 8;
            uVar10 = *(uint *)(iVar13 + 0x28);
            if (*(uint *)(iVar13 + 0x28) == 0) {
              *(uint *)(local_68 + 0x28) = uVar26;
              uVar10 = uVar26;
            }
            local_64 = puVar17;
            local_60 = uVar8;
            if ((uVar25 < 8) && (uVar26 <= uVar10)) {
              *(int *)(local_68 + 0x18) = 0x100 << (sbyte)uVar25;
              uVar14 = 0;
              *(undefined4 *)(local_68 + 0x14) = 0;
              local_74 = uVar23;
              uVar26 = thunk_FUN_0047df45(0,(byte *)0x0,0);
              *(uint *)(iVar11 + 0x1c) = uVar26;
              local_70[0xc] = uVar26;
              *(uint *)(iVar11 + 4) = (uint)((uVar23 >> 0xd & 1) == 0) * 2 + 0x3f3d;
              local_74 = 0;
              puVar17 = local_64;
              uVar8 = local_60;
            }
            else {
              uVar14 = uVar14 - 4;
              local_70[6] = (int)"invalid window size";
              *(undefined4 *)(local_68 + 4) = 0x3f51;
            }
          }
          else {
            if (*(int *)(iVar13 + 0x28) == 0) {
              *(undefined4 *)(iVar13 + 0x28) = 0xf;
            }
            uVar14 = thunk_FUN_0047de63(0,(byte *)0x0,0);
            local_18 = CONCAT22(local_18._2_2_,0x8b1f);
            uVar14 = thunk_FUN_0047de63(uVar14,(byte *)&local_18,2);
            local_74 = 0;
            *(uint *)(iVar13 + 0x1c) = uVar14;
            *(undefined4 *)(iVar13 + 4) = 0x3f35;
            uVar14 = 0;
            iVar11 = iVar13;
          }
        }
        break;
      case 0x3f35:
        if (uVar14 < 0x10) {
          do {
            if (uVar26 == 0) goto LAB_0047ce4e;
            uVar26 = uVar26 - 1;
            uVar10 = *puVar20;
            puVar20 = (uint *)((int)puVar20 + 1);
            uVar23 = uVar23 + ((uint)(byte)uVar10 << ((byte)uVar14 & 0x1f));
            bVar6 = uVar14 < 8;
            uVar14 = uVar14 + 8;
            puVar17 = puVar20;
            uVar8 = uVar26;
          } while (bVar6);
        }
        *(uint *)(iVar13 + 0x14) = uVar23;
        if ((char)uVar23 == '\b') {
          if ((uVar23 & 0xe000) == 0) {
            uVar14 = uVar23;
            if (*(uint **)(iVar13 + 0x24) != (uint *)0x0) {
              **(uint **)(iVar13 + 0x24) = uVar23 >> 8 & 1;
              uVar14 = *(uint *)(iVar13 + 0x14);
            }
            if (((uVar14 >> 9 & 1) != 0) && ((*(byte *)(iVar13 + 0xc) & 4) != 0)) {
              local_18._0_2_ = CONCAT11((char)(uVar23 >> 8),8);
              uVar14 = thunk_FUN_0047de63(*(uint *)(iVar13 + 0x1c),(byte *)&local_18,2);
              *(uint *)(iVar13 + 0x1c) = uVar14;
            }
            *(undefined4 *)(iVar13 + 4) = 0x3f36;
            uVar14 = 0;
            uVar23 = 0;
            puVar20 = puVar17;
            goto LAB_0047c5de;
          }
          local_70[6] = (int)"unknown header flags set";
          local_74 = uVar23;
        }
        else {
LAB_0047c11f:
          local_74 = uVar23;
          local_70[6] = (int)"unknown compression method";
        }
        goto LAB_0047cd49;
      case 0x3f36:
        if (uVar14 < 0x20) {
LAB_0047c5de:
          do {
            if (uVar8 == 0) goto LAB_0047ce4e;
            uVar8 = uVar8 - 1;
            puVar17 = (uint *)((int)puVar20 + 1);
            uVar23 = uVar23 + ((uint)(byte)*puVar20 << ((byte)uVar14 & 0x1f));
            bVar6 = uVar14 < 0x18;
            uVar14 = uVar14 + 8;
            puVar20 = puVar17;
            uVar26 = uVar8;
          } while (bVar6);
        }
        if (*(int *)(iVar13 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar13 + 0x24) + 4) = uVar23;
        }
        if (((*(byte *)(iVar13 + 0x15) & 2) != 0) && ((*(byte *)(iVar13 + 0xc) & 4) != 0)) {
          local_18 = uVar23;
          uVar14 = thunk_FUN_0047de63(*(uint *)(iVar13 + 0x1c),(byte *)&local_18,4);
          *(uint *)(iVar13 + 0x1c) = uVar14;
        }
        *(undefined4 *)(iVar13 + 4) = 0x3f37;
        uVar14 = 0;
        uVar23 = 0;
LAB_0047c633:
        do {
          if (uVar26 == 0) goto LAB_0047ce4e;
          uVar26 = uVar26 - 1;
          uVar10 = *puVar20;
          puVar20 = (uint *)((int)puVar20 + 1);
          uVar23 = uVar23 + ((uint)(byte)uVar10 << ((byte)uVar14 & 0x1f));
          bVar6 = uVar14 < 8;
          uVar14 = uVar14 + 8;
          puVar17 = puVar20;
        } while (bVar6);
        goto LAB_0047c64f;
      case 0x3f37:
        if (uVar14 < 0x10) goto LAB_0047c633;
LAB_0047c64f:
        if (*(int *)(iVar13 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar13 + 0x24) + 8) = uVar23 & 0xff;
          *(uint *)(*(int *)(iVar13 + 0x24) + 0xc) = uVar23 >> 8;
        }
        uVar10 = *(uint *)(iVar13 + 0x14);
        if (((uVar10 >> 9 & 1) != 0) && ((*(byte *)(iVar13 + 0xc) & 4) != 0)) {
          local_18 = CONCAT22(local_18._2_2_,(short)uVar23);
          uVar14 = thunk_FUN_0047de63(*(uint *)(iVar13 + 0x1c),(byte *)&local_18,2);
          *(uint *)(iVar13 + 0x1c) = uVar14;
        }
        *(undefined4 *)(iVar13 + 4) = 0x3f38;
        uVar14 = 0;
        uVar23 = 0;
        uVar8 = 0;
        if ((uVar10 >> 10 & 1) == 0) {
LAB_0047c6a8:
          if (*(int *)(iVar13 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar13 + 0x24) + 0x10) = 0;
          }
        }
        else {
LAB_0047c6bc:
          do {
            if (uVar26 == 0) {
              uVar26 = 0;
              puVar20 = puVar17;
              uVar23 = uVar8;
              uVar10 = uVar14;
              goto LAB_0047cf63;
            }
            uVar26 = uVar26 - 1;
            uVar23 = *puVar17;
            puVar17 = (uint *)((int)puVar17 + 1);
            uVar8 = uVar8 + ((uint)(byte)uVar23 << ((byte)uVar14 & 0x1f));
            bVar6 = uVar14 < 8;
            uVar14 = uVar14 + 8;
          } while (bVar6);
LAB_0047c6d6:
          *(uint *)(iVar13 + 0x44) = uVar8;
          if (*(int *)(iVar13 + 0x24) != 0) {
            *(uint *)(*(int *)(iVar13 + 0x24) + 0x14) = uVar8;
            uVar10 = *(uint *)(iVar13 + 0x14);
          }
          if (((uVar10 >> 9 & 1) != 0) && ((*(byte *)(iVar13 + 0xc) & 4) != 0)) {
            local_18 = CONCAT22(local_18._2_2_,(short)uVar8);
            uVar14 = thunk_FUN_0047de63(*(uint *)(iVar13 + 0x1c),(byte *)&local_18,2);
            *(uint *)(iVar13 + 0x1c) = uVar14;
          }
          uVar23 = 0;
          uVar14 = 0;
        }
        *(undefined4 *)(iVar13 + 4) = 0x3f39;
        local_6c = uVar14;
LAB_0047c71e:
        uVar8 = *(uint *)(iVar13 + 0x14);
        if ((uVar8 >> 10 & 1) != 0) {
          uVar14 = *(uint *)(iVar13 + 0x44);
          uVar10 = uVar26;
          if (uVar14 < uVar26) {
            uVar10 = uVar14;
          }
          local_64 = puVar17;
          if (uVar10 != 0) {
            iVar22 = *(int *)(iVar13 + 0x24);
            local_74 = uVar23;
            local_60 = uVar26;
            if ((iVar22 != 0) && (*(int *)(iVar22 + 0x10) != 0)) {
              uVar26 = *(uint *)(iVar22 + 0x18);
              uVar14 = *(int *)(iVar22 + 0x14) - uVar14;
              if (uVar14 <= uVar26 && uVar26 - uVar14 != 0) {
                uVar8 = uVar26 - uVar14;
                if (uVar14 + uVar10 <= uVar26) {
                  uVar8 = uVar10;
                }
                FUN_004878c0((uint *)(*(int *)(iVar22 + 0x10) + uVar14),puVar17,uVar8);
                uVar8 = *(uint *)(iVar13 + 0x14);
              }
            }
            if (((uVar8 >> 9 & 1) != 0) && ((*(byte *)(iVar13 + 0xc) & 4) != 0)) {
              uVar14 = thunk_FUN_0047de63(*(uint *)(iVar13 + 0x1c),(byte *)local_64,uVar10);
              *(uint *)(iVar13 + 0x1c) = uVar14;
            }
            uVar26 = local_60 - uVar10;
            puVar17 = (uint *)((int)local_64 + uVar10);
            uVar14 = *(int *)(iVar13 + 0x44) - uVar10;
            *(uint *)(iVar13 + 0x44) = uVar14;
            uVar23 = local_74;
          }
          puVar20 = puVar17;
          uVar10 = local_6c;
          if (uVar14 != 0) goto LAB_0047cf63;
        }
        *(undefined4 *)(iVar13 + 0x44) = 0;
        *(undefined4 *)(iVar13 + 4) = 0x3f3a;
LAB_0047c7d4:
        if ((uVar8 >> 0xb & 1) != 0) {
          if (uVar26 == 0) {
            uVar26 = 0;
            puVar20 = puVar17;
            uVar10 = local_6c;
          }
          else {
            uVar10 = 0;
            do {
              cVar1 = *(char *)((int)puVar17 + uVar10);
              local_64 = (uint *)CONCAT31(local_64._1_3_,cVar1);
              iVar22 = *(int *)(iVar13 + 0x24);
              if (((iVar22 != 0) && (iVar11 = *(int *)(iVar22 + 0x1c), iVar11 != 0)) &&
                 (uVar14 = *(uint *)(iVar13 + 0x44), uVar14 < *(uint *)(iVar22 + 0x20))) {
                *(uint *)(iVar13 + 0x44) = uVar14 + 1;
                *(char *)(iVar11 + uVar14) = cVar1;
              }
              uVar10 = uVar10 + 1;
            } while ((cVar1 != '\0') && (uVar10 < uVar26));
            local_74 = uVar23;
            if (((*(byte *)(iVar13 + 0x15) & 2) != 0) && ((*(byte *)(iVar13 + 0xc) & 4) != 0)) {
              uVar14 = thunk_FUN_0047de63(*(uint *)(iVar13 + 0x1c),(byte *)puVar17,uVar10);
              *(uint *)(local_68 + 0x1c) = uVar14;
            }
            if ((char)local_64 == '\0') {
              uVar26 = uVar26 - uVar10;
              puVar17 = (uint *)((int)puVar17 + uVar10);
              uVar23 = local_74;
              goto LAB_0047c86b;
            }
LAB_0047cf20:
            uVar26 = uVar26 - uVar10;
            puVar20 = (uint *)((int)puVar17 + uVar10);
            uVar23 = local_74;
            uVar10 = local_6c;
          }
          goto LAB_0047cf63;
        }
        if (*(int *)(iVar13 + 0x24) != 0) {
          *(undefined4 *)(*(int *)(iVar13 + 0x24) + 0x1c) = 0;
        }
LAB_0047c86b:
        *(undefined4 *)(iVar13 + 0x44) = 0;
        *(undefined4 *)(iVar13 + 4) = 0x3f3b;
        uVar14 = local_6c;
        puVar20 = puVar17;
LAB_0047c87d:
        if ((*(byte *)(iVar13 + 0x15) & 0x10) == 0) {
          uVar10 = uVar14;
          if (*(int *)(iVar13 + 0x24) != 0) {
            *(undefined4 *)(*(int *)(iVar13 + 0x24) + 0x24) = 0;
          }
        }
        else {
          if (uVar26 == 0) {
LAB_0047ce4e:
            uVar26 = 0;
            uVar10 = uVar14;
            goto LAB_0047cf63;
          }
          uVar10 = 0;
          do {
            cVar1 = *(char *)((int)puVar20 + uVar10);
            local_64 = (uint *)CONCAT31(local_64._1_3_,cVar1);
            iVar22 = *(int *)(iVar13 + 0x24);
            if (((iVar22 != 0) && (iVar11 = *(int *)(iVar22 + 0x24), iVar11 != 0)) &&
               (uVar8 = *(uint *)(iVar13 + 0x44), uVar8 < *(uint *)(iVar22 + 0x28))) {
              *(uint *)(iVar13 + 0x44) = uVar8 + 1;
              *(char *)(iVar11 + uVar8) = cVar1;
            }
            uVar10 = uVar10 + 1;
          } while ((cVar1 != '\0') && (uVar10 < uVar26));
          local_74 = uVar23;
          local_6c = uVar14;
          if (((*(byte *)(iVar13 + 0x15) & 2) != 0) && ((*(byte *)(iVar13 + 0xc) & 4) != 0)) {
            uVar14 = thunk_FUN_0047de63(*(uint *)(iVar13 + 0x1c),(byte *)puVar20,uVar10);
            *(uint *)(local_68 + 0x1c) = uVar14;
          }
          puVar17 = puVar20;
          if ((char)local_64 != '\0') goto LAB_0047cf20;
          uVar26 = uVar26 - uVar10;
          puVar20 = (uint *)((int)puVar20 + uVar10);
          uVar23 = local_74;
          uVar10 = local_6c;
        }
        *(undefined4 *)(iVar13 + 4) = 0x3f3c;
LAB_0047c926:
        local_64 = *(uint **)(iVar13 + 0x14);
        uVar14 = uVar10;
        puVar17 = puVar20;
        uVar8 = uVar26;
        if (((uint)local_64 >> 9 & 1) != 0) {
          if (uVar10 < 0x10) {
            do {
              if (uVar26 == 0) goto LAB_0047ce4e;
              uVar26 = uVar26 - 1;
              uVar10 = *puVar20;
              puVar20 = (uint *)((int)puVar20 + 1);
              uVar23 = uVar23 + ((uint)(byte)uVar10 << ((byte)uVar14 & 0x1f));
              uVar10 = uVar14 + 8;
              bVar6 = uVar14 < 8;
              uVar14 = uVar10;
            } while (bVar6);
          }
          uVar14 = 0;
          if (((*(byte *)(iVar13 + 0xc) & 4) != 0) && (uVar23 != *(ushort *)(local_68 + 0x1c))) {
            local_70[6] = (int)"header crc mismatch";
            iVar13 = local_68;
            local_74 = uVar23;
LAB_0047caa5:
            *(undefined4 *)(iVar13 + 4) = 0x3f51;
            uVar14 = uVar10;
            puVar17 = puVar20;
            iVar11 = iVar13;
            uVar8 = uVar26;
            break;
          }
          uVar23 = 0;
          puVar17 = puVar20;
          uVar8 = uVar26;
        }
        if (*(int *)(iVar13 + 0x24) != 0) {
          *(uint *)(*(int *)(iVar13 + 0x24) + 0x2c) = (uint)local_64 >> 9 & 1;
          *(undefined4 *)(*(int *)(iVar13 + 0x24) + 0x30) = 1;
        }
        local_74 = uVar23;
        uVar26 = thunk_FUN_0047de63(0,(byte *)0x0,0);
        *(uint *)(iVar13 + 0x1c) = uVar26;
        local_70[0xc] = uVar26;
LAB_0047c9b5:
        *(undefined4 *)(iVar13 + 4) = 0x3f3f;
        iVar11 = iVar13;
        break;
      case 0x3f38:
        uVar10 = *(uint *)(iVar13 + 0x14);
        if ((uVar10 >> 10 & 1) != 0) {
          uVar8 = local_74;
          if (uVar14 < 0x10) goto LAB_0047c6bc;
          goto LAB_0047c6d6;
        }
        goto LAB_0047c6a8;
      case 0x3f39:
        local_6c = uVar14;
        goto LAB_0047c71e;
      case 0x3f3a:
        uVar8 = *(uint *)(iVar13 + 0x14);
        local_6c = uVar14;
        goto LAB_0047c7d4;
      case 0x3f3b:
        goto LAB_0047c87d;
      case 0x3f3c:
        goto LAB_0047c926;
      case 0x3f3d:
        if (uVar14 < 0x20) {
          do {
            if (uVar26 == 0) goto LAB_0047ce4e;
            uVar26 = uVar26 - 1;
            uVar10 = *puVar20;
            puVar20 = (uint *)((int)puVar20 + 1);
            uVar23 = uVar23 + ((uint)(byte)uVar10 << ((byte)uVar14 & 0x1f));
            bVar6 = uVar14 < 0x18;
            uVar14 = uVar14 + 8;
          } while (bVar6);
        }
        uVar14 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18
        ;
        *(uint *)(iVar13 + 0x1c) = uVar14;
        local_70[0xc] = uVar14;
        *(undefined4 *)(iVar13 + 4) = 0x3f3e;
        uVar23 = 0;
        uVar14 = 0;
        goto LAB_0047b9ca;
      case 0x3f3e:
LAB_0047b9ca:
        if (*(int *)(iVar13 + 0x10) != 0) {
          uVar10 = thunk_FUN_0047df45(0,(byte *)0x0,0);
          *(uint *)(local_68 + 0x1c) = uVar10;
          local_70[0xc] = uVar10;
          *(undefined4 *)(local_68 + 4) = 0x3f3f;
          iVar13 = local_68;
LAB_0047b9fb:
          bVar12 = (byte)uVar14;
          if (*(int *)(iVar13 + 8) != 0) {
            *(undefined4 *)(iVar13 + 4) = 0x3f4e;
            uVar14 = uVar14 & 0xfffffff8;
            puVar17 = puVar20;
            iVar11 = iVar13;
            uVar8 = uVar26;
            local_74 = uVar23 >> (bVar12 & 7);
            break;
          }
          if (2 < uVar14) {
LAB_0047ba42:
            *(uint *)(iVar13 + 8) = uVar23 & 1;
            uVar7 = 0x3f41;
            switch(uVar23 >> 1 & 3) {
            case 1:
              FUN_0047d420(iVar13);
              uVar7 = 0x3f47;
              iVar13 = local_68;
              break;
            case 2:
              uVar7 = 0x3f44;
              break;
            case 3:
              local_70[6] = (int)"invalid block type";
              uVar7 = 0x3f51;
            }
            *(undefined4 *)(iVar13 + 4) = uVar7;
            uVar14 = uVar14 - 3;
            puVar17 = puVar20;
            iVar11 = iVar13;
            uVar8 = uVar26;
            local_74 = uVar23 >> 3;
            break;
          }
          if (uVar26 != 0) {
            uVar14 = uVar14 | 8;
            uVar10 = *puVar20;
            uVar26 = uVar26 - 1;
            puVar20 = (uint *)((int)puVar20 + 1);
            uVar23 = uVar23 + ((uint)(byte)uVar10 << (bVar12 & 0x1f));
            iVar13 = local_68;
            goto LAB_0047ba42;
          }
          goto LAB_0047ce4e;
        }
        local_70[3] = (int)local_54;
        local_70[4] = local_5c;
        *local_70 = (int)puVar20;
        local_70[1] = uVar26;
        *(uint *)(iVar13 + 0x3c) = uVar23;
        *(uint *)(iVar13 + 0x40) = uVar14;
        iVar22 = 2;
        goto LAB_0047b7e7;
      case 0x3f3f:
      case 0x3f40:
        goto LAB_0047b9fb;
      case 0x3f41:
        uVar23 = local_74 >> ((byte)uVar14 & 7);
        bVar6 = uVar14 < 0x20;
        uVar10 = uVar14 & 0xfffffff8;
        uVar14 = uVar14 & 0xfffffff8;
        if (bVar6) {
          do {
            if (uVar26 == 0) {
              uVar26 = 0;
              goto LAB_0047cf63;
            }
            uVar26 = uVar26 - 1;
            uVar14 = *puVar20;
            puVar20 = (uint *)((int)puVar20 + 1);
            uVar23 = uVar23 + ((uint)(byte)uVar14 << ((byte)uVar10 & 0x1f));
            uVar14 = uVar10 + 8;
            bVar6 = uVar10 < 0x18;
            uVar10 = uVar14;
            puVar17 = puVar20;
            uVar8 = uVar26;
          } while (bVar6);
        }
        if ((uVar23 & 0xffff) == ~uVar23 >> 0x10) {
          *(uint *)(iVar13 + 0x44) = uVar23 & 0xffff;
          local_74 = 0;
          local_6c = 0;
          uVar26 = uVar8;
          goto LAB_0047bd05;
        }
        local_70[6] = (int)"invalid stored block lengths";
        local_74 = uVar23;
LAB_0047cd49:
        *(undefined4 *)(iVar13 + 4) = 0x3f51;
        iVar11 = iVar13;
        break;
      case 0x3f42:
        local_6c = uVar14;
LAB_0047bd05:
        *(undefined4 *)(iVar13 + 4) = 0x3f43;
        uVar23 = local_74;
        puVar20 = puVar17;
        goto LAB_0047bd0e;
      case 0x3f43:
        local_6c = uVar14;
LAB_0047bd0e:
        uVar8 = *(uint *)(iVar13 + 0x44);
        local_74 = uVar23;
        if (uVar8 == 0) {
          *(undefined4 *)(iVar13 + 4) = 0x3f3f;
          uVar14 = local_6c;
          puVar17 = puVar20;
          iVar11 = iVar13;
          uVar8 = uVar26;
        }
        else {
          if (uVar26 <= uVar8) {
            uVar8 = uVar26;
          }
          if (local_5c <= uVar8) {
            uVar8 = local_5c;
          }
          uVar10 = local_6c;
          if (uVar8 == 0) goto LAB_0047cf63;
          local_60 = uVar26;
          FUN_004878c0(local_54,puVar20,uVar8);
          local_5c = local_5c - uVar8;
          local_54 = (uint *)((int)puVar5 + uVar8);
          *(int *)(local_68 + 0x44) = *(int *)(local_68 + 0x44) - uVar8;
          uVar14 = local_6c;
          puVar17 = (uint *)((int)puVar20 + uVar8);
          iVar11 = local_68;
          uVar8 = local_60 - uVar8;
        }
        break;
      case 0x3f44:
        if (uVar14 < 0xe) {
          do {
            if (uVar26 == 0) goto LAB_0047ce4e;
            uVar26 = uVar26 - 1;
            uVar10 = *puVar20;
            puVar20 = (uint *)((int)puVar20 + 1);
            uVar23 = uVar23 + ((uint)(byte)uVar10 << ((byte)uVar14 & 0x1f));
            bVar6 = uVar14 < 6;
            uVar14 = uVar14 + 8;
          } while (bVar6);
        }
        uVar10 = uVar23 & 0x1f;
        *(uint *)(iVar13 + 100) = uVar10 + 0x101;
        uVar8 = uVar23 >> 5 & 0x1f;
        *(uint *)(iVar13 + 0x68) = uVar8 + 1;
        local_6c = (uVar23 >> 10 & 0xf) + 4;
        *(uint *)(iVar13 + 0x60) = local_6c;
        uVar23 = uVar23 >> 0xe;
        uVar14 = uVar14 - 0xe;
        local_64 = puVar20;
        local_60 = uVar26;
        if (uVar8 < 0x1e && uVar10 < 0x1e) {
          *(undefined4 *)(iVar13 + 0x6c) = 0;
          *(undefined4 *)(iVar13 + 4) = 0x3f45;
          uVar8 = 0;
LAB_0047bdba:
          do {
            uVar25 = uVar14;
            if (uVar14 < 3) {
              if (uVar26 == 0) {
                uVar26 = 0;
                puVar20 = local_64;
                uVar10 = uVar14;
                goto LAB_0047cf63;
              }
              uVar25 = uVar14 | 8;
              uVar10 = *local_64;
              uVar26 = uVar26 - 1;
              local_64 = (uint *)((int)local_64 + 1);
              uVar23 = uVar23 + ((uint)(byte)uVar10 << ((byte)uVar14 & 0x1f));
            }
            uVar10 = uVar8 + 1;
            *(uint *)(local_68 + 0x6c) = uVar10;
            *(ushort *)(local_68 + 0x74 + (uint)*(ushort *)(&DAT_004f6cd8 + uVar8 * 2) * 2) =
                 (ushort)uVar23 & 7;
            uVar23 = uVar23 >> 3;
            uVar14 = uVar25 - 3;
            uVar8 = uVar10;
            iVar13 = local_68;
          } while (uVar10 < local_6c);
          goto LAB_0047be13;
        }
        local_70[6] = (int)"too many length or distance symbols";
        iVar11 = iVar13;
        goto LAB_0047be8c;
      case 0x3f45:
        local_6c = *(uint *)(iVar13 + 0x60);
        uVar10 = *(uint *)(iVar13 + 0x6c);
        uVar8 = uVar10;
        local_64 = puVar17;
        if (uVar10 < local_6c) goto LAB_0047bdba;
LAB_0047be13:
        if (uVar10 < 0x13) {
          do {
            iVar22 = uVar10 * 2;
            uVar10 = uVar10 + 1;
            *(undefined2 *)(local_44 + (uint)*(ushort *)(&DAT_004f6cd8 + iVar22) * 2) = 0;
          } while (uVar10 != 0x13);
          *(undefined4 *)(local_68 + 0x6c) = 0x13;
        }
        *(int *)(local_68 + 0x70) = local_2c;
        *(int *)(local_68 + 0x50) = local_2c;
        *(undefined4 *)(local_68 + 0x58) = 7;
        local_50 = 0;
        local_60 = uVar26;
        local_48 = FUN_0047d43d(0,local_44,0x13,local_30,local_34,local_40);
        if (local_48 == 0) {
          *(undefined4 *)(iVar11 + 0x6c) = 0;
          *(undefined4 *)(iVar11 + 4) = 0x3f46;
          local_48 = 0;
          puVar17 = local_64;
          uVar26 = local_60;
          goto LAB_0047bebf;
        }
        local_70[6] = (int)"invalid code lengths set";
LAB_0047be8c:
        *(undefined4 *)(iVar11 + 4) = 0x3f51;
        puVar17 = local_64;
        uVar8 = local_60;
        local_74 = uVar23;
        break;
      case 0x3f46:
        local_50 = *(uint *)(iVar13 + 0x6c);
        iVar11 = iVar13;
LAB_0047bebf:
        piVar4 = local_30;
        iVar22 = local_68;
        local_20 = *(int *)(iVar11 + 100);
        local_38 = *(int *)(iVar11 + 0x68) + local_20;
        local_6c = uVar14;
        if (local_50 < local_38) {
          local_58 = *(uint *)(iVar11 + 0x50);
          local_3c = ~(-1 << (*(byte *)(iVar11 + 0x58) & 0x1f));
          uVar14 = local_50;
          local_64 = puVar17;
          local_60 = uVar26;
          do {
            local_50 = uVar14;
            uVar14 = uVar23 & local_3c;
            uVar8 = (uint)*(byte *)(local_58 + 1 + uVar14 * 4);
            uVar10 = local_6c;
            uVar26 = local_60;
            puVar20 = local_64;
            puVar17 = local_64;
            if (local_6c < uVar8) {
              do {
                if (uVar26 == 0) {
                  uVar10 = local_6c + local_60 * 8;
                  puVar17 = (uint *)((int)local_64 + local_60);
                  goto LAB_0047cf00;
                }
                uVar26 = uVar26 - 1;
                puVar17 = (uint *)((int)puVar20 + 1);
                uVar23 = uVar23 + ((uint)(byte)*puVar20 << ((byte)uVar10 & 0x1f));
                uVar10 = uVar10 + 8;
                uVar14 = uVar23 & local_3c;
                uVar8 = (uint)*(byte *)(local_58 + 1 + uVar14 * 4);
                puVar20 = puVar17;
              } while (uVar10 < uVar8);
            }
            uVar2 = *(ushort *)(local_58 + 2 + uVar14 * 4);
            bVar12 = (byte)uVar8;
            if (uVar2 < 0x10) {
              local_74 = uVar23 >> (bVar12 & 0x1f);
              local_6c = uVar10 - uVar8;
              uVar14 = local_50 + 1;
              *(uint *)(local_68 + 0x6c) = uVar14;
              *(ushort *)(local_68 + 0x74 + local_50 * 2) = uVar2;
            }
            else {
              if (uVar2 == 0x10) {
                for (; uVar10 < uVar8 + 2; uVar10 = uVar10 + 8) {
                  if (uVar26 == 0) goto LAB_0047cf00;
                  uVar26 = uVar26 - 1;
                  uVar14 = *puVar17;
                  puVar17 = (uint *)((int)puVar17 + 1);
                  uVar23 = uVar23 + ((uint)(byte)uVar14 << ((byte)uVar10 & 0x1f));
                }
                local_74 = uVar23 >> (bVar12 & 0x1f);
                if (local_50 == 0) {
                  local_70[6] = (int)"invalid bit length repeat";
                  *(undefined4 *)(local_68 + 4) = 0x3f51;
                  uVar14 = uVar10 - uVar8;
                  iVar11 = iVar22;
                  uVar8 = uVar26;
                  goto LAB_0047cd50;
                }
                uVar16 = *(undefined2 *)(local_68 + 0x72 + local_50 * 2);
                iVar13 = (local_74 & 3) + 3;
                local_74 = local_74 >> 2;
                local_6c = (uVar10 - uVar8) - 2;
              }
              else {
                if (uVar2 == 0x11) {
                  for (; uVar10 < uVar8 + 3; uVar10 = uVar10 + 8) {
                    if (uVar26 == 0) goto LAB_0047cf00;
                    uVar26 = uVar26 - 1;
                    uVar14 = *puVar17;
                    puVar17 = (uint *)((int)puVar17 + 1);
                    uVar23 = uVar23 + ((uint)(byte)uVar14 << ((byte)uVar10 & 0x1f));
                  }
                  uVar23 = uVar23 >> (bVar12 & 0x1f);
                  iVar13 = (uVar23 & 7) + 3;
                  local_74 = uVar23 >> 3;
                  local_6c = (uVar10 - uVar8) - 3;
                }
                else {
                  for (; uVar10 < uVar8 + 7; uVar10 = uVar10 + 8) {
                    if (uVar26 == 0) goto LAB_0047cf00;
                    uVar26 = uVar26 - 1;
                    uVar14 = *puVar17;
                    puVar17 = (uint *)((int)puVar17 + 1);
                    uVar23 = uVar23 + ((uint)(byte)uVar14 << ((byte)uVar10 & 0x1f));
                  }
                  uVar23 = uVar23 >> (bVar12 & 0x1f);
                  iVar13 = (uVar23 & 0x7f) + 0xb;
                  local_74 = uVar23 >> 7;
                  local_6c = (uVar10 - uVar8) - 7;
                }
                uVar16 = 0;
              }
              uVar14 = local_50;
              if (local_38 < iVar13 + local_50) {
                local_70[6] = (int)"invalid bit length repeat";
                *(undefined4 *)(local_68 + 4) = 0x3f51;
                uVar14 = local_6c;
                iVar11 = iVar22;
                uVar8 = uVar26;
                goto LAB_0047cd50;
              }
              do {
                *(undefined2 *)(local_44 + uVar14 * 2) = uVar16;
                uVar14 = uVar14 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
              *(uint *)(local_68 + 0x6c) = uVar14;
            }
            uVar23 = local_74;
            local_64 = puVar17;
            local_60 = uVar26;
          } while (uVar14 < local_38);
        }
        local_74 = uVar23;
        if (*(short *)(local_68 + 0x274) == 0) {
          local_70[6] = (int)"invalid code -- missing end-of-block";
        }
        else {
          *(int *)(local_68 + 0x70) = local_2c;
          *(int *)(local_68 + 0x50) = local_2c;
          *(undefined4 *)(local_68 + 0x58) = 9;
          local_48 = FUN_0047d43d(1,local_44,local_20,local_30,local_34,local_40);
          if (local_48 == 0) {
            *(undefined4 *)(iVar22 + 0x54) = *(undefined4 *)(iVar22 + 0x70);
            *(undefined4 *)(iVar22 + 0x5c) = 6;
            local_48 = FUN_0047d43d(2,local_44 + *(int *)(iVar22 + 100) * 2,*(int *)(iVar22 + 0x68),
                                    piVar4,local_1c,local_40);
            if (local_48 == 0) {
              local_48 = 0;
              uVar14 = local_6c;
              goto switchD_0047b8af_caseD_3f47;
            }
            local_70[6] = (int)"invalid distances set";
          }
          else {
            local_70[6] = (int)"invalid literal/lengths set";
          }
        }
        *(undefined4 *)(iVar22 + 4) = 0x3f51;
        uVar14 = local_6c;
        iVar11 = iVar22;
        uVar8 = uVar26;
        break;
      case 0x3f47:
switchD_0047b8af_caseD_3f47:
        *(undefined4 *)(local_68 + 4) = 0x3f48;
      case 0x3f48:
        iVar11 = local_68;
        piVar4 = local_70;
        if ((5 < uVar26) && (0x101 < local_5c)) {
          local_70[3] = (int)local_54;
          local_70[4] = local_5c;
          *local_70 = (int)puVar17;
          local_70[1] = uVar26;
          *(uint *)(local_68 + 0x3c) = local_74;
          *(uint *)(local_68 + 0x40) = uVar14;
          FUN_0047d8bc(local_70,local_4c);
          local_54 = (uint *)piVar4[3];
          local_5c = piVar4[4];
          puVar17 = (uint *)*piVar4;
          uVar8 = piVar4[1];
          uVar14 = *(uint *)(iVar11 + 0x40);
          local_74 = *(uint *)(iVar11 + 0x3c);
          if (*(int *)(iVar11 + 4) == 0x3f3f) {
            *(undefined4 *)(iVar11 + 0x1bc8) = 0xffffffff;
          }
          break;
        }
        *(undefined4 *)(local_68 + 0x1bc8) = 0;
        uVar10 = *(uint *)(local_68 + 0x50);
        uVar24 = ~(-1 << (*(byte *)(local_68 + 0x58) & 0x1f));
        uVar9 = local_74 & uVar24;
        bVar12 = *(byte *)(uVar10 + 1 + uVar9 * 4);
        uVar23 = uVar14;
        puVar20 = puVar17;
        uVar8 = uVar26;
        local_64 = puVar17;
        uVar25 = (uint)bVar12;
        if (uVar14 < bVar12) {
          do {
            local_6c = uVar14;
            local_64 = puVar17;
            local_60 = uVar26;
            local_58 = uVar10;
            if (uVar8 == 0) goto LAB_0047ce5b;
            uVar8 = uVar8 - 1;
            local_64 = (uint *)((int)puVar20 + 1);
            local_74 = local_74 + ((uint)(byte)*puVar20 << ((byte)uVar23 & 0x1f));
            uVar23 = uVar23 + 8;
            uVar9 = local_74 & uVar24;
            bVar12 = *(byte *)(uVar10 + 1 + uVar9 * 4);
            puVar20 = local_64;
            uVar25 = (uint)bVar12;
          } while (uVar23 < bVar12);
        }
        local_50 = uVar25;
        pcVar21 = (char *)(uVar10 + uVar9 * 4);
        uVar26 = (uint)bVar12;
        uVar2 = *(ushort *)(pcVar21 + 2);
        local_6c = CONCAT22(local_6c._2_2_,uVar2);
        cVar1 = *pcVar21;
        puVar17 = local_64;
        if ((byte)(cVar1 - 1U) < 0xf) {
          bVar12 = (byte)local_50;
          uVar18 = ~(-1 << (cVar1 + bVar12 & 0x1f));
          uVar24 = (local_74 & uVar18) >> (bVar12 & 0x1f);
          uVar14 = uVar10 + (uint)uVar2 * 4;
          uVar26 = (uint)*(byte *)(uVar14 + 1 + uVar24 * 4);
          uVar25 = uVar23;
          uVar9 = uVar8;
          puVar20 = local_64;
          local_58 = uVar10;
          if (uVar23 < local_50 + uVar26) {
            do {
              local_6c = uVar23;
              local_60 = uVar8;
              local_58 = uVar14;
              if (uVar9 == 0) goto LAB_0047ce5b;
              uVar9 = uVar9 - 1;
              puVar17 = (uint *)((int)puVar20 + 1);
              local_74 = local_74 + ((uint)(byte)*puVar20 << ((byte)uVar25 & 0x1f));
              uVar24 = (local_74 & uVar18) >> (bVar12 & 0x1f);
              uVar25 = uVar25 + 8;
              uVar26 = (uint)*(byte *)(uVar14 + 1 + uVar24 * 4);
              puVar20 = puVar17;
            } while (uVar25 < local_50 + uVar26);
          }
          puVar15 = (undefined1 *)(uVar14 + uVar24 * 4);
          local_6c = CONCAT22(local_6c._2_2_,*(undefined2 *)(puVar15 + 2));
          local_60 = CONCAT31(local_60._1_3_,*puVar15);
          local_74 = local_74 >> (bVar12 & 0x1f);
          uVar23 = uVar25 - local_50;
          uVar10 = local_50;
          uVar8 = uVar9;
        }
        else {
          uVar10 = 0;
          local_60 = CONCAT31(local_60._1_3_,cVar1);
        }
        uVar14 = uVar23 - uVar26;
        *(uint *)(local_68 + 0x1bc8) = uVar10 + uVar26;
        *(uint *)(local_68 + 0x44) = local_6c & 0xffff;
        uVar23 = local_74 >> ((byte)uVar26 & 0x1f);
        if ((char)local_60 == '\0') {
          *(undefined4 *)(local_68 + 4) = 0x3f4d;
          local_74 = uVar23;
          break;
        }
        iVar13 = local_68;
        if ((local_60 & 0x20) != 0) {
          *(undefined4 *)(local_68 + 0x1bc8) = 0xffffffff;
          local_74 = uVar23;
          goto LAB_0047c9b5;
        }
        if ((local_60 & 0x40) != 0) {
          local_70[6] = (int)"invalid literal/length code";
          local_74 = uVar23;
          goto LAB_0047cd49;
        }
        local_60 = local_60 & 0xf;
        *(uint *)(local_68 + 0x4c) = local_60;
        *(undefined4 *)(local_68 + 4) = 0x3f49;
LAB_0047bc9e:
        uVar26 = uVar14;
        puVar20 = puVar17;
        uVar10 = uVar8;
        if (local_60 == 0) {
          iVar22 = *(int *)(iVar13 + 0x44);
        }
        else {
          for (; iVar13 = local_68, uVar26 < local_60; uVar26 = uVar26 + 8) {
            local_6c = uVar14;
            if (uVar10 == 0) {
              uVar26 = 0;
              puVar20 = (uint *)((int)puVar17 + uVar8);
              uVar10 = uVar14 + uVar8 * 8;
              local_64 = puVar17;
              local_60 = uVar8;
              goto LAB_0047cf63;
            }
            uVar23 = uVar23 + ((uint)(byte)*puVar20 << ((byte)uVar26 & 0x1f));
            puVar20 = (uint *)((int)puVar20 + 1);
            uVar10 = uVar10 - 1;
          }
          iVar22 = (~(-1 << ((byte)local_60 & 0x1f)) & uVar23) + *(int *)(local_68 + 0x44);
          uVar23 = uVar23 >> ((byte)local_60 & 0x1f);
          *(int *)(local_68 + 0x44) = iVar22;
          *(int *)(local_68 + 0x1bc8) = *(int *)(local_68 + 0x1bc8) + local_60;
          uVar14 = uVar26 - local_60;
          uVar8 = uVar10;
          puVar17 = puVar20;
        }
        *(int *)(iVar13 + 0x1bcc) = iVar22;
        *(undefined4 *)(iVar13 + 4) = 0x3f4a;
        local_64 = puVar17;
LAB_0047c171:
        uVar26 = *(uint *)(iVar13 + 0x54);
        uVar18 = ~(-1 << (*(byte *)(iVar13 + 0x5c) & 0x1f));
        uVar10 = uVar23 & uVar18;
        uVar9 = (uint)*(byte *)(uVar26 + 1 + uVar10 * 4);
        uVar25 = uVar14;
        puVar17 = local_64;
        uVar24 = uVar8;
        local_74 = uVar23;
        puVar20 = local_64;
        if (uVar14 < uVar9) {
          do {
            local_6c = uVar14;
            local_60 = uVar8;
            local_58 = uVar26;
            if (uVar24 == 0) goto LAB_0047ce5b;
            uVar24 = uVar24 - 1;
            puVar20 = (uint *)((int)puVar17 + 1);
            local_74 = local_74 + ((uint)(byte)*puVar17 << ((byte)uVar25 & 0x1f));
            uVar25 = uVar25 + 8;
            uVar10 = local_74 & uVar18;
            uVar9 = (uint)*(byte *)(uVar26 + 1 + uVar10 * 4);
            puVar17 = puVar20;
          } while (uVar25 < uVar9);
        }
        local_64 = puVar20;
        pbVar19 = (byte *)(uVar26 + uVar10 * 4);
        uVar2 = *(ushort *)(pbVar19 + 2);
        local_6c = CONCAT22(local_6c._2_2_,uVar2);
        bVar12 = *pbVar19;
        local_58 = (uint)bVar12;
        puVar17 = local_64;
        local_60 = uVar24;
        if (local_58 < 0x10) {
          bVar3 = (byte)uVar9;
          local_50 = ~(-1 << (bVar12 + bVar3 & 0x1f));
          uVar8 = (local_74 & local_50) >> (bVar3 & 0x1f);
          local_58 = uVar26 + (uint)uVar2 * 4;
          uVar10 = (uint)*(byte *)(local_58 + 1 + uVar8 * 4);
          uVar14 = uVar25;
          puVar20 = local_64;
          uVar26 = uVar24;
          local_6c = (uint)uVar2;
          if (uVar25 < uVar9 + uVar10) {
            do {
              local_6c = uVar25;
              local_60 = uVar24;
              if (uVar26 == 0) goto LAB_0047ce5b;
              local_60 = uVar26 - 1;
              puVar17 = (uint *)((int)puVar20 + 1);
              local_74 = local_74 + ((uint)(byte)*puVar20 << ((byte)uVar14 & 0x1f));
              uVar8 = (local_74 & local_50) >> (bVar3 & 0x1f);
              uVar14 = uVar14 + 8;
              uVar10 = (uint)*(byte *)(local_58 + 1 + uVar8 * 4);
              puVar20 = puVar17;
              uVar26 = local_60;
            } while (uVar14 < uVar9 + uVar10);
          }
          pbVar19 = (byte *)(local_58 + uVar8 * 4);
          local_6c = CONCAT22(local_6c._2_2_,*(undefined2 *)(pbVar19 + 2));
          local_58 = (uint)*pbVar19;
          uVar25 = uVar14 - uVar9;
          iVar22 = uVar9 + *(int *)(local_68 + 0x1bc8);
          uVar9 = uVar10;
          uVar23 = local_74 >> (bVar3 & 0x1f);
        }
        else {
          iVar22 = *(int *)(local_68 + 0x1bc8);
          uVar23 = local_74;
        }
        uVar23 = uVar23 >> ((byte)uVar9 & 0x1f);
        *(uint *)(local_68 + 0x1bc8) = iVar22 + uVar9;
        uVar14 = uVar25 - uVar9;
        if ((local_58 & 0x40) != 0) {
          local_70[6] = (int)"invalid distance code";
          *(undefined4 *)(local_68 + 4) = 0x3f51;
          iVar11 = local_68;
          uVar8 = local_60;
          local_74 = uVar23;
          break;
        }
        *(uint *)(local_68 + 0x48) = local_6c & 0xffff;
        uVar10 = local_58 & 0xf;
        *(uint *)(local_68 + 0x4c) = uVar10;
        *(undefined4 *)(local_68 + 4) = 0x3f4b;
        iVar13 = local_68;
        uVar8 = local_60;
LAB_0047c307:
        puVar20 = puVar17;
        uVar26 = uVar8;
        uVar25 = uVar14;
        if (uVar10 != 0) {
          for (; iVar13 = local_68, local_60 = uVar8, uVar25 < uVar10; uVar25 = uVar25 + 8) {
            local_6c = uVar14;
            local_64 = puVar17;
            if (uVar26 == 0) {
              uVar26 = 0;
              puVar20 = (uint *)((int)puVar17 + uVar8);
              uVar10 = uVar14 + uVar8 * 8;
              goto LAB_0047cf63;
            }
            uVar23 = uVar23 + ((uint)(byte)*puVar20 << ((byte)uVar25 & 0x1f));
            puVar20 = (uint *)((int)puVar20 + 1);
            uVar26 = uVar26 - 1;
          }
          *(int *)(local_68 + 0x48) =
               *(int *)(local_68 + 0x48) + (~(-1 << ((byte)uVar10 & 0x1f)) & uVar23);
          uVar23 = uVar23 >> ((byte)uVar10 & 0x1f);
          *(int *)(local_68 + 0x1bc8) = *(int *)(local_68 + 0x1bc8) + uVar10;
          uVar14 = uVar25 - uVar10;
        }
        *(undefined4 *)(iVar13 + 4) = 0x3f4c;
LAB_0047c39f:
        if (local_5c == 0) {
          local_5c = 0;
          uVar10 = uVar14;
          goto LAB_0047cf63;
        }
        uVar10 = *(uint *)(iVar13 + 0x48);
        uVar25 = uVar10 - (local_4c - local_5c);
        uVar8 = uVar26;
        puVar17 = puVar20;
        local_74 = uVar23;
        if (uVar10 < local_4c - local_5c || uVar25 == 0) {
          iVar22 = (int)local_54 - uVar10;
          uVar25 = *(uint *)(iVar13 + 0x44);
          uVar10 = uVar25;
        }
        else {
          if ((*(uint *)(iVar13 + 0x30) < uVar25) && (*(int *)(iVar13 + 0x1bc4) != 0)) {
            local_70[6] = (int)"invalid distance too far back";
            goto LAB_0047cd49;
          }
          uVar10 = *(uint *)(iVar13 + 0x34);
          uVar23 = uVar25 - uVar10;
          if (uVar25 < uVar10 || uVar23 == 0) {
            iVar22 = (uVar10 - uVar25) + *(int *)(iVar13 + 0x38);
          }
          else {
            iVar22 = (*(int *)(iVar13 + 0x2c) - uVar23) + *(int *)(iVar13 + 0x38);
            uVar25 = uVar23;
          }
          uVar10 = *(uint *)(iVar13 + 0x44);
          if (uVar10 <= uVar25) {
            uVar25 = uVar10;
          }
        }
        if (local_5c <= uVar25) {
          uVar25 = local_5c;
        }
        *(uint *)(iVar13 + 0x44) = uVar10 - uVar25;
        uVar10 = 0;
        do {
          *(undefined1 *)((int)local_54 + uVar10) = *(undefined1 *)(iVar22 + uVar10);
          uVar10 = uVar10 + 1;
        } while (uVar25 != uVar10);
        local_5c = local_5c - uVar25;
        local_54 = (uint *)((int)local_54 + uVar10);
        iVar11 = iVar13;
        local_6c = uVar14;
        local_60 = uVar26;
        if (*(int *)(iVar13 + 0x44) == 0) {
          *(undefined4 *)(iVar13 + 4) = 0x3f48;
        }
        break;
      case 0x3f49:
        local_60 = *(uint *)(iVar13 + 0x4c);
        goto LAB_0047bc9e;
      case 0x3f4a:
        local_64 = puVar17;
        goto LAB_0047c171;
      case 0x3f4b:
        uVar10 = *(uint *)(iVar13 + 0x4c);
        goto LAB_0047c307;
      case 0x3f4c:
        goto LAB_0047c39f;
      case 0x3f4d:
        if (local_5c == 0) {
          local_5c = 0;
          goto LAB_0047cf63;
        }
        *(undefined1 *)local_54 = *(undefined1 *)(iVar13 + 0x44);
        local_54 = (uint *)((int)local_54 + 1);
        local_5c = local_5c - 1;
        *(undefined4 *)(iVar13 + 4) = 0x3f48;
        iVar11 = iVar13;
        break;
      case 0x3f4e:
        if (*(int *)(iVar13 + 0xc) == 0) {
          uVar8 = 0;
        }
        else {
          if (uVar14 < 0x20) {
            do {
              if (uVar26 == 0) {
                uVar26 = 0;
                puVar20 = puVar17;
                uVar10 = uVar14;
                iVar13 = local_68;
                goto LAB_0047cf63;
              }
              uVar26 = uVar26 - 1;
              uVar10 = *puVar17;
              puVar17 = (uint *)((int)puVar17 + 1);
              uVar23 = uVar23 + ((uint)(byte)uVar10 << ((byte)uVar14 & 0x1f));
              uVar10 = uVar14 + 8;
              bVar6 = uVar14 < 0x18;
              uVar14 = uVar10;
            } while (bVar6);
          }
          uVar25 = local_4c - local_5c;
          local_70[5] = local_70[5] + uVar25;
          *(int *)(local_68 + 0x20) = *(int *)(local_68 + 0x20) + uVar25;
          uVar8 = *(uint *)(local_68 + 0xc);
          uVar14 = uVar8 & 4;
          local_74 = uVar23;
          local_60 = uVar26;
          if ((uVar14 != 0) && (local_4c != local_5c)) {
            if (*(int *)(local_68 + 0x14) == 0) {
              uVar14 = thunk_FUN_0047df45(*(uint *)(local_68 + 0x1c),
                                          (byte *)((int)local_54 - uVar25),uVar25);
            }
            else {
              uVar14 = thunk_FUN_0047de63(*(uint *)(local_68 + 0x1c),
                                          (byte *)((int)local_54 - uVar25),uVar25);
            }
            *(uint *)(local_68 + 0x1c) = uVar14;
            local_70[0xc] = uVar14;
            uVar8 = *(uint *)(local_68 + 0xc);
            uVar14 = uVar8 & 4;
          }
          uVar26 = local_60;
          iVar13 = local_68;
          if (uVar14 == 0) {
            local_4c = local_5c;
            uVar14 = 0;
            uVar23 = 0;
          }
          else {
            uVar14 = local_74 >> 0x18 | (local_74 & 0xff0000) >> 8 | (local_74 & 0xff00) << 8 |
                     local_74 << 0x18;
            if (*(int *)(local_68 + 0x14) != 0) {
              uVar14 = local_74;
            }
            if (uVar14 != *(uint *)(local_68 + 0x1c)) {
              local_70[6] = (int)"incorrect data check";
              *(undefined4 *)(local_68 + 4) = 0x3f51;
              local_4c = local_5c;
              uVar14 = uVar10;
              iVar11 = local_68;
              uVar8 = local_60;
              break;
            }
            local_4c = local_5c;
            uVar14 = 0;
            uVar23 = 0;
          }
        }
        *(undefined4 *)(iVar13 + 4) = 0x3f4f;
        uVar10 = uVar14;
        puVar20 = puVar17;
        goto LAB_0047ca43;
      case 0x3f4f:
        uVar8 = *(uint *)(iVar13 + 0xc);
LAB_0047ca43:
        if ((uVar8 != 0) && (*(int *)(iVar13 + 0x14) != 0)) {
          uVar14 = uVar10;
          if (uVar10 < 0x20) {
            do {
              if (uVar26 == 0) goto LAB_0047ce4e;
              uVar26 = uVar26 - 1;
              uVar10 = *puVar20;
              puVar20 = (uint *)((int)puVar20 + 1);
              uVar23 = uVar23 + ((uint)(byte)uVar10 << ((byte)uVar14 & 0x1f));
              uVar10 = uVar14 + 8;
              bVar6 = uVar14 < 0x18;
              uVar14 = uVar10;
              iVar13 = local_68;
            } while (bVar6);
          }
          if (((uVar8 & 4) == 0) || (uVar23 == *(uint *)(iVar13 + 0x20))) {
            uVar23 = 0;
            uVar10 = 0;
            goto LAB_0047cf44;
          }
          local_70[6] = (int)"incorrect length check";
          local_74 = uVar23;
          goto LAB_0047caa5;
        }
LAB_0047cf44:
        *(undefined4 *)(iVar13 + 4) = 0x3f50;
        local_48 = 1;
        goto LAB_0047cf63;
      case 0x3f50:
        goto switchD_0047b8af_caseD_3f50;
      case 0x3f51:
        local_48 = -3;
        goto LAB_0047cf63;
      case 0x3f52:
        goto switchD_0047b8af_caseD_3f52;
      default:
        iVar22 = -2;
        goto LAB_0047b7e7;
      }
LAB_0047cd50:
      iVar22 = *(int *)(iVar11 + 4);
      iVar13 = iVar11;
      uVar26 = uVar8;
    } while( true );
  }
LAB_0047b7e7:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_74)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_74);
  }
  return iVar22;
switchD_0047b8af_caseD_3f50:
  local_48 = 1;
LAB_0047cf63:
  piVar4 = local_70;
  local_70[3] = (int)local_54;
  local_70[4] = local_5c;
  *local_70 = (int)puVar20;
  local_70[1] = uVar26;
  *(uint *)(iVar13 + 0x3c) = uVar23;
  *(uint *)(iVar13 + 0x40) = uVar10;
  uVar14 = local_70[4];
  if ((*(int *)(iVar13 + 0x2c) != 0) ||
     (((uVar26 = local_4c, local_4c != uVar14 && (uVar26 = uVar14, *(int *)(iVar13 + 4) < 0x3f51))
      && (local_28 != 4 || *(int *)(iVar13 + 4) < 0x3f4e)))) {
    iVar22 = FUN_0047dd8c((int)local_70,local_70[3],local_4c - uVar14);
    if (iVar22 != 0) {
      *(undefined4 *)(iVar13 + 4) = 0x3f52;
switchD_0047b8af_caseD_3f52:
      iVar22 = -4;
      goto LAB_0047b7e7;
    }
    uVar26 = piVar4[4];
  }
  uVar14 = local_70[1];
  local_70[2] = local_70[2] + (local_24 - uVar14);
  uVar10 = local_4c - uVar26;
  local_70[5] = local_70[5] + uVar10;
  *(int *)(iVar13 + 0x20) = *(int *)(iVar13 + 0x20) + uVar10;
  if (((*(byte *)(iVar13 + 0xc) & 4) != 0) && (local_4c != uVar26)) {
    if (*(int *)(iVar13 + 0x14) == 0) {
      uVar10 = thunk_FUN_0047df45(*(uint *)(iVar13 + 0x1c),(byte *)(local_70[3] - uVar10),uVar10);
    }
    else {
      uVar10 = thunk_FUN_0047de63(*(uint *)(iVar13 + 0x1c),(byte *)(local_70[3] - uVar10),uVar10);
    }
    *(uint *)(iVar13 + 0x1c) = uVar10;
    local_70[0xc] = uVar10;
  }
  iVar22 = *(int *)(iVar13 + 4);
  iVar11 = -5;
  if (local_48 != 0) {
    iVar11 = local_48;
  }
  local_70[0xb] =
       (uint)(iVar22 == 0x3f42 || iVar22 == 0x3f47) * 0x100 + (uint)(iVar22 == 0x3f3f) * 0x80 +
       (uint)(*(int *)(iVar13 + 8) != 0) * 0x40 + *(int *)(iVar13 + 0x40);
  iVar22 = local_48;
  if (local_4c == uVar26 && local_24 == uVar14) {
    iVar22 = iVar11;
  }
  if (local_28 == 4) {
    iVar22 = iVar11;
  }
  goto LAB_0047b7e7;
LAB_0047cf00:
  uVar26 = 0;
  puVar20 = puVar17;
  iVar13 = local_68;
  goto LAB_0047cf63;
LAB_0047ce5b:
  uVar26 = 0;
  puVar20 = (uint *)((int)local_64 + local_60);
  uVar23 = local_74;
  uVar10 = local_6c + local_60 * 8;
  iVar13 = local_68;
  goto LAB_0047cf63;
}

