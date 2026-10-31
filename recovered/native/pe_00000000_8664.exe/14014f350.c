/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014f350 */

ulonglong FUN_14014f350(undefined8 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                       undefined4 *param_5)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined7 uVar16;
  char *pcVar15;
  short sVar17;
  undefined2 uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  char cVar22;
  short sVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  char *pcVar27;
  char *pcVar28;
  char cVar29;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 *local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8);
  lVar11 = FUN_14012c249(uVar5,&DAT_140ec386a);
  uVar25 = 0xb;
  if (lVar11 == 0) goto LAB_14014f41e;
  local_68 = FUN_14012c267(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  uVar12 = FUN_14012c249(uVar5,"pshinter");
  lVar13 = FUN_14012c249(uVar5,"psaux");
  if (lVar13 == 0) goto LAB_14014f41e;
  *(longlong *)(param_2 + 0xbe) = lVar13;
  local_70 = uVar12;
  uVar12 = FUN_14012c267(*(undefined8 *)(param_2 + 0x24),"cff-load",1);
  uVar9 = FUN_14012d612(param_1,0);
  if (uVar9 == 0) {
    local_a8 = param_5;
    local_8c = (**(code **)(lVar11 + 8))(param_1,param_2,param_3,param_4);
    if (local_8c == 0) {
      uVar25 = 2;
      if (param_2[0x3c] != 0x4f54544f) goto LAB_14014f41e;
      if ((int)param_3 < 0) {
LAB_14014f6d7:
        uVar25 = 0;
        goto LAB_14014f41e;
      }
      iVar19 = (**(code **)(param_2 + 0xa8))(param_2,0x68656164,param_1,0);
      if (iVar19 == 0) {
        local_a8 = param_5;
        uVar9 = (**(code **)(lVar11 + 0x10))(param_1,param_2,param_3,param_4);
        if (uVar9 != 0) goto LAB_14014f41c;
        uVar10 = 0;
      }
      else {
        puVar26 = param_2;
        uVar9 = (**(code **)(lVar11 + 0x40))(param_2,param_1);
        uVar25 = (ulonglong)uVar9;
        uVar10 = (undefined4)CONCAT71((int7)((ulonglong)puVar26 >> 8),1);
        if (((char)uVar9 != -0x72) && ((uVar9 & 0xff) != 0)) goto LAB_14014f41e;
      }
      local_90 = uVar10;
      uVar25 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,param_1,0);
      local_4c = (uint)uVar25;
      if (local_4c == 0) {
        *(undefined1 *)(param_2 + 0x100) = 1;
        uVar16 = (undefined7)(uVar25 >> 8);
        local_88 = CONCAT71(uVar16,1);
        local_80 = CONCAT71(uVar16,1);
        goto LAB_14014f4a7;
      }
      uVar25 = uVar25 & 0xffffffff;
      if ((char)uVar25 != -0x72) goto LAB_14014f41e;
      uVar9 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,param_1,0);
      local_4c = uVar9;
      if (uVar9 == 0) goto LAB_14014f495;
    }
    else {
      uVar14 = FUN_14012d612(param_1,0);
      uVar9 = (uint)uVar14;
      if (uVar9 == 0) {
        local_4c = 0;
        local_90 = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
LAB_14014f495:
        local_88 = 0;
        local_80 = 0;
LAB_14014f4a7:
        local_78 = *(undefined8 *)(param_2 + 0x26);
        lVar11 = FUN_140128a1f(local_78,0x1138,&local_4c);
        uVar25 = (ulonglong)local_4c;
        if (local_4c != 0) goto LAB_14014f41e;
        *(longlong *)(param_2 + 0xf8) = lVar11;
        local_98 = (undefined1)local_80;
        local_a0 = (undefined1)local_90;
        local_a8 = param_2;
        uVar9 = FUN_140153133(uVar5,param_1,param_3,lVar11);
        local_4c = uVar9;
        if (uVar9 != 0) goto LAB_14014f41c;
        if ((int)param_3 < 0) {
          *param_2 = *(undefined4 *)(lVar11 + 0x1c);
          goto LAB_14014f6d7;
        }
        *(undefined8 *)(lVar11 + 0x10d0) = local_70;
        *(longlong *)(lVar11 + 0x10d8) = local_68;
        *(undefined8 *)(lVar11 + 0x10e0) = uVar12;
        param_2[1] = param_3 & 0xffff;
        param_2[4] = *(undefined4 *)(lVar11 + 0x20);
        uVar25 = 0xb;
        if (local_68 == 0 && *(int *)(lVar11 + 0x660) == 0xffff) goto LAB_14014f41e;
        if (((*(byte *)((longlong)param_2 + 9) & 1) != 0) &&
           (uVar9 = FUN_1401841ab(param_2,param_3 >> 0x10), local_4c = uVar9, uVar9 != 0))
        goto LAB_14014f41c;
        cVar29 = (char)local_90;
        if (*(char *)(lVar11 + 0x61c) == '\0') {
          uVar9 = 1000;
          if (cVar29 == '\0') {
            uVar9 = (uint)*(ushort *)(param_2 + 0x1a);
          }
          *(uint *)(lVar11 + 0x620) = uVar9;
        }
        iVar19 = *(int *)(lVar11 + 0x618);
        if (iVar19 == 0) {
          iVar19 = *(int *)(lVar11 + 0x614);
        }
        iVar20 = -iVar19;
        if (-iVar19 < 0) {
          iVar20 = iVar19;
        }
        if (iVar20 == 0x10000) {
          iVar19 = *(int *)(lVar11 + 0x628);
        }
        else {
          uVar10 = FUN_14012b378(*(undefined4 *)(lVar11 + 0x620),iVar20);
          *(undefined4 *)(lVar11 + 0x620) = uVar10;
          uVar10 = FUN_14012b378(*(undefined4 *)(lVar11 + 0x60c),iVar20);
          *(undefined4 *)(lVar11 + 0x60c) = uVar10;
          uVar10 = FUN_14012b378(*(undefined4 *)(lVar11 + 0x614),iVar20);
          *(undefined4 *)(lVar11 + 0x614) = uVar10;
          uVar10 = FUN_14012b378(*(undefined4 *)(lVar11 + 0x610),iVar20);
          *(undefined4 *)(lVar11 + 0x610) = uVar10;
          uVar10 = FUN_14012b378(*(undefined4 *)(lVar11 + 0x618),iVar20);
          *(undefined4 *)(lVar11 + 0x618) = uVar10;
          uVar10 = FUN_14012b378(*(undefined4 *)(lVar11 + 0x624),iVar20);
          *(undefined4 *)(lVar11 + 0x624) = uVar10;
          iVar19 = FUN_14012b378(*(undefined4 *)(lVar11 + 0x628),iVar20);
        }
        *(int *)(lVar11 + 0x624) = (int)*(short *)(lVar11 + 0x626);
        *(int *)(lVar11 + 0x628) = iVar19 >> 0x10;
        uVar25 = (ulonglong)*(uint *)(lVar11 + 0x8a8);
        if (uVar25 != 0) {
          puVar26 = (undefined4 *)(lVar11 + 0x60c);
          do {
            lVar13 = *(longlong *)(lVar11 + 0x8a8 + uVar25 * 8);
            if (*(char *)(lVar13 + 0x3c) == '\0') {
              uVar10 = *(undefined4 *)(lVar11 + 0x610);
              uVar7 = *(undefined4 *)(lVar11 + 0x614);
              uVar8 = *(undefined4 *)(lVar11 + 0x618);
              *(undefined4 *)(lVar13 + 0x2c) = *puVar26;
              *(undefined4 *)(lVar13 + 0x30) = uVar10;
              *(undefined4 *)(lVar13 + 0x34) = uVar7;
              *(undefined4 *)(lVar13 + 0x38) = uVar8;
              *(undefined8 *)(lVar13 + 0x44) = *(undefined8 *)(lVar11 + 0x624);
              uVar10 = *(undefined4 *)(lVar11 + 0x620);
LAB_14014f824:
              *(undefined4 *)(lVar13 + 0x40) = uVar10;
            }
            else if (*(char *)(lVar11 + 0x61c) != '\0') {
              uVar9 = *(uint *)(lVar11 + 0x620);
              uVar24 = 1;
              if (((1 < uVar9) && (uVar4 = *(uint *)(lVar13 + 0x40), 1 < uVar4)) &&
                 (uVar24 = uVar4, uVar9 < uVar4)) {
                uVar24 = uVar9;
              }
              FUN_14012e68f(puVar26,lVar13 + 0x2c,uVar24);
              FUN_14012e833(lVar13 + 0x44,puVar26,uVar24);
              uVar10 = FUN_14012a478(*(undefined4 *)(lVar13 + 0x40),*(undefined4 *)(lVar11 + 0x620),
                                     uVar24);
              goto LAB_14014f824;
            }
            iVar19 = *(int *)(lVar13 + 0x38);
            if (iVar19 == 0) {
              iVar19 = *(int *)(lVar13 + 0x34);
            }
            iVar20 = -iVar19;
            if (-iVar19 < 0) {
              iVar20 = iVar19;
            }
            if (iVar20 == 0x10000) {
              iVar19 = *(int *)(lVar13 + 0x48);
            }
            else {
              uVar10 = FUN_14012b378(*(undefined4 *)(lVar13 + 0x40),iVar20);
              *(undefined4 *)(lVar13 + 0x40) = uVar10;
              uVar10 = FUN_14012b378(*(undefined4 *)(lVar13 + 0x2c),iVar20);
              *(undefined4 *)(lVar13 + 0x2c) = uVar10;
              uVar10 = FUN_14012b378(*(undefined4 *)(lVar13 + 0x34),iVar20);
              *(undefined4 *)(lVar13 + 0x34) = uVar10;
              uVar10 = FUN_14012b378(*(undefined4 *)(lVar13 + 0x30),iVar20);
              *(undefined4 *)(lVar13 + 0x30) = uVar10;
              uVar10 = FUN_14012b378(*(undefined4 *)(lVar13 + 0x38),iVar20);
              *(undefined4 *)(lVar13 + 0x38) = uVar10;
              uVar10 = FUN_14012b378(*(undefined4 *)(lVar13 + 0x44),iVar20);
              *(undefined4 *)(lVar13 + 0x44) = uVar10;
              iVar19 = FUN_14012b378(*(undefined4 *)(lVar13 + 0x48),iVar20);
            }
            uVar25 = uVar25 - 1;
            *(int *)(lVar13 + 0x44) = (int)*(short *)(lVar13 + 0x46);
            *(int *)(lVar13 + 0x48) = iVar19 >> 0x10;
          } while (uVar25 != 0);
        }
        uVar5 = local_78;
        if (cVar29 != '\0') {
          *param_2 = *(undefined4 *)(lVar11 + 0x1c);
          if (*(int *)(lVar11 + 0x660) == 0xffff) {
            iVar19 = *(int *)(lVar11 + 0x500);
          }
          else {
            iVar19 = *(int *)(lVar11 + 0x4e8) + 1;
          }
          param_2[4] = iVar19;
          param_2[0x16] = (int)*(short *)(lVar11 + 0x632);
          sVar3 = *(short *)(lVar11 + 0x636);
          param_2[0x17] = (int)sVar3;
          param_2[0x18] = *(int *)(lVar11 + 0x638) + 0xffff >> 0x10;
          iVar19 = *(int *)(lVar11 + 0x63c) + 0xffff;
          iVar20 = iVar19 >> 0x10;
          param_2[0x19] = iVar20;
          uVar9 = *(uint *)(lVar11 + 0x620);
          *(short *)(param_2 + 0x1a) = (short)uVar9;
          *(short *)((longlong)param_2 + 0x6a) = (short)((uint)iVar19 >> 0x10);
          sVar23 = (short)((ulonglong)((uVar9 & 0xffff) * 0xc) * 0x1999999a >> 0x20);
          iVar20 = iVar20 - sVar3;
          sVar17 = (short)iVar20;
          if (iVar20 <= sVar23) {
            sVar17 = sVar23;
          }
          *(short *)(param_2 + 0x1b) = sVar3;
          *(short *)((longlong)param_2 + 0x6e) = sVar17;
          *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(lVar11 + 0x600);
          *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(lVar11 + 0x602);
          if ((*(int *)(lVar11 + 0x5f0) != 0) && (lVar13 = FUN_1401502ed(lVar11), lVar13 != 0)) {
            uVar12 = FUN_1401537d6(uVar5,lVar13);
            *(undefined8 *)(param_2 + 6) = uVar12;
          }
          if (*(longlong *)(param_2 + 6) == 0) {
            lVar13 = FUN_14015381a(lVar11,param_3 & 0xffff);
            *(longlong *)(param_2 + 6) = lVar13;
            if ((lVar13 != 0) && (FUN_1401538d4(lVar13), *(longlong *)(param_2 + 6) != 0))
            goto LAB_14014f9bb;
            lVar13 = FUN_1401502ed(lVar11,*(undefined4 *)(lVar11 + 0x688));
            iVar19 = local_8c;
            if (lVar13 != 0) {
              uVar12 = FUN_1401537d6(uVar5,lVar13);
              *(undefined8 *)(param_2 + 6) = uVar12;
            }
          }
          else {
LAB_14014f9bb:
            pcVar15 = (char *)FUN_1401502ed(lVar11,*(undefined4 *)(lVar11 + 0x5ec));
            iVar19 = local_8c;
            pcVar27 = *(char **)(param_2 + 6);
            if (pcVar27 != (char *)0x0 && pcVar15 != (char *)0x0) {
              cVar22 = *pcVar15;
              while (cVar22 != '\0') {
                cVar2 = *pcVar27;
                pcVar28 = pcVar27;
                while (cVar22 != cVar2) {
                  if ((cVar22 == ' ') || (cVar22 == '-')) goto LAB_14014fa0a;
                  if ((cVar2 != ' ') && (cVar2 != '-')) {
                    if ((cVar2 != '\0') || (lVar13 = FUN_1401537d6(uVar5,pcVar15), lVar13 == 0))
                    goto LAB_14014fab4;
                    FUN_14015398c(*(undefined8 *)(param_2 + 6),lVar13);
                    goto LAB_14014fac6;
                  }
                  pcVar1 = pcVar28 + 1;
                  pcVar28 = pcVar28 + 1;
                  cVar2 = *pcVar1;
                }
                pcVar27 = pcVar28 + 1;
LAB_14014fa0a:
                pcVar28 = pcVar15 + 1;
                pcVar15 = pcVar15 + 1;
                cVar22 = *pcVar28;
              }
            }
          }
LAB_14014fab4:
          lVar13 = FUN_1401537d6(uVar5,"Regular");
LAB_14014fac6:
          *(longlong *)(param_2 + 8) = lVar13;
          param_2[2] = (uint)(iVar19 == 0) * 8 + (uint)(*(char *)(lVar11 + 0x5f8) != '\0') * 4 |
                       param_2[2] | 0x811;
          uVar9 = (uint)(*(int *)(lVar11 + 0x5fc) != 0);
          pcVar27 = (char *)FUN_1401502ed(lVar11,*(undefined4 *)(lVar11 + 0x5f4));
          if ((pcVar27 != (char *)0x0) &&
             ((iVar19 = strcmp(pcVar27,"Bold"), iVar19 == 0 ||
              (iVar19 = strcmp(pcVar27,"Black"), iVar19 == 0)))) {
            uVar9 = uVar9 | 2;
          }
          if ((((uVar9 & 2) == 0) && (pcVar27 = *(char **)(param_2 + 8), pcVar27 != (char *)0x0)) &&
             ((iVar19 = strncmp(pcVar27,"Bold",4), iVar19 == 0 ||
              (iVar19 = strncmp(pcVar27,"Black",5), iVar19 == 0)))) {
            uVar9 = uVar9 | 2;
          }
          param_2[3] = uVar9;
        }
        iVar19 = *(int *)(lVar11 + 0x660);
        if ((char)local_88 == '\0' && iVar19 == 0xffff) {
          *(byte *)((longlong)param_2 + 9) = *(byte *)((longlong)param_2 + 9) | 2;
          iVar19 = *(int *)(lVar11 + 0x660);
        }
        if ((cVar29 != '\0') && (iVar19 != 0xffff)) {
          *(byte *)((longlong)param_2 + 9) = *(byte *)((longlong)param_2 + 9) | 0x10;
        }
        iVar19 = param_2[0xe];
        lVar13 = (longlong)iVar19;
        if (0 < lVar13) {
          lVar21 = 0;
          do {
            lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar21 * 8);
            sVar3 = *(short *)(lVar6 + 0xc);
            if (sVar3 == 3) {
              if (*(short *)(lVar6 + 0xe) == 1) goto LAB_14014fc6c;
            }
            else if (sVar3 == 0) goto LAB_14014fc6c;
            lVar21 = lVar21 + 1;
          } while (lVar13 != lVar21);
        }
        if ((cVar29 == '\0') || (*(int *)(lVar11 + 0x660) == 0xffff)) {
          local_58 = 0x10003756e6963;
          local_60 = param_2;
          local_4c = FUN_14012b97a(&DAT_140e9d000,0,&local_60,0);
          if ((local_4c == 0) || (((char)local_4c == -0x5d || ((local_4c & 0xff) == 7)))) {
            local_4c = 0;
            if ((*(longlong *)(param_2 + 0x22) == 0) && (iVar19 != param_2[0xe])) {
              *(undefined8 *)(param_2 + 0x22) =
                   *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar13 * 8);
            }
LAB_14014fc6c:
            if (*(int *)(lVar11 + 200) != 0) {
              if (*(int *)(lVar11 + 0xc4) == 0) {
                uVar10 = 0x41444f42;
                uVar18 = 0;
              }
              else if (*(int *)(lVar11 + 0xc4) == 1) {
                uVar10 = 0x41444245;
                uVar18 = 1;
              }
              else {
                uVar10 = 0x41444243;
                uVar18 = 2;
              }
              local_58 = CONCAT26(uVar18,0x700000000);
              local_58 = CONCAT44(local_58._4_4_,uVar10);
              local_60 = param_2;
              local_4c = FUN_14012b97a(&DAT_140e9cfb0,0,&local_60,0);
            }
          }
        }
        uVar25 = (ulonglong)local_4c;
        goto LAB_14014f41e;
      }
    }
  }
LAB_14014f41c:
  uVar25 = (ulonglong)uVar9;
LAB_14014f41e:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_c8)) {
    return uVar25;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_c8);
}

