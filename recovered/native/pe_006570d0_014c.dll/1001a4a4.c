/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001a4a4 */

uint __thiscall FUN_1001a4a4(uint param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint unaff_EBX;
  undefined3 uVar17;
  uint uVar15;
  int *piVar16;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
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
  undefined3 uVar18;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  uVar9 = CONCAT31((int3)(local_14 >> 8),1);
  if (param_2 == 0) goto LAB_1001b0b1;
  local_30 = (int *)(param_1 + 8);
  local_20 = param_1 + 0x24;
  local_28 = (int *)(param_1 + 0x18);
  local_40 = 0;
  local_3c = param_1;
LAB_1001a4e4:
  uVar3 = local_3c;
  FUN_1001b16c(1);
  uVar4 = local_3c;
  uVar9 = local_40;
  if (0x14 < *(int *)(param_2 + 4) - 1U) {
LAB_1001b0a5:
    uVar9 = 0;
    goto LAB_1001b0b1;
  }
  uVar21 = *(uint *)(param_2 + 0xc);
  uVar17 = (undefined3)(unaff_EBX >> 8);
  uVar18 = (undefined3)(local_40 >> 8);
  switch(*(int *)(param_2 + 4)) {
  case 2:
    unaff_EBX = *(uint *)(uVar3 + 0x78);
    if (((unaff_EBX >> 8 & 1) != 0) ||
       (param_2 = uVar21, *(int *)(uVar3 + 8) != *(int *)(uVar3 + 0x6c))) {
      uVar15 = CONCAT31((int3)(unaff_EBX >> 8),1);
      if ((*(byte *)(uVar3 + 0x75) & 0x10) == 0) goto LAB_1001ae6b;
      cVar6 = *(char *)(*local_30 + -1);
LAB_1001a7bf:
      uVar9 = FUN_1001b19b((int)cVar6);
      unaff_EBX = uVar9 ^ 1;
      param_2 = uVar21;
    }
    goto LAB_1001ae55;
  case 3:
    if (*(char **)(uVar3 + 8) == *(char **)(uVar3 + 0x70)) {
      unaff_EBX = CONCAT31(uVar17,*(byte *)(uVar3 + 0x78) >> 1);
      param_2 = uVar21;
      goto LAB_1001ae55;
    }
    uVar15 = CONCAT31(uVar17,1);
    if ((*(byte *)(uVar3 + 0x75) & 0x10) != 0) {
      cVar6 = **(char **)(uVar3 + 8);
      goto LAB_1001a7bf;
    }
    goto LAB_1001ae6b;
  case 4:
    bVar5 = FUN_1001b1ac();
    unaff_EBX = CONCAT31(uVar17,(*(byte *)(param_2 + 8) & 1) == 0 ^ bVar5);
    param_2 = uVar21;
    goto LAB_1001ae55;
  case 5:
    uVar15 = CONCAT31(uVar17,1);
    if (*(char **)(uVar3 + 8) != *(char **)(uVar3 + 0x70)) {
      cVar6 = **(char **)(uVar3 + 8);
      if ((*(byte *)(uVar3 + 0x74) & 0x3e) == 0) {
        cVar6 = FUN_1001b19b((int)cVar6);
      }
      else {
        cVar6 = cVar6 == '\0';
      }
      if ((cVar6 == '\0') && ((local_40 & 1) == 0)) {
        *local_30 = *local_30 + 1;
        unaff_EBX = 0;
        param_2 = uVar21;
        goto LAB_1001ae55;
      }
    }
    goto LAB_1001ae6b;
  case 6:
    local_18 = 0;
    iVar8 = FUN_1001b206(*(undefined4 *)(uVar3 + 8),*(undefined4 *)(uVar3 + 0x70),
                         *(int *)(param_2 + 0x1c),
                         *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x1c),
                         *(undefined4 *)(uVar3 + 0x68),*(undefined4 *)(uVar3 + 0x74),&local_18);
    iVar14 = local_18;
    if (iVar8 == *(int *)(uVar3 + 8)) {
      uVar9 = CONCAT31(uVar17,1);
    }
    else {
      *local_30 = iVar8;
      uVar9 = local_40;
    }
LAB_1001abdd:
    iVar8 = iVar14 + 0x3f;
    if (-1 < iVar14) {
      iVar8 = iVar14;
    }
    FUN_1001b16c(iVar8 >> 6);
    unaff_EBX = uVar9;
    param_2 = uVar21;
    goto LAB_1001ae55;
  case 7:
    uVar15 = CONCAT31(uVar17,1);
    if ((*(int *)(uVar3 + 8) != *(int *)(uVar3 + 0x70)) &&
       (iVar14 = FUN_1001b28c(param_2,*(int *)(uVar3 + 8)), iVar14 != *(int *)(uVar3 + 8))) {
      *local_30 = iVar14;
      break;
    }
    goto LAB_1001ae6b;
  case 10:
    uVar22 = 1;
    goto LAB_1001a5ec;
  case 0xb:
    uVar22 = 2;
LAB_1001a5ec:
    FUN_1001b358(uVar22,param_2);
    uVar21 = *(uint *)(param_2 + 0x14);
    break;
  case 0xc:
    uVar9 = *(uint *)(uVar3 + 0x4c);
    iVar14 = *(int *)(uVar3 + 0x5c);
    *(int *)(uVar3 + 0x5c) = iVar14 + -1;
    iVar7 = (iVar14 * 4 + -4) * 5;
    iVar8 = *(int *)(uVar9 + iVar7);
    if (iVar8 - 1U < 2) {
      uVar15 = CONCAT31(uVar17,1);
      if (iVar8 == 1) {
        *local_30 = *(int *)(uVar9 + 0xc + iVar7);
        iVar14 = *(int *)(uVar9 + 8 + iVar7);
LAB_1001a79c:
        uVar21 = *(uint *)(iVar14 + 0xc);
        break;
      }
    }
    else {
      iVar20 = iVar14 * 0x14 + -8;
      iVar13 = iVar14 * -0x14 + 0x14;
      iVar7 = iVar14 + -2;
      local_2c = 0;
      local_38 = 0xffffffff;
      local_24 = 0;
      iVar14 = iVar14 * -0x14 + 0x3c;
      do {
        iVar19 = iVar14;
        if (iVar8 == 0xd) {
          uVar3 = *(uint *)((uVar9 - 8) + iVar20);
          if (uVar3 <= local_38) {
            local_38 = uVar3;
          }
          if (local_24 <= uVar3) {
            local_24 = uVar3;
          }
          if (local_2c == 0) {
            local_2c = iVar7 + 1;
          }
        }
        *(int *)(local_3c + 0x5c) = iVar7;
        iVar8 = *(int *)((uVar9 - 0x20) + iVar20);
        iVar20 = iVar20 + -0x14;
        iVar13 = iVar13 + 0x14;
        iVar7 = iVar7 + -1;
        iVar14 = iVar19 + 0x14;
      } while (1 < iVar8 - 1U);
      local_34 = uVar9;
      if (iVar8 == 1) {
        *local_30 = *(int *)(uVar9 + iVar20);
        param_2 = *(uint *)(*(int *)((uVar9 - 4) + iVar20) + 0xc);
        unaff_EBX = local_40;
        if (local_2c != 0) {
          piVar10 = (int *)(uVar9 - iVar13);
          piVar16 = (int *)(uVar9 + local_2c * 0x14 + 0x14);
          if (-(local_2c * 0x14 + 0x14) == iVar13) {
LAB_1001aa0d:
            piVar11 = piVar10;
            if ((piVar10 != piVar16) && (piVar12 = piVar10 + 5, piVar12 != piVar16)) {
              do {
                if (0xfffffffd < *piVar12 - 0xeU) {
                  piVar10[4] = piVar12[4];
                  iVar14 = piVar12[1];
                  iVar8 = piVar12[2];
                  iVar7 = piVar12[3];
                  *piVar10 = *piVar12;
                  piVar10[1] = iVar14;
                  piVar10[2] = iVar8;
                  piVar10[3] = iVar7;
                  piVar10 = piVar10 + 5;
                }
                piVar12 = piVar12 + 5;
              } while (piVar12 != piVar16);
              uVar9 = *(uint *)(local_3c + 0x4c);
              piVar11 = piVar10;
            }
          }
          else {
            iVar19 = iVar19 + local_2c * 0x14;
            do {
              if (*piVar10 - 0xeU < 0xfffffffe) goto LAB_1001aa0d;
              piVar10 = piVar10 + 5;
              iVar19 = iVar19 + -0x14;
              piVar11 = piVar16;
            } while (iVar19 != 0);
          }
          *(int *)(local_3c + 0x5c) = ((int)((int)piVar11 - uVar9) >> 2) * -0x33333333;
          local_38 = param_2;
        }
        goto LAB_1001ae55;
      }
      uVar15 = CONCAT31(uVar18,1);
      if (local_38 <= local_24) {
        FUN_1001b3d6(local_38,local_24 + 1);
      }
    }
    goto LAB_1001ae6b;
  case 0xd:
    iVar14 = *(int *)(param_2 + 0x14);
    iVar8 = *(int *)(uVar3 + 0xc);
    local_38 = uVar21;
    iVar13 = FUN_1001b358(0xc,param_2);
    iVar7 = *(int *)(uVar3 + 0x4c);
    *(undefined4 *)(iVar7 + 0xc + iVar13 * 0x14) = *(undefined4 *)(iVar8 + -8 + iVar14 * 8);
    *(int *)(iVar7 + 4 + iVar13 * 0x14) = iVar14 + -1;
    *(undefined4 *)(iVar8 + -8 + iVar14 * 8) = *(undefined4 *)(uVar3 + 8);
    uVar21 = local_38;
    break;
  case 0xe:
    iVar14 = *(int *)(*(int *)(param_2 + 0x14) + 0x14);
    if (iVar14 != 0) {
      local_2c = *(uint *)(uVar3 + 0xc);
      local_34 = iVar14 - 1U >> 5;
      local_38 = 1 << ((char)iVar14 - 1U & 0x1f);
      iVar7 = FUN_1001b358(((*(uint *)(*(int *)(uVar3 + 0x18) + local_34 * 4) >>
                             (iVar14 - 1U & 0x1f) & 1) != 0) + '\r',*(int *)(param_2 + 0x14));
      iVar8 = *(int *)(uVar3 + 0x4c);
      *(undefined4 *)(iVar8 + 0xc + iVar7 * 0x14) = *(undefined4 *)((local_2c - 4) + iVar14 * 8);
      *(int *)(iVar8 + 4 + iVar7 * 0x14) = iVar14 + -1;
      *(undefined4 *)((local_2c - 4) + iVar14 * 8) = *(undefined4 *)(uVar3 + 8);
      puVar1 = (uint *)(*(int *)(uVar3 + 0x18) + local_34 * 4);
      *puVar1 = *puVar1 | local_38;
    }
    break;
  case 0xf:
    iVar14 = *(int *)(param_2 + 0x14);
    if ((*(uint *)(*local_28 + (iVar14 - 1U >> 5) * 4) >> (iVar14 - 1U & 0x1f) & 1) != 0) {
      iVar8 = *(int *)(uVar3 + 8);
      iVar7 = *(int *)(*(int *)(uVar3 + 0xc) + -8 + iVar14 * 8);
      iVar14 = *(int *)(*(int *)(uVar3 + 0xc) + -4 + iVar14 * 8);
      local_1c = 0;
      local_38 = uVar21;
      if ((iVar7 == iVar14) ||
         (iVar8 = FUN_1001b457(iVar8,*(undefined4 *)(uVar3 + 0x70),iVar7,iVar14,
                               *(undefined4 *)(uVar3 + 0x68),*(undefined4 *)(uVar3 + 0x74),&local_1c
                              ), iVar8 != *(int *)(uVar3 + 8))) {
        *local_30 = iVar8;
        iVar14 = local_1c;
        uVar21 = local_38;
      }
      else {
        iVar14 = local_1c;
        uVar9 = CONCAT31(uVar18,1);
        uVar21 = local_38;
      }
      goto LAB_1001abdd;
    }
    unaff_EBX = local_40 & 0xff;
    param_2 = uVar21;
    local_38 = uVar21;
    if ((*(byte *)(uVar3 + 0x74) & 0x12) != 0) {
      unaff_EBX = 1;
    }
    goto LAB_1001ae55;
  case 0x10:
    param_2 = *(uint *)(param_2 + 0x18);
    if (param_2 != 0) {
      uVar22 = 3;
LAB_1001a6df:
      FUN_1001b358(uVar22,param_2);
    }
    break;
  case 0x12:
    FUN_1001b4dc(param_2);
    uVar4 = local_3c;
    uVar9 = *(uint *)(param_2 + 8);
    piVar16 = (int *)(*(int *)(param_2 + 0x20) * 0x10 + *(int *)(uVar3 + 0x40));
    if (*(int *)(param_2 + 0x24) == 1) {
      iVar14 = FUN_1001b358(4,param_2);
      *piVar16 = iVar14;
      if ((*(int *)(param_2 + 0x14) < 1) &&
         ((((uVar9 & 2) == 0 || (*(char *)(local_3c + 0x87) != '\0')) ||
          (*(int *)(param_2 + 0x18) == 0)))) {
        piVar16[1] = 0;
        uVar21 = *(uint *)(*(int *)(param_2 + 0x1c) + 0xc);
        if (*(int *)(param_2 + 0x18) != 0) {
          uVar22 = 5;
          goto LAB_1001a6df;
        }
      }
      else {
        piVar16[1] = 1;
        if (*(int *)(param_2 + 0x14) == 0) {
          *(undefined4 *)(*(int *)(local_3c + 0x4c) + iVar14 * 0x14) = 6;
        }
      }
    }
    else {
      if (*(int *)(param_2 + 0x14) < 1) {
        if (((uVar9 & 2) != 0) && (*(char *)(local_3c + 0x87) == '\0')) {
          if (*(int *)(param_2 + 0x18) == 0) {
            iVar14 = *(int *)(param_2 + 0x1c);
            goto LAB_1001a79c;
          }
          goto LAB_1001aa57;
        }
        uVar21 = *(uint *)(*(int *)(param_2 + 0x1c) + 0xc);
        if (*(int *)(param_2 + 0x18) == 0) break;
        iVar8 = FUN_1001b358(9,param_2);
        iVar14 = *(int *)(uVar4 + 0x4c);
        *(int *)(iVar14 + 4 + iVar8 * 0x14) = piVar16[1];
        *(int *)(iVar14 + 0x10 + iVar8 * 0x14) = *piVar16;
        piVar16[1] = 0;
      }
      else {
LAB_1001aa57:
        iVar8 = FUN_1001b358(0xb - (uint)(*(int *)(param_2 + 0x14) == 0),param_2);
        iVar14 = *(int *)(uVar4 + 0x4c);
        *(int *)(iVar14 + 4 + iVar8 * 0x14) = piVar16[1];
        *(int *)(iVar14 + 0x10 + iVar8 * 0x14) = *piVar16;
        piVar16[1] = 1;
      }
LAB_1001aa8d:
      *piVar16 = iVar8;
    }
    break;
  case 0x13:
    iVar14 = *(int *)(param_2 + 0x14);
    uVar9 = *(uint *)(iVar14 + 8);
    piVar16 = (int *)(*(int *)(iVar14 + 0x20) * 0x10 + *(int *)(uVar3 + 0x40));
    if ((uVar9 & 0x1000) == 0 && *(int *)(iVar14 + 0x24) == 0) {
      local_2c = *(uint *)(uVar3 + 8);
      iVar8 = piVar16[1];
      local_34 = *(uint *)(*(int *)(uVar3 + 0x4c) + 0xc + *piVar16 * 0x14);
      if (iVar8 < *(int *)(iVar14 + 0x14)) {
        iVar7 = FUN_1001b358(0xb,iVar14);
        iVar8 = *(int *)(uVar3 + 0x4c);
        *(int *)(iVar8 + 4 + iVar7 * 0x14) = piVar16[1];
        *(int *)(iVar8 + 0x10 + iVar7 * 0x14) = *piVar16;
        *piVar16 = iVar7;
        if ((local_34 == local_2c) && (*(int *)(iVar14 + 0x18) < 0)) {
          iVar8 = *(int *)(iVar14 + 0x14);
        }
        else {
          iVar8 = piVar16[1];
LAB_1001a8fc:
          iVar8 = iVar8 + 1;
        }
        piVar16[1] = iVar8;
LAB_1001a900:
        FUN_1001b51c(piVar16[2]);
        uVar21 = *(uint *)(iVar14 + 0xc);
      }
      else if (local_34 == local_2c) {
        local_34 = uVar9;
        if (iVar8 != *(int *)(iVar14 + 0x14)) {
          unaff_EBX = local_40 & 0xff;
          if ((*(byte *)(local_3c + 0x74) & 0x3e) == 0) {
            unaff_EBX = 1;
          }
          param_2 = uVar21;
          if (iVar8 != 1) {
            unaff_EBX = 1;
          }
          goto LAB_1001ae55;
        }
      }
      else if (((uVar9 & 2) == 0) || (*(char *)(local_3c + 0x87) != '\0')) {
        local_34 = uVar9;
        if (iVar8 != *(int *)(iVar14 + 0x18)) {
          iVar8 = FUN_1001b358(9,iVar14);
          iVar14 = *(int *)(uVar4 + 0x4c);
          *(int *)(iVar14 + 4 + iVar8 * 0x14) = piVar16[1];
          *(int *)(iVar14 + 0x10 + iVar8 * 0x14) = *piVar16;
          goto LAB_1001aa8d;
        }
      }
      else {
        local_34 = uVar9;
        if (iVar8 != *(int *)(iVar14 + 0x18)) {
          iVar7 = FUN_1001b358(10,iVar14);
          iVar8 = *(int *)(uVar4 + 0x4c);
          *(int *)(iVar8 + 4 + iVar7 * 0x14) = piVar16[1];
          *(int *)(iVar8 + 0x10 + iVar7 * 0x14) = *piVar16;
          *piVar16 = iVar7;
          iVar8 = piVar16[1];
          if (iVar8 != 0x7fffffff) goto LAB_1001a8fc;
          goto LAB_1001a900;
        }
      }
    }
    else {
      iVar8 = *piVar16;
      if (piVar16[1] == 1) {
        iVar7 = *(int *)(local_3c + 0x4c);
        iVar13 = *(int *)(local_3c + 8) - *(int *)(iVar7 + 0xc + iVar8 * 0x14);
        piVar16[3] = iVar13;
        if (iVar13 == 0) {
          local_34 = uVar9;
          if ((*(byte *)(local_3c + 0x74) & 0x3e) != 0) break;
          unaff_EBX = local_40 & 0xff;
          param_2 = uVar21;
          if (*(int *)(iVar14 + 0x14) == 0) {
            unaff_EBX = 1;
          }
          goto LAB_1001ae55;
        }
        local_34 = uVar9;
        iVar8 = FUN_1001b358(((*(int *)(iVar7 + iVar8 * 0x14) - 6U & 0xfffffffb) == 0) * '\x04' +
                             '\x04',iVar14);
        *(int *)(*(int *)(uVar4 + 0x4c) + 0x10 + iVar8 * 0x14) = *piVar16;
        *piVar16 = iVar8;
        uVar9 = local_34;
      }
      else {
        *(int *)(local_3c + 0x5c) = iVar8 + 1;
      }
      iVar8 = piVar16[1];
      if (iVar8 < *(int *)(iVar14 + 0x14)) {
        uVar21 = *(uint *)(iVar14 + 0xc);
        piVar16[1] = iVar8 + 1;
      }
      else if (((uVar9 & 2) == 0) || (*(char *)(local_3c + 0x87) != '\0')) {
        if (iVar8 == *(int *)(iVar14 + 0x18)) {
          *(int *)(local_3c + 0x5c) = *(int *)(local_3c + 0x5c) + -1;
        }
        else {
          iVar8 = *piVar16;
          iVar7 = *(int *)(local_3c + 0x4c);
          *(undefined4 *)(iVar7 + 0xc + iVar8 * 0x14) = *(undefined4 *)(local_3c + 8);
          *(undefined4 *)(iVar7 + iVar8 * 0x14) = 5;
          *(int *)(iVar7 + 8 + iVar8 * 0x14) = iVar14;
        }
      }
      else {
        piVar10 = (int *)(*(int *)(local_3c + 0x4c) + *piVar16 * 0x14);
        if (*piVar10 == 4) {
          *piVar10 = 8;
          iVar8 = piVar10[4];
          iVar7 = *(int *)(local_3c + 8);
          iVar13 = *(int *)(local_3c + 0x4c);
          *(int *)(iVar13 + 0xc + iVar8 * 0x14) = iVar7;
          *(int *)(iVar13 + 0xc + iVar8 * 0x14) = iVar7 - piVar16[3];
          local_38 = uVar21;
        }
        iVar8 = *local_30;
        piVar10[3] = iVar8;
        iVar7 = piVar16[1];
        if (iVar7 == *(int *)(iVar14 + 0x18)) {
          iVar8 = iVar8 - piVar16[3];
          piVar10[3] = iVar8;
          unaff_EBX = local_40;
          if (iVar8 == *(int *)(*(int *)(local_3c + 0x4c) + 0xc + piVar10[4] * 0x14)) {
            *(int *)(local_3c + 0x5c) = *(int *)(local_3c + 0x5c) + -1;
            param_2 = uVar21;
          }
          else {
            *piVar10 = 7;
            param_2 = uVar21;
          }
          goto LAB_1001ae55;
        }
        uVar21 = *(uint *)(iVar14 + 0xc);
        if (iVar7 != 0x7fffffff) {
          piVar16[1] = iVar7 + 1;
        }
      }
    }
    break;
  case 0x15:
    uVar9 = (uint)*(ushort *)(uVar3 + 0x78);
    if (((*(ushort *)(uVar3 + 0x78) & 0x2020) != 0) &&
       (uVar9 = *(uint *)(uVar3 + 0x6c), uVar9 == *(uint *)(uVar3 + 8))) {
      uVar15 = CONCAT31(uVar17,1);
      goto LAB_1001ae6b;
    }
    if (*(char *)(uVar3 + 0x88) == '\x01') {
      uVar9 = *(uint *)(local_3c + 8);
      uVar15 = CONCAT31(uVar17,1);
      if (uVar9 != *(uint *)(local_3c + 0x70)) goto LAB_1001ae6b;
    }
    if (*(char *)(local_3c + 0x87) != '\x01') {
      uVar9 = CONCAT31((int3)(uVar9 >> 8),1);
      goto LAB_1001b0b1;
    }
    if ((*(char *)(local_3c + 0x86) != '\x01') ||
       (cVar6 = FUN_1001b57a(), uVar15 = local_40, cVar6 != '\0')) {
      FUN_1001b646(local_30);
      *(undefined1 *)(uVar4 + 0x86) = 1;
      uVar15 = local_40;
    }
    goto LAB_1001ae6b;
  }
  unaff_EBX = local_40;
  param_2 = uVar21;
LAB_1001ae55:
  uVar15 = unaff_EBX;
  if (((unaff_EBX & 1) == 0) && (local_40 = 0, param_2 != 0)) goto LAB_1001a4e4;
LAB_1001ae6b:
  iVar14 = *(int *)(local_3c + 0x5c);
  unaff_EBX = local_3c;
  local_40 = uVar15;
  if (iVar14 == 0) goto LAB_1001b0ac;
  do {
    iVar14 = iVar14 + -1;
    *(int *)(unaff_EBX + 0x5c) = iVar14;
    iVar8 = *(int *)(*(int *)(unaff_EBX + 0x4c) + iVar14 * 0x14);
    if (0xe < iVar8 - 1U) goto LAB_1001b0a5;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBX + 0x4c) + iVar14 * 0x14);
    param_2 = 0;
    switch(iVar8) {
    case 2:
      *local_30 = puVar2[3];
      param_2 = *(uint *)(puVar2[2] + 0xc);
      goto LAB_1001b071;
    case 3:
      iVar14 = puVar2[2];
      param_2 = *(uint *)(iVar14 + 0xc);
      *local_30 = puVar2[3];
      iVar14 = *(int *)(iVar14 + 0x18);
      if (iVar14 == 0) goto LAB_1001b071;
      puVar2[2] = iVar14;
      goto LAB_1001afd5;
    case 5:
      param_2 = *(uint *)(puVar2[2] + 0xc);
      iVar8 = *(int *)(puVar2[2] + 0x20) * 0x10;
      *(undefined4 *)(unaff_EBX + 8) = puVar2[3];
      iVar14 = *(int *)(*(int *)(unaff_EBX + 0x40) + 4 + iVar8);
      if (iVar14 != 0x7fffffff) {
        *(int *)(*(int *)(unaff_EBX + 0x40) + iVar8 + 4) = iVar14 + 1;
      }
      goto LAB_1001b071;
    case 6:
      param_2 = *(uint *)(*(int *)(puVar2[2] + 0x1c) + 0xc);
      *local_30 = puVar2[3];
      goto LAB_1001b071;
    case 7:
      iVar8 = puVar2[4] + 1;
      if (iVar8 != iVar14) {
        iVar7 = *(int *)(puVar2[2] + 0x20);
        iVar13 = *(int *)(unaff_EBX + 0x40);
        iVar14 = puVar2[4] * 0x14 + 0x18;
        do {
          piVar16 = (int *)(*(int *)(*(int *)(local_3c + 0x4c) + iVar14) * 8 +
                            *(int *)(local_3c + 0xc) +
                           (uint)(*(int *)(*(int *)(local_3c + 0x4c) + -4 + iVar14) != 0xc) * 4);
          *piVar16 = *piVar16 - *(int *)(iVar7 * 0x10 + iVar13 + 0xc);
          iVar8 = iVar8 + 1;
          iVar14 = iVar14 + 0x14;
          unaff_EBX = local_3c;
        } while (iVar8 != *(int *)(local_3c + 0x5c));
      }
    case 8:
      iVar14 = puVar2[2];
      iVar8 = puVar2[3];
      param_2 = *(uint *)(*(int *)(iVar14 + 0x1c) + 0xc);
      *(int *)(unaff_EBX + 8) = iVar8;
      iVar8 = iVar8 - *(int *)(*(int *)(unaff_EBX + 0x40) + 0xc + *(int *)(iVar14 + 0x20) * 0x10);
      puVar2[3] = iVar8;
      if (*(int *)(*(int *)(unaff_EBX + 0x4c) + 0xc + puVar2[4] * 0x14) != iVar8) {
        *puVar2 = 7;
LAB_1001afd5:
        *(int *)(unaff_EBX + 0x5c) = *(int *)(unaff_EBX + 0x5c) + 1;
      }
      goto LAB_1001b071;
    case 9:
      param_2 = *(uint *)(puVar2[2] + 0xc);
      iVar8 = *(int *)(puVar2[2] + 0x20) * 0x10;
      iVar14 = *(int *)(unaff_EBX + 0x40) + iVar8;
      *(undefined4 *)(unaff_EBX + 8) = puVar2[3];
      iVar8 = *(int *)(*(int *)(unaff_EBX + 0x40) + 4 + iVar8);
      if (iVar8 != 0x7fffffff) {
        *(int *)(iVar14 + 4) = iVar8 + 1;
      }
      *puVar2 = 0xb;
      *(int *)(unaff_EBX + 0x5c) = *(int *)(unaff_EBX + 0x5c) + 1;
      FUN_1001b51c(*(undefined4 *)(iVar14 + 8));
LAB_1001b071:
      local_40 = 0;
      break;
    case 10:
      param_2 = *(uint *)(*(int *)(puVar2[2] + 0x1c) + 0xc);
      *local_30 = puVar2[3];
      local_40 = 0;
    case 0xb:
      iVar14 = *(int *)(unaff_EBX + 0x40);
      iVar8 = *(int *)(puVar2[2] + 0x20) * 0x10;
      *(undefined4 *)(iVar14 + 4 + iVar8) = puVar2[1];
      *(undefined4 *)(iVar14 + iVar8) = puVar2[4];
      break;
    case 0xc:
      *(undefined4 *)(*(int *)(unaff_EBX + 0xc) + puVar2[1] * 8) = puVar2[3];
      break;
    case 0xd:
      bVar5 = (byte)puVar2[1] & 0x1f;
      puVar1 = (uint *)(*local_28 + ((uint)puVar2[1] >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    case 0xe:
      *(undefined4 *)(*(int *)(unaff_EBX + 0xc) + 4 + puVar2[1] * 8) = puVar2[3];
      break;
    case 0xf:
      puVar1 = (uint *)(*local_28 + ((uint)puVar2[1] >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)puVar2[1] & 0x1f);
    }
    iVar14 = *(int *)(unaff_EBX + 0x5c);
  } while ((iVar14 != 0) && (param_2 == 0));
  if (param_2 == 0) goto LAB_1001b0ac;
  goto LAB_1001a4e4;
LAB_1001b0ac:
  uVar9 = local_40 ^ 1;
LAB_1001b0b1:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar9 & 0xffffff01;
}

