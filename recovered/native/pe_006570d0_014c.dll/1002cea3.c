/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002cea3 */

int FUN_1002cea3(double param_1,uint param_2,uint *param_3,char param_4,int *param_5)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  int local_80;
  uint local_74;
  uint local_70;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_24 [3];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar15 = *param_3 & 7;
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    if ((int)param_2 < 1 || uVar15 != 2) {
      iVar5 = param_5[1];
      uVar15 = iVar5 + 1;
      if ((uint)param_5[2] < uVar15) {
        (*(code *)param_5[3])(param_5,uVar15);
        iVar5 = param_5[1];
        uVar15 = iVar5 + 1;
      }
      param_5[1] = uVar15;
      *(undefined1 *)(*param_5 + iVar5) = 0x30;
      iVar5 = 0;
    }
    else {
      uVar15 = param_5[2];
      if (uVar15 < param_2) {
        (*(code *)param_5[3])(param_5,param_2);
        uVar15 = param_5[2];
      }
      if (param_2 < uVar15) {
        uVar15 = param_2;
      }
      param_5[1] = uVar15;
      _memset((void *)*param_5,0x30,param_2);
      iVar5 = -param_2;
    }
    goto LAB_1002d679;
  }
  local_58 = SUB84(param_1,0);
  uStack_54 = (uint)((ulonglong)param_1 >> 0x20);
  uVar30 = uStack_54 & 0xfffff;
  uVar4 = uStack_54 >> 0x14 & 0x7ff;
  if (uVar4 == 0) {
    if (((ulonglong)param_1 & 0xfffff00000000) == 0) {
      uVar21 = 0x1f;
      if (local_58 != 0) {
        for (; local_58 >> uVar21 == 0; uVar21 = uVar21 - 1) {
        }
      }
      uVar7 = 0x3f;
      if (local_58 != 0) {
        uVar7 = uVar21 ^ 0x1f | 0x20;
      }
    }
    else {
      uVar21 = 0x1f;
      if (((ulonglong)param_1 & 0xfffff00000000) != 0) {
        for (; uVar30 >> uVar21 == 0; uVar21 = uVar21 - 1) {
        }
      }
      uVar7 = uVar21 ^ 0x1f;
    }
    iVar5 = -0x427 - uVar7;
    bVar12 = (char)uVar7 - 10;
    uVar7 = local_58 << (bVar12 & 0x1f);
    uVar21 = 0;
    if ((bVar12 & 0x20) == 0) {
      uVar21 = uVar7;
      uVar7 = uVar30 << (bVar12 & 0x1f) | local_58 >> 0x20 - (bVar12 & 0x1f);
    }
  }
  else {
    iVar5 = uVar4 - 0x433;
    uVar21 = local_58 * 2;
    uVar7 = uVar30 << 1 | local_58 >> 0x1f | 0x200000;
  }
  iVar16 = iVar5 * 0x4d105 >> 0x14;
  iVar14 = 2 - iVar16;
  uVar23 = ((uint)(iVar14 * 0x1a934f) >> 0x13) + iVar5;
  FUN_1002a086(&local_38,iVar14);
  bVar13 = (byte)uVar23;
  bVar12 = bVar13 & 0x1f;
  uVar25 = uVar21 << (bVar13 & 0x1f);
  uVar26 = uVar25;
  uVar21 = uVar7 << bVar12 | uVar21 >> 0x20 - bVar12;
  if ((uVar23 & 0x20) != 0) {
    uVar26 = 0;
    uVar21 = uVar25;
  }
  uVar6 = (uint)((ulonglong)uVar21 * (ulonglong)local_2c);
  uVar17 = (uint)((ulonglong)uVar21 * (ulonglong)local_30 >> 0x20);
  uVar7 = (uint)((ulonglong)uVar21 * (ulonglong)local_30);
  uVar23 = (uint)((ulonglong)uVar26 * (ulonglong)local_30 >> 0x20);
  uVar8 = (uint)((ulonglong)uVar26 * (ulonglong)local_30);
  uVar25 = uVar23 + uVar7;
  uVar9 = (uint)CARRY4(uVar23,uVar7);
  uVar27 = uVar17 + uVar6;
  local_70 = (uint)((ulonglong)uVar26 * (ulonglong)local_2c >> 0x20);
  uVar28 = uVar27 + local_70;
  local_74 = (uint)((ulonglong)uVar26 * (ulonglong)local_2c);
  uVar18 = uVar25 + local_74;
  uVar23 = (uint)CARRY4(uVar25,local_74);
  uVar25 = uVar28 + uVar9;
  uVar29 = uVar25 + uVar23;
  lVar2 = (ulonglong)uVar21 * (ulonglong)local_38 +
          ((ulonglong)uVar26 * (ulonglong)local_38 >> 0x20);
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar19 = (uint)((ulonglong)uVar26 * (ulonglong)local_34 >> 0x20);
  uVar26 = (uint)CARRY4((uint)((ulonglong)uVar26 * (ulonglong)local_34),(uint)lVar2);
  uVar20 = uVar19 + uVar7;
  uVar24 = uVar20 + uVar26;
  uVar10 = (uint)((ulonglong)uVar21 * (ulonglong)local_34);
  uVar11 = uVar10 + uVar24;
  uVar20 = (int)((ulonglong)uVar21 * (ulonglong)local_34 >> 0x20) +
           (uint)(CARRY4(uVar19,uVar7) || CARRY4(uVar20,uVar26)) + (uint)CARRY4(uVar10,uVar24);
  iVar5 = uVar11 + uVar8;
  uVar7 = (uint)CARRY4(uVar11,uVar8);
  uVar26 = uVar20 + uVar18;
  iVar14 = uVar26 + uVar7;
  uVar7 = (uint)(CARRY4(uVar20,uVar18) || CARRY4(uVar26,uVar7));
  uVar20 = uVar29 + uVar7;
  uVar26 = (int)((ulonglong)uVar21 * (ulonglong)local_2c >> 0x20) + (uint)CARRY4(uVar17,uVar6) +
           (uint)CARRY4(uVar27,local_70) + (uint)(CARRY4(uVar28,uVar9) || CARRY4(uVar25,uVar23)) +
           (uint)CARRY4(uVar29,uVar7);
  bVar31 = 0xde0b6b3 - uVar26 < (uint)(0xa763ffff < uVar20);
  local_24[0] = (0xde0b6b3 < uVar26 || bVar31) + 0x12;
  uVar7 = (uint)((ulonglong)uVar20 * 10);
  uVar21 = (int)((ulonglong)uVar20 * 10 >> 0x20) + uVar26 * 10;
  if (0xde0b6b3 < uVar26 || bVar31) {
    uVar7 = uVar20;
    uVar21 = uVar26;
  }
  iVar16 = iVar16 + -2;
  if (uVar15 == 2) {
    uVar26 = iVar16 + local_24[0];
    if ((int)(uVar26 ^ 0x7fffffff) < (int)param_2 && 0 < (int)uVar26) {
      FUN_10025774();
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_24,&DAT_103607ac);
    }
    param_2 = param_2 + uVar26;
  }
  if (local_24[0] - param_2 == 0 || local_24[0] < (int)param_2) {
    local_24[0] = local_24[0] + iVar16 + -1;
    if (param_4 == '\0') {
      uVar21 = uVar30 + 0xfffff + (uint)(local_58 != 0) + (uint)(0xfffffffe < local_58 - 1);
      local_80 = uVar4 - 0x433;
      if (uVar4 == 0) {
        uVar21 = uVar30;
        local_80 = -0x432;
      }
      bVar32 = local_58 == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0;
      bVar31 = uVar4 < 2;
    }
    else {
      uVar30 = (uint)(float)param_1 & 0x7fffff;
      uVar4 = (uint)(float)param_1 & 0x7f800000;
      local_80 = (uVar4 >> 0x17) - 0x96;
      uVar21 = 0;
      local_58 = uVar30 + 0x800000;
      if (uVar4 == 0) {
        local_58 = uVar30;
        local_80 = -0x95;
      }
      bVar32 = uVar30 == 0;
      bVar31 = uVar4 < 0x1000000;
    }
    bVar12 = (!bVar31 & bVar32) + 4;
    if (uVar15 != 2) {
      bVar12 = !bVar31 & bVar32;
    }
    uVar4 = 0x2ff;
    if (param_2 < 0x2ff) {
      uVar4 = param_2;
    }
    FUN_1002eb42(local_58,uVar21,0,0,CONCAT44(uStack_3c,local_80),bVar12,uVar4,param_5,local_24);
  }
  else if ((int)param_2 < 1) {
    local_24[0] = iVar16 + local_24[0];
    if ((int)param_2 < 0) {
      param_5[1] = 0;
    }
    else {
      if (param_5[2] == 0) {
        (*(code *)param_5[3])(param_5,1);
        uVar4 = (uint)(param_5[2] != 0);
      }
      else {
        uVar4 = 1;
      }
      param_5[1] = uVar4;
      if (uVar21 < 0x45639182 ||
          uVar21 + 0xba9c6e7e < (uint)((uVar7 | (iVar5 != 0 || iVar14 != 0)) < 0x44f40001)) {
        *(undefined1 *)*param_5 = 0x30;
      }
      else {
        *(undefined1 *)*param_5 = 0x31;
      }
    }
  }
  else {
    local_24[0] = (local_24[0] - param_2) + iVar16;
    lVar2 = (ulonglong)uVar21 * 0x5ef6eae0 + ((ulonglong)uVar7 * 0x5ef6eae0 >> 0x20);
    uVar26 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar23 = (uint)((ulonglong)uVar7 * 0x6df37f67 >> 0x20);
    uVar4 = (uint)CARRY4((uint)((ulonglong)uVar7 * 0x6df37f67),(uint)lVar2);
    uVar30 = uVar23 + uVar26;
    uVar26 = (int)((ulonglong)uVar21 * 0x6df37f67 >> 0x20) +
             (uint)(CARRY4(uVar23,uVar26) || CARRY4(uVar30,uVar4)) +
             (uint)CARRY4((uint)((ulonglong)uVar21 * 0x6df37f67),uVar30 + uVar4);
    uVar30 = (uint)((ulonglong)uVar26 * 0xabf41c00);
    uVar4 = uVar30 + uVar7;
    uVar21 = (int)((ulonglong)uVar26 * 0xabf41c00 >> 0x20) + uVar26 * -3 + uVar21 +
             (uint)CARRY4(uVar30,uVar7);
    uVar30 = 9;
    if (param_2 < 9) {
      uVar30 = param_2;
    }
    pcVar1 = (char *)*param_5;
    if ((uVar30 & 1) == 0) {
      uVar3 = (ulonglong)uVar26 * 0x1ad7f29b >> 0x14;
      uVar7 = (uint)uVar3;
      iVar16 = (int)(uVar3 >> 0x20) + (uint)(0xfffffffe < uVar7);
      *(undefined2 *)pcVar1 = *(undefined2 *)(&DAT_102903d0 + iVar16 * 2);
      uVar26 = 2;
    }
    else {
      uVar3 = (ulonglong)uVar26 * 0x2af31dc5 >> 0x18;
      uVar7 = (uint)uVar3;
      iVar16 = (int)(uVar3 >> 0x20) + (uint)(0xfffffffe < uVar7);
      *pcVar1 = (char)iVar16 + '0';
      uVar26 = 1;
    }
    uVar7 = uVar7 + 1;
    lVar2 = CONCAT44(iVar16,uVar7);
    uVar23 = param_2;
    if (uVar26 < param_2) {
      do {
        lVar2 = (ulonglong)uVar7 * 100;
        uVar25 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar7 = (uint)lVar2;
        *(undefined2 *)(pcVar1 + uVar26) = *(undefined2 *)(&DAT_102903d0 + uVar25 * 2);
        uVar26 = uVar26 + 2;
      } while (uVar26 < uVar30);
      if (9 < param_2) {
        uVar7 = (uint)((ulonglong)uVar4 * 0x9999999a >> 0x20);
        uVar30 = (uint)((ulonglong)uVar21 * 0x9999999a);
        uVar21 = uVar21 * 0x19999999 +
                 (int)((ulonglong)uVar4 * 0x19999999 >> 0x20) +
                 (int)((ulonglong)uVar21 * 0x9999999a >> 0x20) + (uint)CARRY4(uVar30,uVar7) +
                 (uint)CARRY4((uint)((ulonglong)uVar4 * 0x19999999),uVar30 + uVar7);
        uVar30 = param_2 - 9;
        iVar16 = *param_5;
        if ((uVar30 & 1) == 0) {
          uVar3 = (ulonglong)uVar21 * 0x1ad7f29b >> 0x14;
          uVar7 = (uint)uVar3;
          iVar22 = (int)(uVar3 >> 0x20) + (uint)(0xfffffffe < uVar7);
          *(undefined2 *)(iVar16 + 9) = *(undefined2 *)(&DAT_102903d0 + iVar22 * 2);
          uVar26 = 2;
        }
        else {
          uVar3 = (ulonglong)uVar21 * 0x2af31dc5 >> 0x18;
          uVar7 = (uint)uVar3;
          iVar22 = (int)(uVar3 >> 0x20) + (uint)(0xfffffffe < uVar7);
          *(char *)(iVar16 + 9) = (char)iVar22 + '0';
          uVar26 = 1;
        }
        uVar7 = uVar7 + 1;
        lVar2 = CONCAT44(iVar22,uVar7);
        uVar4 = uVar4 + uVar21 * -10;
        if (uVar26 < uVar30) {
          do {
            lVar2 = (ulonglong)uVar7 * 100;
            uVar25 = (uint)((ulonglong)lVar2 >> 0x20);
            uVar7 = (uint)lVar2;
            *(undefined2 *)(iVar16 + 9 + uVar26) = *(undefined2 *)(&DAT_102903d0 + uVar25 * 2);
            uVar26 = uVar26 + 2;
          } while ((int)uVar26 < (int)uVar30);
          if (0x11 < param_2) {
            if (uVar4 < 6) {
              uVar23 = 0x12;
              if (uVar4 == 5) goto LAB_1002d5c0;
              goto LAB_1002d621;
            }
            goto LAB_1002d5cf;
          }
        }
        if (((uint)lVar2 < *(uint *)(&DAT_1035a778 + (0x11 - param_2) * 4)) &&
           (((uint)lVar2 >> 0x1f &
            ((uint)((ulonglong)lVar2 >> 0x20) | (uint)(uVar4 != 0 || (iVar5 != 0 || iVar14 != 0))))
            == 0)) goto LAB_1002d621;
LAB_1002d5cf:
        pcVar1 = (char *)(*param_5 + -1 + param_2);
        *pcVar1 = *pcVar1 + '\x01';
LAB_1002d5d9:
        uVar4 = param_2 + 1;
        do {
          if (*(char *)(*param_5 + -2 + uVar4) < ':') break;
          *(undefined1 *)(*param_5 + -2 + uVar4) = 0x30;
          pcVar1 = (char *)(*param_5 + -3 + uVar4);
          *pcVar1 = *pcVar1 + '\x01';
          uVar4 = uVar4 - 1;
        } while (2 < uVar4);
        goto LAB_1002d5f8;
      }
      if (param_2 != 9) goto LAB_1002d4cc;
      if (1 < uVar21 || 1 - uVar21 < (uint)(0x2a05f200 < uVar4)) goto LAB_1002d5cf;
      uVar23 = 9;
      if (uVar21 == 1 && uVar4 == 0x2a05f200) {
LAB_1002d5c0:
        if ((iVar5 != 0 || iVar14 != 0) || ((uVar25 & 1) != 0)) goto LAB_1002d5cf;
      }
    }
    else {
LAB_1002d4cc:
      if ((*(uint *)(&DAT_1035a778 + (8 - uVar30) * 4) <= (uint)lVar2) ||
         ((((uint)((ulonglong)lVar2 >> 0x20) |
           (uint)((uVar21 != 0 || iVar14 != 0) || (uVar4 != 0 || iVar5 != 0))) & (uint)lVar2 >> 0x1f
          ) != 0)) {
        pcVar1 = (char *)(*param_5 + -1 + param_2);
        *pcVar1 = *pcVar1 + '\x01';
        if (param_2 != 1) goto LAB_1002d5d9;
LAB_1002d5f8:
        uVar23 = param_2;
        if ('9' < *(char *)*param_5) {
          *(char *)*param_5 = '1';
          if (uVar15 == 2) {
            *(undefined1 *)(*param_5 + param_2) = 0x30;
            uVar23 = param_2 + 1;
          }
          else {
            local_24[0] = local_24[0] + 1;
          }
        }
      }
    }
LAB_1002d621:
    uVar4 = param_5[2];
    if (uVar4 < uVar23) {
      (*(code *)param_5[3])(param_5,uVar23);
      uVar4 = param_5[2];
    }
    if (uVar23 < uVar4) {
      uVar4 = uVar23;
    }
    param_5[1] = uVar4;
  }
  iVar5 = local_24[0];
  if ((uVar15 != 2) && ((*param_3 & 0x2000) == 0)) {
    uVar15 = param_5[1];
    if (uVar15 != 0) {
      do {
        iVar5 = local_24[0] + 1;
        if (*(char *)(*param_5 + -1 + uVar15) != '0') {
          uVar4 = param_5[2];
          if (uVar4 < uVar15) {
            (*(code *)param_5[3])(param_5,uVar15);
            uVar4 = param_5[2];
          }
          goto LAB_1002d66d;
        }
        uVar15 = uVar15 - 1;
        local_24[0] = iVar5;
      } while (uVar15 != 0);
    }
    uVar4 = param_5[2];
    uVar15 = 0;
LAB_1002d66d:
    if (uVar15 < uVar4) {
      uVar4 = uVar15;
    }
    param_5[1] = uVar4;
    iVar5 = local_24[0];
  }
LAB_1002d679:
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar5;
}

