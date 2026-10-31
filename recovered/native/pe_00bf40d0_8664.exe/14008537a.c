/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008537a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14008537a(int *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [13];
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [15];
  undefined1 auStack_78 [40];
  uint local_50;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  uVar16 = param_1[0x12];
  uVar17 = param_1[0x13];
  uVar18 = param_1[0x14];
  if (param_3 == 0) {
    uVar8 = 0;
    goto LAB_14008569d;
  }
  iVar14 = *param_1;
  uVar15 = 0;
  if (iVar14 == 2) goto LAB_140085618;
  uVar15 = 0;
  if (iVar14 == 1) {
LAB_1400854d2:
    while (local_50 = uVar18, uVar8 = FUN_1400856dd((longlong)param_1), uVar18 = local_50,
          -1 < (int)uVar8) {
      while (uVar18 = uVar8, uVar8 = uVar18, uVar18 == 0x100) {
        if (param_1[0xd] == 0) goto LAB_14008552f;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 8) = 1;
        uVar8 = FUN_1400856dd((longlong)param_1);
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = local_50;
        if ((int)uVar8 < 0) goto LAB_140085697;
      }
      if (0xff < uVar18) {
LAB_14008552f:
        if ((uint)param_1[0x10] <= uVar18 - 0x100) {
          if ((uint)param_1[0x10] < uVar18 - 0x100) break;
          uVar8 = param_1[0x1e];
          uVar11 = (ulonglong)uVar8;
          if (*(ulonglong *)(param_1 + 0x20) <= uVar11) {
            uVar10 = FUN_1400857e7((longlong)param_1);
            if ((int)uVar10 < 0) break;
            uVar8 = param_1[0x1e];
            uVar11 = (ulonglong)uVar8;
          }
          param_1[0x1e] = uVar8 + 1;
          *(char *)(*(longlong *)(param_1 + 0x1c) + uVar11) = (char)uVar17;
          uVar8 = uVar16;
          if (uVar16 < 0x100) goto LAB_1400855e2;
        }
        lVar12 = *(longlong *)(param_1 + 0x16);
        do {
          if (lVar12 == 0) goto LAB_140085697;
          uVar13 = param_1[0x1e];
          uVar11 = (ulonglong)uVar13;
          if (*(ulonglong *)(param_1 + 0x20) <= uVar11) {
            uVar10 = FUN_1400857e7((longlong)param_1);
            if ((int)uVar10 < 0) goto LAB_140085697;
            uVar13 = param_1[0x1e];
            uVar11 = (ulonglong)uVar13;
          }
          uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar8 - 0x100));
          param_1[0x1e] = uVar13 + 1;
          *(undefined1 *)(*(longlong *)(param_1 + 0x1c) + uVar11) = uVar1;
          lVar12 = *(longlong *)(param_1 + 0x16);
          uVar8 = (uint)*(ushort *)(lVar12 + (ulonglong)(uVar8 - 0x100) * 2);
        } while (0xff < uVar8);
      }
LAB_1400855e2:
      uVar17 = uVar8;
      uVar8 = param_1[0x1e];
      uVar11 = (ulonglong)uVar8;
      if (*(ulonglong *)(param_1 + 0x20) <= uVar11) {
        uVar10 = FUN_1400857e7((longlong)param_1);
        if ((int)uVar10 < 0) break;
        uVar8 = param_1[0x1e];
        uVar11 = (ulonglong)uVar8;
      }
      param_1[0x1e] = uVar8 + 1;
      *(char *)(*(longlong *)(param_1 + 0x1c) + uVar11) = (char)uVar17;
      *param_1 = 2;
LAB_140085618:
      while (param_1[0x1e] != 0) {
        uVar8 = param_1[0x1e] - 1;
        param_1[0x1e] = uVar8;
        if (param_2 != (undefined1 *)0x0) {
          param_2[uVar15] = *(undefined1 *)(*(longlong *)(param_1 + 0x1c) + (ulonglong)uVar8);
        }
        uVar15 = uVar15 + 1;
        uVar8 = param_3;
        if (param_3 == uVar15) goto LAB_14008569d;
      }
      uVar8 = param_1[0x10];
      if (uVar8 < (uint)param_1[0xe]) {
        if ((uint)param_1[0x1a] <= uVar8) {
          uVar10 = FUN_140085905((longlong)param_1);
          if ((int)uVar10 < 0) break;
          uVar8 = param_1[0x10];
        }
        *(short *)(*(longlong *)(param_1 + 0x16) + (ulonglong)uVar8 * 2) = (short)uVar16;
        *(char *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uint)param_1[0x10]) = (char)uVar17;
        param_1[0x10] = param_1[0x10] + 1;
      }
      *param_1 = 1;
      uVar16 = uVar18;
    }
  }
  else {
    uVar8 = 0;
    if (iVar14 != 0) goto LAB_14008569d;
    uVar10 = FUN_140020a41(*(longlong *)(param_1 + 0x32),2);
    if (((int)uVar10 == 0) &&
       (uVar8 = FUN_140020fde(*(longlong **)(param_1 + 0x32),(undefined8 *)&local_49,1), uVar8 == 1)
       ) {
      auVar19 = ZEXT215(CONCAT11(local_49,local_49)) & DAT_14010b4f0._0_15_;
      auVar3._8_7_ = 0;
      auVar3._0_8_ = SUB158(ZEXT815(0),7);
      auVar4._9_6_ = 0;
      auVar4._0_9_ = SUB159(auVar3 << 0x38,6);
      auVar5._10_5_ = 0;
      auVar5._0_10_ = SUB1510(auVar4 << 0x30,5);
      auVar6._11_4_ = 0;
      auVar6._0_11_ = SUB1511(auVar5 << 0x28,4);
      auVar7._1_12_ = SUB1512(auVar6 << 0x20,3);
      auVar7[0] = auVar19[1];
      auVar2._6_8_ = SUB148(ZEXT214(0) << 0x40,6);
      auVar2._4_2_ = auVar7._0_2_;
      auVar2._1_3_ = 0;
      auVar2[0] = auVar19[0];
      iVar14 = 1 << (local_49 & 0x1f);
      *(longlong *)(param_1 + 0xc) = auVar2._0_8_;
      param_1[0xe] = iVar14 + -0x100;
      if ((local_49 & 0x1f) < 0x11) {
        param_1[0xf] = 9;
        param_1[0x10] = (uint)(local_49 >> 7);
        iVar9 = 0x100;
        if ((local_49 & 0x1f) < 10) {
          iVar9 = iVar14 + -0xff;
        }
        param_1[0x11] = iVar9;
        uVar8 = FUN_1400856dd((longlong)param_1);
        uVar18 = 0;
        if (uVar8 < 0x100) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = (char)uVar8;
          }
          uVar16 = uVar8;
          uVar17 = uVar8;
          if (param_3 == 1) {
            uVar18 = 0;
            uVar8 = 1;
            goto LAB_14008569d;
          }
          *param_1 = 1;
          local_50 = 0;
          uVar15 = 1;
          uVar18 = local_50;
          goto LAB_1400854d2;
        }
      }
    }
    uVar15 = 0;
  }
LAB_140085697:
  *param_1 = 3;
  uVar8 = uVar15;
LAB_14008569d:
  param_1[0x12] = uVar16;
  param_1[0x13] = uVar17;
  param_1[0x14] = uVar18;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return uVar8;
}

