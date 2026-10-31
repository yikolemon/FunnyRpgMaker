/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008fdfc */

uint __thiscall FUN_1008fdfc(uint param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint unaff_EBX;
  undefined3 uVar19;
  uint uVar17;
  int *piVar18;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int *local_30;
  uint local_2c;
  int *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined3 uVar20;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  uVar12 = CONCAT31((int3)(local_14 >> 8),1);
  if (param_2 == 0) goto LAB_10090a4d;
  local_30 = (int *)(param_1 + 8);
  local_20 = param_1 + 0x24;
  local_28 = (int *)(param_1 + 0x18);
  local_40 = 0;
  local_3c = param_1;
LAB_1008fe3c:
  uVar5 = local_3c;
  FUN_1001b16c(1);
  uVar6 = local_3c;
  uVar12 = local_40;
  if (0x14 < *(int *)(param_2 + 4) - 1U) {
LAB_10090a41:
    uVar12 = 0;
    goto LAB_10090a4d;
  }
  uVar23 = *(uint *)(param_2 + 0xc);
  uVar19 = (undefined3)(unaff_EBX >> 8);
  uVar20 = (undefined3)(local_40 >> 8);
  unaff_EBX = local_40;
  switch(*(int *)(param_2 + 4)) {
  case 2:
    unaff_EBX = *(uint *)(uVar5 + 0x78);
    if (((unaff_EBX >> 8 & 1) != 0) ||
       (param_2 = uVar23, *(int *)(uVar5 + 8) != *(int *)(uVar5 + 0x6c))) {
      uVar17 = CONCAT31((int3)(unaff_EBX >> 8),1);
      if ((*(byte *)(uVar5 + 0x75) & 0x10) == 0) goto LAB_10090552;
      uVar3 = *(undefined2 *)(*local_30 + -2);
LAB_10090118:
      uVar12 = FUN_10090b08(uVar3);
      unaff_EBX = uVar12 ^ 1;
      param_2 = uVar23;
    }
    goto LAB_1009053c;
  case 3:
    if (*(undefined2 **)(uVar5 + 8) == *(undefined2 **)(uVar5 + 0x70)) {
      unaff_EBX = CONCAT31(uVar19,*(byte *)(uVar5 + 0x78) >> 1);
      param_2 = uVar23;
      goto LAB_1009053c;
    }
    uVar17 = CONCAT31(uVar19,1);
    if ((*(byte *)(uVar5 + 0x75) & 0x10) != 0) {
      uVar3 = **(undefined2 **)(uVar5 + 8);
      goto LAB_10090118;
    }
    goto LAB_10090552;
  case 4:
    bVar7 = FUN_10090b28();
    unaff_EBX = CONCAT31(uVar19,(*(byte *)(param_2 + 8) & 1) == 0 ^ bVar7);
    param_2 = uVar23;
    goto LAB_1009053c;
  case 5:
    uVar17 = CONCAT31(uVar19,1);
    if (*(short **)(uVar5 + 8) != *(short **)(uVar5 + 0x70)) {
      sVar4 = **(short **)(uVar5 + 8);
      if ((*(byte *)(uVar5 + 0x74) & 0x3e) == 0) {
        cVar8 = FUN_10090b08(sVar4);
      }
      else {
        cVar8 = sVar4 == 0;
      }
      if ((cVar8 == '\0') && ((local_40 & 1) == 0)) {
        *local_30 = *local_30 + 2;
        unaff_EBX = 0;
        param_2 = uVar23;
        goto LAB_1009053c;
      }
    }
    goto LAB_10090552;
  case 6:
    local_18 = 0;
    iVar11 = FUN_10090b93(*(undefined4 *)(uVar5 + 8),*(undefined4 *)(uVar5 + 0x70),
                          *(int *)(param_2 + 0x1c),
                          *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x18) * 2,
                          *(undefined4 *)(uVar5 + 0x68),*(undefined4 *)(uVar5 + 0x74),&local_18);
    iVar16 = local_18;
    if (iVar11 == *(int *)(uVar5 + 8)) {
      uVar12 = CONCAT31(uVar19,1);
    }
    else {
      *local_30 = iVar11;
      uVar12 = local_40;
    }
LAB_1009078f:
    iVar11 = iVar16 + 0x3f;
    if (-1 < iVar16) {
      iVar11 = iVar16;
    }
    FUN_1001b16c(iVar11 >> 6);
    unaff_EBX = uVar12;
    param_2 = uVar23;
    goto LAB_1009053c;
  case 7:
    uVar17 = CONCAT31(uVar19,1);
    if ((*(int *)(uVar5 + 8) != *(int *)(uVar5 + 0x70)) &&
       (iVar16 = FUN_10090c18(param_2,*(int *)(uVar5 + 8)), iVar16 != *(int *)(uVar5 + 8))) {
      *local_30 = iVar16;
      break;
    }
    goto LAB_10090552;
  case 10:
    uVar24 = 1;
    goto LAB_1008ff44;
  case 0xb:
    uVar24 = 2;
LAB_1008ff44:
    FUN_1001b358(uVar24,param_2);
    uVar23 = *(uint *)(param_2 + 0x14);
    break;
  case 0xc:
    uVar12 = *(uint *)(uVar5 + 0x4c);
    iVar16 = *(int *)(uVar5 + 0x5c);
    *(int *)(uVar5 + 0x5c) = iVar16 + -1;
    iVar10 = (iVar16 * 4 + -4) * 5;
    iVar11 = *(int *)(uVar12 + iVar10);
    if (iVar11 - 1U < 2) {
      uVar17 = CONCAT31(uVar19,1);
      if (iVar11 == 1) {
        *local_30 = *(int *)(uVar12 + 0xc + iVar10);
        iVar16 = *(int *)(uVar12 + 8 + iVar10);
LAB_100900f5:
        uVar23 = *(uint *)(iVar16 + 0xc);
        break;
      }
    }
    else {
      iVar22 = iVar16 * 0x14 + -8;
      iVar9 = iVar16 * -0x14 + 0x14;
      iVar10 = iVar16 + -2;
      local_2c = 0;
      local_38 = 0xffffffff;
      local_24 = 0;
      iVar16 = iVar16 * -0x14 + 0x3c;
      do {
        iVar21 = iVar16;
        if (iVar11 == 0xd) {
          uVar5 = *(uint *)((uVar12 - 8) + iVar22);
          if (uVar5 <= local_38) {
            local_38 = uVar5;
          }
          if (local_24 <= uVar5) {
            local_24 = uVar5;
          }
          if (local_2c == 0) {
            local_2c = iVar10 + 1;
          }
        }
        *(int *)(local_3c + 0x5c) = iVar10;
        iVar11 = *(int *)((uVar12 - 0x20) + iVar22);
        iVar22 = iVar22 + -0x14;
        iVar9 = iVar9 + 0x14;
        iVar10 = iVar10 + -1;
        iVar16 = iVar21 + 0x14;
      } while (1 < iVar11 - 1U);
      local_34 = uVar12;
      if (iVar11 == 1) {
        *local_30 = *(int *)(uVar12 + iVar22);
        param_2 = *(uint *)(*(int *)((uVar12 - 4) + iVar22) + 0xc);
        if (local_2c != 0) {
          piVar13 = (int *)(uVar12 - iVar9);
          piVar18 = (int *)(uVar12 + local_2c * 0x14 + 0x14);
          if (-(local_2c * 0x14 + 0x14) == iVar9) {
LAB_10090368:
            piVar14 = piVar13;
            if ((piVar13 != piVar18) && (piVar15 = piVar13 + 5, piVar15 != piVar18)) {
              do {
                if (0xfffffffd < *piVar15 - 0xeU) {
                  piVar13[4] = piVar15[4];
                  iVar16 = piVar15[1];
                  iVar11 = piVar15[2];
                  iVar10 = piVar15[3];
                  *piVar13 = *piVar15;
                  piVar13[1] = iVar16;
                  piVar13[2] = iVar11;
                  piVar13[3] = iVar10;
                  piVar13 = piVar13 + 5;
                }
                piVar15 = piVar15 + 5;
              } while (piVar15 != piVar18);
              uVar12 = *(uint *)(local_3c + 0x4c);
              piVar14 = piVar13;
            }
          }
          else {
            iVar21 = iVar21 + local_2c * 0x14;
            do {
              if (*piVar13 - 0xeU < 0xfffffffe) goto LAB_10090368;
              piVar13 = piVar13 + 5;
              iVar21 = iVar21 + -0x14;
              piVar14 = piVar18;
            } while (iVar21 != 0);
          }
          *(int *)(local_3c + 0x5c) = ((int)((int)piVar14 - uVar12) >> 2) * -0x33333333;
          local_38 = param_2;
        }
        goto LAB_1009053c;
      }
      uVar17 = CONCAT31(uVar20,1);
      if (local_38 <= local_24) {
        FUN_1001b3d6(local_38,local_24 + 1);
      }
    }
    goto LAB_10090552;
  case 0xd:
    iVar16 = *(int *)(param_2 + 0x14);
    iVar11 = *(int *)(uVar5 + 0xc);
    local_38 = uVar23;
    iVar9 = FUN_1001b358(0xc,param_2);
    iVar10 = *(int *)(uVar5 + 0x4c);
    *(undefined4 *)(iVar10 + 0xc + iVar9 * 0x14) = *(undefined4 *)(iVar11 + -8 + iVar16 * 8);
    *(int *)(iVar10 + 4 + iVar9 * 0x14) = iVar16 + -1;
    *(undefined4 *)(iVar11 + -8 + iVar16 * 8) = *(undefined4 *)(uVar5 + 8);
    uVar23 = local_38;
    break;
  case 0xe:
    iVar16 = *(int *)(*(int *)(param_2 + 0x14) + 0x14);
    if (iVar16 != 0) {
      local_2c = *(uint *)(uVar5 + 0xc);
      local_34 = iVar16 - 1U >> 5;
      local_38 = 1 << ((char)iVar16 - 1U & 0x1f);
      iVar10 = FUN_1001b358(((*(uint *)(*(int *)(uVar5 + 0x18) + local_34 * 4) >>
                              (iVar16 - 1U & 0x1f) & 1) != 0) + '\r',*(int *)(param_2 + 0x14));
      iVar11 = *(int *)(uVar5 + 0x4c);
      *(undefined4 *)(iVar11 + 0xc + iVar10 * 0x14) = *(undefined4 *)((local_2c - 4) + iVar16 * 8);
      *(int *)(iVar11 + 4 + iVar10 * 0x14) = iVar16 + -1;
      *(undefined4 *)((local_2c - 4) + iVar16 * 8) = *(undefined4 *)(uVar5 + 8);
      puVar1 = (uint *)(*(int *)(uVar5 + 0x18) + local_34 * 4);
      *puVar1 = *puVar1 | local_38;
    }
    break;
  case 0xf:
    iVar16 = *(int *)(param_2 + 0x14);
    if ((*(uint *)(*local_28 + (iVar16 - 1U >> 5) * 4) >> (iVar16 - 1U & 0x1f) & 1) != 0) {
      iVar11 = *(int *)(uVar5 + 8);
      iVar10 = *(int *)(*(int *)(uVar5 + 0xc) + -8 + iVar16 * 8);
      iVar16 = *(int *)(*(int *)(uVar5 + 0xc) + -4 + iVar16 * 8);
      local_1c = 0;
      local_38 = uVar23;
      if ((iVar10 == iVar16) ||
         (iVar11 = FUN_10090e3c(iVar11,*(undefined4 *)(uVar5 + 0x70),iVar10,iVar16,
                                *(undefined4 *)(uVar5 + 0x68),*(undefined4 *)(uVar5 + 0x74),
                                &local_1c), iVar11 != *(int *)(uVar5 + 8))) {
        *local_30 = iVar11;
        iVar16 = local_1c;
        uVar23 = local_38;
      }
      else {
        iVar16 = local_1c;
        uVar12 = CONCAT31(uVar20,1);
        uVar23 = local_38;
      }
      goto LAB_1009078f;
    }
    unaff_EBX = local_40 & 0xff;
    param_2 = uVar23;
    local_38 = uVar23;
    if ((*(byte *)(uVar5 + 0x74) & 0x12) != 0) {
      unaff_EBX = 1;
    }
    goto LAB_1009053c;
  case 0x10:
    param_2 = *(uint *)(param_2 + 0x18);
    if (param_2 != 0) {
      uVar24 = 3;
LAB_10090038:
      FUN_1001b358(uVar24,param_2);
    }
    break;
  case 0x12:
    FUN_1001b4dc(param_2);
    uVar6 = local_3c;
    uVar12 = *(uint *)(param_2 + 8);
    piVar18 = (int *)(*(int *)(param_2 + 0x20) * 0x10 + *(int *)(uVar5 + 0x40));
    if (*(int *)(param_2 + 0x24) == 1) {
      iVar16 = FUN_1001b358(4,param_2);
      *piVar18 = iVar16;
      if ((*(int *)(param_2 + 0x14) < 1) &&
         ((((uVar12 & 2) == 0 || (*(char *)(local_3c + 0x87) != '\0')) ||
          (*(int *)(param_2 + 0x18) == 0)))) {
        piVar18[1] = 0;
        uVar23 = *(uint *)(*(int *)(param_2 + 0x1c) + 0xc);
        if (*(int *)(param_2 + 0x18) != 0) {
          uVar24 = 5;
          goto LAB_10090038;
        }
      }
      else {
        piVar18[1] = 1;
        if (*(int *)(param_2 + 0x14) == 0) {
          *(undefined4 *)(*(int *)(local_3c + 0x4c) + iVar16 * 0x14) = 6;
        }
      }
    }
    else {
      if (*(int *)(param_2 + 0x14) < 1) {
        if (((uVar12 & 2) != 0) && (*(char *)(local_3c + 0x87) == '\0')) {
          if (*(int *)(param_2 + 0x18) == 0) {
            iVar16 = *(int *)(param_2 + 0x1c);
            goto LAB_100900f5;
          }
          goto LAB_100903b2;
        }
        uVar23 = *(uint *)(*(int *)(param_2 + 0x1c) + 0xc);
        if (*(int *)(param_2 + 0x18) == 0) break;
        iVar11 = FUN_1001b358(9,param_2);
        iVar16 = *(int *)(uVar6 + 0x4c);
        *(int *)(iVar16 + 4 + iVar11 * 0x14) = piVar18[1];
        *(int *)(iVar16 + 0x10 + iVar11 * 0x14) = *piVar18;
        piVar18[1] = 0;
      }
      else {
LAB_100903b2:
        iVar11 = FUN_1001b358(0xb - (uint)(*(int *)(param_2 + 0x14) == 0),param_2);
        iVar16 = *(int *)(uVar6 + 0x4c);
        *(int *)(iVar16 + 4 + iVar11 * 0x14) = piVar18[1];
        *(int *)(iVar16 + 0x10 + iVar11 * 0x14) = *piVar18;
        piVar18[1] = 1;
      }
LAB_100903e8:
      *piVar18 = iVar11;
    }
    break;
  case 0x13:
    iVar16 = *(int *)(param_2 + 0x14);
    uVar12 = *(uint *)(iVar16 + 8);
    piVar18 = (int *)(*(int *)(iVar16 + 0x20) * 0x10 + *(int *)(uVar5 + 0x40));
    if ((uVar12 & 0x1000) == 0 && *(int *)(iVar16 + 0x24) == 0) {
      local_2c = *(uint *)(uVar5 + 8);
      iVar11 = piVar18[1];
      local_34 = *(uint *)(*(int *)(uVar5 + 0x4c) + 0xc + *piVar18 * 0x14);
      if (iVar11 < *(int *)(iVar16 + 0x14)) {
        iVar10 = FUN_1001b358(0xb,iVar16);
        iVar11 = *(int *)(uVar5 + 0x4c);
        *(int *)(iVar11 + 4 + iVar10 * 0x14) = piVar18[1];
        *(int *)(iVar11 + 0x10 + iVar10 * 0x14) = *piVar18;
        *piVar18 = iVar10;
        if ((local_34 == local_2c) && (*(int *)(iVar16 + 0x18) < 0)) {
          iVar11 = *(int *)(iVar16 + 0x14);
        }
        else {
          iVar11 = piVar18[1];
LAB_10090257:
          iVar11 = iVar11 + 1;
        }
        piVar18[1] = iVar11;
LAB_1009025b:
        FUN_1001b51c(piVar18[2]);
        uVar23 = *(uint *)(iVar16 + 0xc);
      }
      else if (local_34 == local_2c) {
        local_34 = uVar12;
        if (iVar11 != *(int *)(iVar16 + 0x14)) {
          unaff_EBX = local_40 & 0xff;
          if ((*(byte *)(local_3c + 0x74) & 0x3e) == 0) {
            unaff_EBX = 1;
          }
          param_2 = uVar23;
          if (iVar11 != 1) {
            unaff_EBX = 1;
          }
          goto LAB_1009053c;
        }
      }
      else if (((uVar12 & 2) == 0) || (*(char *)(local_3c + 0x87) != '\0')) {
        local_34 = uVar12;
        if (iVar11 != *(int *)(iVar16 + 0x18)) {
          iVar11 = FUN_1001b358(9,iVar16);
          iVar16 = *(int *)(uVar6 + 0x4c);
          *(int *)(iVar16 + 4 + iVar11 * 0x14) = piVar18[1];
          *(int *)(iVar16 + 0x10 + iVar11 * 0x14) = *piVar18;
          goto LAB_100903e8;
        }
      }
      else {
        local_34 = uVar12;
        if (iVar11 != *(int *)(iVar16 + 0x18)) {
          iVar10 = FUN_1001b358(10,iVar16);
          iVar11 = *(int *)(uVar6 + 0x4c);
          *(int *)(iVar11 + 4 + iVar10 * 0x14) = piVar18[1];
          *(int *)(iVar11 + 0x10 + iVar10 * 0x14) = *piVar18;
          *piVar18 = iVar10;
          iVar11 = piVar18[1];
          if (iVar11 != 0x7fffffff) goto LAB_10090257;
          goto LAB_1009025b;
        }
      }
    }
    else {
      iVar11 = *piVar18;
      if (piVar18[1] == 1) {
        iVar10 = *(int *)(local_3c + 8);
        local_2c = *(uint *)(local_3c + 0x4c);
        iVar9 = *(int *)(local_2c + 0xc + iVar11 * 0x14);
        piVar18[3] = iVar10 - iVar9 >> 1;
        if (iVar10 == iVar9) {
          param_2 = uVar23;
          local_38 = uVar23;
          local_34 = uVar12;
          if (((*(byte *)(local_3c + 0x74) & 0x3e) == 0) &&
             (unaff_EBX = local_40 & 0xff, *(int *)(iVar16 + 0x14) == 0)) {
            unaff_EBX = 1;
          }
          goto LAB_1009053c;
        }
        local_38 = uVar23;
        local_34 = uVar12;
        iVar11 = FUN_1001b358(((*(int *)(local_2c + iVar11 * 0x14) - 6U & 0xfffffffb) == 0) * '\x04'
                              + '\x04',iVar16);
        *(int *)(*(int *)(uVar6 + 0x4c) + 0x10 + iVar11 * 0x14) = *piVar18;
        *piVar18 = iVar11;
        uVar12 = local_34;
        uVar23 = local_38;
      }
      else {
        *(int *)(local_3c + 0x5c) = iVar11 + 1;
      }
      iVar11 = piVar18[1];
      if (iVar11 < *(int *)(iVar16 + 0x14)) {
        uVar23 = *(uint *)(iVar16 + 0xc);
        piVar18[1] = iVar11 + 1;
      }
      else if (((uVar12 & 2) == 0) || (*(char *)(local_3c + 0x87) != '\0')) {
        if (iVar11 == *(int *)(iVar16 + 0x18)) {
          *(int *)(local_3c + 0x5c) = *(int *)(local_3c + 0x5c) + -1;
        }
        else {
          iVar11 = *piVar18;
          iVar10 = *(int *)(local_3c + 0x4c);
          *(undefined4 *)(iVar10 + 0xc + iVar11 * 0x14) = *(undefined4 *)(local_3c + 8);
          *(undefined4 *)(iVar10 + iVar11 * 0x14) = 5;
          *(int *)(iVar10 + 8 + iVar11 * 0x14) = iVar16;
        }
      }
      else {
        piVar13 = (int *)(*(int *)(local_3c + 0x4c) + *piVar18 * 0x14);
        if (*piVar13 == 4) {
          *piVar13 = 8;
          iVar11 = piVar13[4];
          iVar10 = *(int *)(local_3c + 8);
          local_34 = *(uint *)(local_3c + 0x4c);
          *(int *)(local_34 + 0xc + iVar11 * 0x14) = iVar10;
          *(int *)(local_34 + 0xc + iVar11 * 0x14) = iVar10 + piVar18[3] * -2;
        }
        iVar11 = *local_30;
        piVar13[3] = iVar11;
        iVar10 = piVar18[1];
        if (iVar10 == *(int *)(iVar16 + 0x18)) {
          iVar11 = iVar11 + piVar18[3] * -2;
          piVar13[3] = iVar11;
          unaff_EBX = local_40;
          param_2 = uVar23;
          if (iVar11 == *(int *)(*(int *)(local_3c + 0x4c) + 0xc + piVar13[4] * 0x14)) {
            *(int *)(local_3c + 0x5c) = *(int *)(local_3c + 0x5c) + -1;
          }
          else {
            *piVar13 = 7;
          }
          goto LAB_1009053c;
        }
        uVar23 = *(uint *)(iVar16 + 0xc);
        if (iVar10 != 0x7fffffff) {
          piVar18[1] = iVar10 + 1;
        }
      }
    }
    break;
  case 0x15:
    uVar12 = (uint)*(ushort *)(uVar5 + 0x78);
    if (((*(ushort *)(uVar5 + 0x78) & 0x2020) != 0) &&
       (uVar12 = *(uint *)(uVar5 + 0x6c), uVar12 == *(uint *)(uVar5 + 8))) {
      uVar17 = CONCAT31(uVar19,1);
      goto LAB_10090552;
    }
    if (*(char *)(uVar5 + 0x88) == '\x01') {
      uVar12 = *(uint *)(local_3c + 8);
      uVar17 = CONCAT31(uVar19,1);
      if (uVar12 != *(uint *)(local_3c + 0x70)) goto LAB_10090552;
    }
    if (*(char *)(local_3c + 0x87) != '\x01') {
      uVar12 = CONCAT31((int3)(uVar12 >> 8),1);
      goto LAB_10090a4d;
    }
    if ((*(char *)(local_3c + 0x86) != '\x01') ||
       (cVar8 = FUN_1001b57a(), uVar17 = local_40, cVar8 != '\0')) {
      FUN_1001b646(local_30);
      *(undefined1 *)(uVar6 + 0x86) = 1;
      uVar17 = local_40;
    }
    goto LAB_10090552;
  }
  unaff_EBX = local_40;
  param_2 = uVar23;
LAB_1009053c:
  uVar17 = unaff_EBX;
  if (((unaff_EBX & 1) == 0) && (local_40 = 0, param_2 != 0)) goto LAB_1008fe3c;
LAB_10090552:
  iVar16 = *(int *)(local_3c + 0x5c);
  unaff_EBX = local_3c;
  local_40 = uVar17;
  if (iVar16 == 0) goto LAB_10090a48;
  do {
    iVar16 = iVar16 + -1;
    *(int *)(unaff_EBX + 0x5c) = iVar16;
    iVar11 = *(int *)(*(int *)(unaff_EBX + 0x4c) + iVar16 * 0x14);
    if (0xe < iVar11 - 1U) goto LAB_10090a41;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBX + 0x4c) + iVar16 * 0x14);
    param_2 = 0;
    switch(iVar11) {
    case 2:
      *local_30 = puVar2[3];
      param_2 = *(uint *)(puVar2[2] + 0xc);
      goto LAB_1009075e;
    case 3:
      iVar16 = puVar2[2];
      param_2 = *(uint *)(iVar16 + 0xc);
      *local_30 = puVar2[3];
      iVar16 = *(int *)(iVar16 + 0x18);
      if (iVar16 == 0) goto LAB_1009075e;
      puVar2[2] = iVar16;
      goto LAB_100906c2;
    case 5:
      param_2 = *(uint *)(puVar2[2] + 0xc);
      iVar11 = *(int *)(puVar2[2] + 0x20) * 0x10;
      *(undefined4 *)(unaff_EBX + 8) = puVar2[3];
      iVar16 = *(int *)(*(int *)(unaff_EBX + 0x40) + 4 + iVar11);
      if (iVar16 != 0x7fffffff) {
        *(int *)(*(int *)(unaff_EBX + 0x40) + iVar11 + 4) = iVar16 + 1;
      }
      goto LAB_1009075e;
    case 6:
      param_2 = *(uint *)(*(int *)(puVar2[2] + 0x1c) + 0xc);
      *local_30 = puVar2[3];
      goto LAB_1009075e;
    case 7:
      iVar11 = puVar2[4] + 1;
      if (iVar11 != iVar16) {
        iVar10 = *(int *)(puVar2[2] + 0x20);
        iVar9 = *(int *)(unaff_EBX + 0x40);
        iVar16 = puVar2[4] * 0x14 + 0x18;
        do {
          piVar18 = (int *)(*(int *)(*(int *)(local_3c + 0x4c) + iVar16) * 8 +
                            *(int *)(local_3c + 0xc) +
                           (uint)(*(int *)(*(int *)(local_3c + 0x4c) + -4 + iVar16) != 0xc) * 4);
          *piVar18 = *piVar18 + *(int *)(iVar10 * 0x10 + iVar9 + 0xc) * -2;
          iVar11 = iVar11 + 1;
          iVar16 = iVar16 + 0x14;
          unaff_EBX = local_3c;
        } while (iVar11 != *(int *)(local_3c + 0x5c));
      }
    case 8:
      iVar16 = puVar2[2];
      iVar11 = puVar2[3];
      param_2 = *(uint *)(*(int *)(iVar16 + 0x1c) + 0xc);
      *(int *)(unaff_EBX + 8) = iVar11;
      iVar11 = iVar11 + *(int *)(*(int *)(unaff_EBX + 0x40) + 0xc + *(int *)(iVar16 + 0x20) * 0x10)
                        * -2;
      puVar2[3] = iVar11;
      if (*(int *)(*(int *)(unaff_EBX + 0x4c) + 0xc + puVar2[4] * 0x14) != iVar11) {
        *puVar2 = 7;
LAB_100906c2:
        *(int *)(unaff_EBX + 0x5c) = *(int *)(unaff_EBX + 0x5c) + 1;
      }
      goto LAB_1009075e;
    case 9:
      param_2 = *(uint *)(puVar2[2] + 0xc);
      iVar11 = *(int *)(puVar2[2] + 0x20) * 0x10;
      iVar16 = *(int *)(unaff_EBX + 0x40) + iVar11;
      *(undefined4 *)(unaff_EBX + 8) = puVar2[3];
      iVar11 = *(int *)(*(int *)(unaff_EBX + 0x40) + 4 + iVar11);
      if (iVar11 != 0x7fffffff) {
        *(int *)(iVar16 + 4) = iVar11 + 1;
      }
      *puVar2 = 0xb;
      *(int *)(unaff_EBX + 0x5c) = *(int *)(unaff_EBX + 0x5c) + 1;
      FUN_1001b51c(*(undefined4 *)(iVar16 + 8));
LAB_1009075e:
      local_40 = 0;
      break;
    case 10:
      param_2 = *(uint *)(*(int *)(puVar2[2] + 0x1c) + 0xc);
      *local_30 = puVar2[3];
      local_40 = 0;
    case 0xb:
      iVar16 = *(int *)(unaff_EBX + 0x40);
      iVar11 = *(int *)(puVar2[2] + 0x20) * 0x10;
      *(undefined4 *)(iVar16 + 4 + iVar11) = puVar2[1];
      *(undefined4 *)(iVar16 + iVar11) = puVar2[4];
      break;
    case 0xc:
      *(undefined4 *)(*(int *)(unaff_EBX + 0xc) + puVar2[1] * 8) = puVar2[3];
      break;
    case 0xd:
      bVar7 = (byte)puVar2[1] & 0x1f;
      puVar1 = (uint *)(*local_28 + ((uint)puVar2[1] >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    case 0xe:
      *(undefined4 *)(*(int *)(unaff_EBX + 0xc) + 4 + puVar2[1] * 8) = puVar2[3];
      break;
    case 0xf:
      puVar1 = (uint *)(*local_28 + ((uint)puVar2[1] >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)puVar2[1] & 0x1f);
    }
    iVar16 = *(int *)(unaff_EBX + 0x5c);
  } while ((iVar16 != 0) && (param_2 == 0));
  if (param_2 == 0) goto LAB_10090a48;
  goto LAB_1008fe3c;
LAB_10090a48:
  uVar12 = local_40 ^ 1;
LAB_10090a4d:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar12 & 0xffffff01;
}

