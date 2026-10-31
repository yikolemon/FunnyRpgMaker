/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018778a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14018778a(int *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [13];
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [15];
  undefined1 auStack_78 [40];
  uint local_50;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar15 = param_1[0x12];
  uVar16 = param_1[0x13];
  uVar17 = param_1[0x14];
  if (param_3 == 0) {
    uVar10 = 0;
    goto LAB_140187aad;
  }
  iVar8 = *param_1;
  uVar14 = 0;
  if (iVar8 == 2) goto LAB_140187a28;
  uVar14 = 0;
  if (iVar8 == 1) {
LAB_1401878e2:
    while (local_50 = uVar17, uVar10 = FUN_140187aed(param_1), uVar17 = local_50, -1 < (int)uVar10)
    {
      while (uVar17 = uVar10, uVar10 = uVar17, uVar17 == 0x100) {
        if (param_1[0xd] == 0) goto LAB_14018793f;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 8) = 1;
        uVar10 = FUN_140187aed(param_1);
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = local_50;
        if ((int)uVar10 < 0) goto LAB_140187aa7;
      }
      if (0xff < uVar17) {
LAB_14018793f:
        if ((uint)param_1[0x10] <= uVar17 - 0x100) {
          if ((uint)param_1[0x10] < uVar17 - 0x100) break;
          uVar10 = param_1[0x1e];
          uVar11 = (ulonglong)uVar10;
          if (*(ulonglong *)(param_1 + 0x20) <= uVar11) {
            iVar8 = FUN_140187bf7(param_1);
            if (iVar8 < 0) break;
            uVar10 = param_1[0x1e];
            uVar11 = (ulonglong)uVar10;
          }
          param_1[0x1e] = uVar10 + 1;
          *(char *)(*(longlong *)(param_1 + 0x1c) + uVar11) = (char)uVar16;
          uVar10 = uVar15;
          if (uVar15 < 0x100) goto LAB_1401879f2;
        }
        lVar12 = *(longlong *)(param_1 + 0x16);
        do {
          if (lVar12 == 0) goto LAB_140187aa7;
          uVar13 = param_1[0x1e];
          uVar11 = (ulonglong)uVar13;
          if (*(ulonglong *)(param_1 + 0x20) <= uVar11) {
            iVar8 = FUN_140187bf7(param_1);
            if (iVar8 < 0) goto LAB_140187aa7;
            uVar13 = param_1[0x1e];
            uVar11 = (ulonglong)uVar13;
          }
          uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar10 - 0x100));
          param_1[0x1e] = uVar13 + 1;
          *(undefined1 *)(*(longlong *)(param_1 + 0x1c) + uVar11) = uVar1;
          lVar12 = *(longlong *)(param_1 + 0x16);
          uVar10 = (uint)*(ushort *)(lVar12 + (ulonglong)(uVar10 - 0x100) * 2);
        } while (0xff < uVar10);
      }
LAB_1401879f2:
      uVar16 = uVar10;
      uVar10 = param_1[0x1e];
      uVar11 = (ulonglong)uVar10;
      if (*(ulonglong *)(param_1 + 0x20) <= uVar11) {
        iVar8 = FUN_140187bf7(param_1);
        if (iVar8 < 0) break;
        uVar10 = param_1[0x1e];
        uVar11 = (ulonglong)uVar10;
      }
      param_1[0x1e] = uVar10 + 1;
      *(char *)(*(longlong *)(param_1 + 0x1c) + uVar11) = (char)uVar16;
      *param_1 = 2;
LAB_140187a28:
      while (param_1[0x1e] != 0) {
        uVar10 = param_1[0x1e] - 1;
        param_1[0x1e] = uVar10;
        if (param_2 != (undefined1 *)0x0) {
          param_2[uVar14] = *(undefined1 *)(*(longlong *)(param_1 + 0x1c) + (ulonglong)uVar10);
        }
        uVar14 = uVar14 + 1;
        uVar10 = param_3;
        if (param_3 == uVar14) goto LAB_140187aad;
      }
      uVar10 = param_1[0x10];
      if (uVar10 < (uint)param_1[0xe]) {
        if ((uint)param_1[0x1a] <= uVar10) {
          iVar8 = FUN_140187d15(param_1);
          if (iVar8 < 0) break;
          uVar10 = param_1[0x10];
        }
        *(short *)(*(longlong *)(param_1 + 0x16) + (ulonglong)uVar10 * 2) = (short)uVar15;
        *(char *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uint)param_1[0x10]) = (char)uVar16;
        param_1[0x10] = param_1[0x10] + 1;
      }
      *param_1 = 1;
      uVar15 = uVar17;
    }
  }
  else {
    uVar10 = 0;
    if (iVar8 != 0) goto LAB_140187aad;
    iVar8 = FUN_14012d612(*(undefined8 *)(param_1 + 0x32),2);
    if ((iVar8 == 0) &&
       (iVar8 = FUN_14012dbaf(*(undefined8 *)(param_1 + 0x32),&local_49,1), iVar8 == 1)) {
      auVar18 = ZEXT215(CONCAT11(local_49,local_49)) & DAT_140eb2730._0_15_;
      auVar3._8_7_ = 0;
      auVar3._0_8_ = SUB158(ZEXT815(0),7);
      auVar4._9_6_ = 0;
      auVar4._0_9_ = SUB159(auVar3 << 0x38,6);
      auVar5._10_5_ = 0;
      auVar5._0_10_ = SUB1510(auVar4 << 0x30,5);
      auVar6._11_4_ = 0;
      auVar6._0_11_ = SUB1511(auVar5 << 0x28,4);
      auVar7._1_12_ = SUB1512(auVar6 << 0x20,3);
      auVar7[0] = auVar18[1];
      auVar2._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar2._4_2_ = auVar7._0_2_;
      auVar2._1_3_ = 0;
      auVar2[0] = auVar18[0];
      iVar8 = 1 << (local_49 & 0x1f);
      *(longlong *)(param_1 + 0xc) = auVar2._0_8_;
      param_1[0xe] = iVar8 + -0x100;
      if ((local_49 & 0x1f) < 0x11) {
        param_1[0xf] = 9;
        param_1[0x10] = (uint)(local_49 >> 7);
        iVar9 = 0x100;
        if ((local_49 & 0x1f) < 10) {
          iVar9 = iVar8 + -0xff;
        }
        param_1[0x11] = iVar9;
        uVar10 = FUN_140187aed(param_1);
        uVar17 = 0;
        if (uVar10 < 0x100) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = (char)uVar10;
          }
          uVar15 = uVar10;
          uVar16 = uVar10;
          if (param_3 == 1) {
            uVar17 = 0;
            uVar10 = 1;
            goto LAB_140187aad;
          }
          *param_1 = 1;
          local_50 = 0;
          uVar14 = 1;
          uVar17 = local_50;
          goto LAB_1401878e2;
        }
      }
    }
    uVar14 = 0;
  }
LAB_140187aa7:
  *param_1 = 3;
  uVar10 = uVar14;
LAB_140187aad:
  param_1[0x12] = uVar15;
  param_1[0x13] = uVar16;
  param_1[0x14] = uVar17;
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar10;
}

