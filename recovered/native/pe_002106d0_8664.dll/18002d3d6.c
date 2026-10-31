/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002d3d6 */

int FUN_18002d3d6(double param_1,uint param_2,uint *param_3,char param_4,longlong *param_5)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  undefined1 auVar10 [16];
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auStack_d8 [32];
  int *local_b8;
  uint local_b0;
  char local_a9;
  uint *local_a8;
  ulonglong local_a0 [2];
  int local_90;
  ulonglong local_88;
  ulonglong local_80;
  int local_78 [6];
  ulonglong local_60;
  
  uVar23 = (uint)((ulonglong)param_1 >> 0x20);
  uVar22 = (ulonglong)param_2;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_d8;
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    if ((int)param_2 < 1 || (*param_3 & 7) != 2) {
      lVar24 = param_5[1];
      uVar22 = lVar24 + 1;
      if ((ulonglong)param_5[2] < uVar22) {
        (*(code *)param_5[3])(param_5);
        lVar24 = param_5[1];
        uVar22 = lVar24 + 1;
      }
      param_5[1] = uVar22;
      *(undefined1 *)(*param_5 + lVar24) = 0x30;
      iVar19 = 0;
    }
    else {
      uVar21 = param_5[2];
      if (uVar21 < uVar22) {
        (*(code *)param_5[3])(param_5,uVar22);
        uVar21 = param_5[2];
      }
      if (uVar22 < uVar21) {
        uVar21 = uVar22;
      }
      param_5[1] = uVar21;
      FUN_1802a89a0(*param_5,0x30,uVar22);
      iVar19 = -param_2;
    }
    goto LAB_18002da2f;
  }
  uVar16 = uVar23 & 0x7ff00000;
  uVar21 = (ulonglong)param_1 & 0xfffffffffffff;
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
    lVar24 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar19 = 0x35;
    if (uVar21 != 0) {
      iVar19 = ((uint)lVar24 ^ 0x3f) - 10;
    }
    iVar11 = -0x431 - iVar19;
    lVar24 = uVar21 << ((byte)iVar19 & 0x3f);
  }
  else {
    iVar11 = (uVar16 >> 0x14) - 0x433;
    lVar24 = uVar21 * 2 + 0x20000000000000;
  }
  iVar19 = iVar11 * 0x4d105 >> 0x14;
  iVar20 = iVar19 + -2;
  local_b0 = *param_3 & 7;
  local_a9 = param_4;
  local_a8 = param_3;
  FUN_18002a842(&local_88);
  uVar26 = local_b0;
  uVar25 = lVar24 << ((char)((uint)((2 - iVar19) * 0x1a934f) >> 0x13) + (char)iVar11 & 0x3fU);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar25;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_80;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar25;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_88;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = SUB168(auVar4 * auVar8,8);
  auVar10 = auVar3 * auVar7 + auVar10;
  lVar24 = auVar10._0_8_;
  uVar15 = auVar10._8_8_;
  uVar25 = uVar15 * 10;
  if (999999999999999999 < uVar15) {
    uVar25 = uVar15;
  }
  uVar12 = 999999999999999999 < uVar15 | 0x12;
  if (local_b0 == 2) {
    uVar18 = uVar12 + iVar20;
    if ((int)(uVar18 ^ 0x7fffffff) < (int)param_2 && 0 < (int)uVar18) {
      FUN_180025c48(local_78,"number is too big");
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_78,&DAT_180391580);
    }
    uVar22 = (ulonglong)(uVar18 + param_2);
  }
  uVar18 = (uint)uVar22;
  if (uVar12 - uVar18 == 0 || (int)uVar12 < (int)uVar18) {
    local_78[0] = uVar12 + iVar20 + -1;
    if (local_a9 == '\0') {
      bVar27 = ((ulonglong)param_1 & 0x7ff0000000000000) == 0;
      local_a0[0] = uVar21 + 0x10000000000000;
      if (bVar27) {
        local_a0[0] = uVar21;
      }
      local_90 = -0x432;
      if (!bVar27) {
        local_90 = (uVar16 >> 0x14) - 0x433;
      }
      bVar28 = uVar21 == 0;
      bVar27 = ((ulonglong)uVar23 & 0x7ff00000) >> 0x15 != 0;
    }
    else {
      uVar16 = (uint)(float)param_1 & 0x7fffff;
      uVar23 = (uint)(float)param_1 & 0x7f800000;
      local_a0[0] = (ulonglong)uVar16 + 0x800000;
      if (uVar23 == 0) {
        local_a0[0] = (ulonglong)uVar16;
      }
      local_90 = -0x95;
      if (uVar23 != 0) {
        local_90 = (uVar23 >> 0x17) - 0x96;
      }
      bVar28 = uVar16 == 0;
      bVar27 = 0xffffff < uVar23;
    }
    bVar9 = (bVar27 & bVar28) + 4;
    if (local_b0 != 2) {
      bVar9 = bVar27 & bVar28;
    }
    uVar21 = 0x2ff;
    if (uVar18 < 0x2ff) {
      uVar21 = uVar22;
    }
    local_a0[1] = 0;
    local_b8 = local_78;
    FUN_18002f179(local_a0,bVar9,uVar21,param_5);
  }
  else if ((int)uVar18 < 1) {
    local_78[0] = iVar20 + uVar12;
    if ((int)uVar18 < 0) {
      param_5[1] = 0;
    }
    else {
      uVar22 = 1;
      if (param_5[2] == 0) {
        (*(code *)param_5[3])(param_5,1);
        uVar22 = (ulonglong)(param_5[2] != 0);
      }
      param_5[1] = uVar22;
      uVar26 = local_b0;
      if ((uVar25 | lVar24 != 0) < 0x4563918244f40001) {
        *(undefined1 *)*param_5 = 0x30;
      }
      else {
        *(undefined1 *)*param_5 = 0x31;
      }
    }
  }
  else {
    local_78[0] = (uVar12 - uVar18) + iVar20;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar25;
    uVar15 = SUB168(auVar5 * ZEXT816(0x6df37f675ef6eae0),8) >> 0x20;
    uVar21 = 9;
    if (uVar18 < 9) {
      uVar21 = uVar22;
    }
    pcVar1 = (char *)*param_5;
    if ((uVar21 & 1) == 0) {
      uVar13 = (uVar15 * 0x1ad7f29b >> 0x14) + 1;
      uVar17 = uVar13 >> 0x20;
      *(undefined2 *)pcVar1 = *(undefined2 *)(&DAT_1802b1ce0 + uVar17 * 2);
      uVar23 = 2;
    }
    else {
      uVar13 = (uVar15 * 0x2af31dc5 >> 0x18) + 1;
      uVar17 = uVar13 >> 0x20;
      *pcVar1 = (char)(uVar13 >> 0x20) + '0';
      uVar23 = 1;
    }
    uVar25 = uVar15 * -10000000000 + uVar25;
    uVar16 = uVar18;
    if (uVar23 < uVar18) {
      uVar15 = (ulonglong)uVar23;
      do {
        uVar13 = (uVar13 & 0xffffffff) * 100;
        uVar17 = uVar13 >> 0x20;
        *(undefined2 *)(pcVar1 + uVar15) = *(undefined2 *)(&DAT_1802b1ce0 + uVar17 * 2);
        uVar15 = uVar15 + 2;
      } while (uVar15 < uVar21);
      if (9 < uVar18) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar25;
        uVar23 = uVar18 - 9;
        lVar2 = *param_5;
        uVar21 = SUB168(auVar6 * ZEXT816(0x199999999999999a),8) & 0xffffffff;
        if ((uVar23 & 1) == 0) {
          uVar21 = (uVar21 * 0x1ad7f29b >> 0x14) + 1;
          uVar17 = uVar21 >> 0x20;
          *(undefined2 *)(lVar2 + 9) = *(undefined2 *)(&DAT_1802b1ce0 + uVar17 * 2);
          uVar12 = 2;
        }
        else {
          uVar21 = (uVar21 * 0x2af31dc5 >> 0x18) + 1;
          uVar17 = uVar21 >> 0x20;
          *(char *)(lVar2 + 9) = (char)(uVar21 >> 0x20) + '0';
          uVar12 = 1;
        }
        uVar14 = (int)uVar25 + SUB164(auVar6 * ZEXT816(0x199999999999999a),8) * -10;
        if (uVar12 < uVar23) {
          uVar25 = (ulonglong)uVar12;
          do {
            uVar21 = (uVar21 & 0xffffffff) * 100;
            uVar17 = uVar21 >> 0x20;
            *(undefined2 *)(lVar2 + 9 + uVar25) = *(undefined2 *)(&DAT_1802b1ce0 + uVar17 * 2);
            uVar25 = uVar25 + 2;
          } while (uVar25 < uVar23);
          if (0x11 < uVar18) {
            if (uVar14 < 6) {
              uVar23 = 0x12;
              uVar16 = 0x12;
              if (uVar14 == 5) goto LAB_18002d94d;
              goto LAB_18002d9b6;
            }
            goto LAB_18002d957;
          }
        }
        if (((uint)uVar21 < *(uint *)(&DAT_1803878f0 + (ulonglong)(0x11 - uVar18) * 4)) &&
           (((uint)uVar21 >> 0x1f & ((uint)uVar17 | (uint)(uVar14 != 0 || lVar24 != 0))) == 0))
        goto LAB_18002d9b6;
LAB_18002d957:
        pcVar1 = (char *)(*param_5 + -1 + uVar22);
        *pcVar1 = *pcVar1 + '\x01';
LAB_18002d961:
        uVar25 = uVar22 - 1;
        do {
          uVar21 = uVar22;
          if (*(char *)(*param_5 + (uVar25 & 0xffffffff)) < ':') break;
          *(undefined1 *)(*param_5 + (uVar25 & 0xffffffff)) = 0x30;
          pcVar1 = (char *)(*param_5 + -1 + uVar25);
          *pcVar1 = *pcVar1 + '\x01';
          uVar25 = uVar25 - 1;
        } while (2 < (int)uVar25 + 2);
        goto LAB_18002d98e;
      }
      if (uVar18 != 9) goto LAB_18002d809;
      if (5000000000 < uVar25) goto LAB_18002d957;
      uVar23 = 9;
      uVar16 = 9;
      if (uVar25 == 5000000000) {
LAB_18002d94d:
        if ((lVar24 != 0) || (uVar16 = uVar23, (uVar17 & 1) != 0)) goto LAB_18002d957;
      }
    }
    else {
LAB_18002d809:
      if ((*(uint *)(&DAT_1803878f0 + (longlong)(8 - (int)uVar21) * 4) <= (uint)uVar13) ||
         ((((uint)uVar17 | (uint)(uVar25 != 0 || lVar24 != 0)) & (uint)uVar13 >> 0x1f) != 0)) {
        pcVar1 = (char *)(*param_5 + -1 + uVar22);
        *pcVar1 = *pcVar1 + '\x01';
        uVar21 = 1;
        if (uVar18 != 1) goto LAB_18002d961;
LAB_18002d98e:
        uVar16 = uVar18;
        if ('9' < *(char *)*param_5) {
          *(char *)*param_5 = '1';
          if (local_b0 == 2) {
            *(undefined1 *)(*param_5 + uVar21) = 0x30;
            uVar16 = uVar18 + 1;
          }
          else {
            local_78[0] = local_78[0] + 1;
          }
        }
      }
    }
LAB_18002d9b6:
    uVar21 = (ulonglong)uVar16;
    uVar22 = param_5[2];
    if (uVar22 < uVar21) {
      (*(code *)param_5[3])(param_5,uVar21);
      uVar22 = param_5[2];
    }
    if (uVar21 < uVar22) {
      uVar22 = uVar21;
    }
    param_5[1] = uVar22;
  }
  iVar19 = local_78[0];
  if ((uVar26 != 2) && ((*local_a8 & 0x2000) == 0)) {
    uVar22 = param_5[1];
    if (uVar22 != 0) {
      do {
        iVar19 = local_78[0] + 1;
        if (*(char *)(*param_5 + -1 + uVar22) != '0') {
          uVar21 = param_5[2];
          if (uVar21 < uVar22) {
            (*(code *)param_5[3])(param_5,uVar22);
            uVar21 = param_5[2];
          }
          goto LAB_18002da1f;
        }
        uVar22 = uVar22 - 1;
        local_78[0] = iVar19;
      } while (uVar22 != 0);
    }
    uVar21 = param_5[2];
    uVar22 = 0;
LAB_18002da1f:
    if (uVar22 < uVar21) {
      uVar21 = uVar22;
    }
    param_5[1] = uVar21;
    iVar19 = local_78[0];
  }
LAB_18002da2f:
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_d8);
  }
  return iVar19;
}

