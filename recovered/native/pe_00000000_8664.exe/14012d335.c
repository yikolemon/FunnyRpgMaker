/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012d335 */

int FUN_14012d335(undefined8 param_1,longlong param_2,int param_3,int *param_4,uint *param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char cVar21;
  char cVar22;
  char cVar23;
  undefined1 auVar20 [16];
  undefined1 auVar24 [11];
  undefined1 auVar27 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58 [3];
  char local_49;
  byte local_48 [4];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  ulonglong local_30;
  undefined1 auVar36 [16];
  undefined1 auVar28 [16];
  undefined1 auVar37 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar38 [16];
  undefined1 auVar25 [12];
  undefined1 auVar31 [16];
  undefined1 auVar26 [13];
  undefined1 auVar32 [16];
  undefined1 auVar39 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  char cVar40;
  char cVar41;
  char cVar42;
  undefined2 uVar43;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  iVar8 = FUN_14012d612(param_2,param_3);
  if (((iVar8 == 0) && (iVar8 = FUN_14012d656(param_2,local_48,0x10), iVar8 == 0)) &&
     (iVar13 = 2, iVar8 = iVar13, -1 < (char)(local_48[0] | local_44 | local_40 | local_3c))) {
    uVar11 = (uint)local_48[3] |
             (uint)local_48[2] << 8 | (uint)local_48[1] << 0x10 | (uint)local_48[0] << 0x18;
    *param_5 = uVar11;
    uVar15 = (uint)local_41 | (uint)local_42 << 8 | (uint)local_43 << 0x10 | (uint)local_44 << 0x18;
    if (uVar15 != 0) {
      uVar12 = (uint)local_3d |
               (uint)local_3e << 8 | (uint)local_3f << 0x10 | (uint)local_40 << 0x18;
      uVar14 = (uint)local_39 |
               (uint)local_3a << 8 | (uint)local_3b << 0x10 | (uint)local_3c << 0x18;
      if (uVar11 < uVar15) {
        if ((int)(uVar15 - uVar12) < (int)uVar11) goto LAB_14012d37f;
      }
      else if ((int)(uVar11 - uVar14) < (int)uVar15) goto LAB_14012d37f;
      if (((uVar11 <= (uVar12 ^ 0x7fffffff)) && (uVar15 <= (uVar14 ^ 0x7fffffff))) &&
         ((param_3 <= (int)(uVar12 + uVar11 ^ 0x7fffffff) &&
          (param_3 <= (int)(uVar14 + uVar15 ^ 0x7fffffff))))) {
        if ((uVar12 + uVar11 + param_3 <= *(uint *)(param_2 + 8)) &&
           (iVar16 = uVar15 + param_3, uVar14 + iVar16 <= *(uint *)(param_2 + 8))) {
          *param_5 = uVar11 + param_3;
          iVar8 = FUN_14012d612(param_2,iVar16);
          if (iVar8 == 0) {
            local_49 = local_39 + 1;
            iVar8 = FUN_14012d656(param_2,local_58,0x10);
            if (iVar8 == 0) {
              lVar10 = 0;
              auVar17 = (undefined1  [16])0x0;
              auVar18 = (undefined1  [16])0x0;
              do {
                uVar9 = *(undefined4 *)((longlong)local_58 + lVar10);
                uVar1 = *(undefined4 *)(local_48 + lVar10);
                auVar27[0] = -((char)uVar1 == (char)uVar9);
                cVar21 = (char)((uint)uVar9 >> 8);
                cVar40 = -((char)((uint)uVar1 >> 8) == cVar21);
                cVar22 = (char)((uint)uVar9 >> 0x10);
                cVar41 = -((char)((uint)uVar1 >> 0x10) == cVar22);
                cVar23 = (char)((uint)uVar9 >> 0x18);
                cVar42 = -((char)((uint)uVar1 >> 0x18) == cVar23);
                auVar29._0_9_ = CONCAT18(0xff,0xff00000000000000);
                auVar24._0_10_ = CONCAT19(0xff,auVar29._0_9_);
                auVar24[10] = 0xff;
                auVar25[0xb] = 0xff;
                auVar25._0_11_ = auVar24;
                auVar26[0xc] = 0xff;
                auVar26._0_12_ = auVar25;
                auVar34[0xd] = 0xff;
                auVar34._0_13_ = auVar26;
                auVar20[0] = -((char)uVar9 == '\0');
                auVar20._1_3_ = 0;
                auVar20[4] = -(cVar21 == '\0');
                auVar20._5_2_ = 0;
                auVar20[7] = -(cVar21 == '\0');
                auVar20[8] = -(cVar22 == '\0');
                auVar20[9] = -(cVar22 == '\0');
                auVar20[10] = -(cVar22 == '\0');
                auVar20[0xb] = -(cVar22 == '\0');
                auVar20[0xc] = -(cVar23 == '\0');
                auVar20[0xd] = -(cVar23 == '\0');
                auVar20[0xe] = -(cVar23 == '\0');
                auVar20[0xf] = -(cVar23 == '\0');
                auVar2._8_4_ = 0xffffffff;
                auVar2._0_8_ = 0xffffffffffffffff;
                auVar2._12_4_ = 0xffffffff;
                auVar18 = auVar18 | auVar20 ^ auVar2;
                auVar34[0xe] = 0xff;
                auVar34[0xf] = 0xff;
                auVar33._14_2_ = auVar34._14_2_;
                auVar33[0xd] = 0xff;
                auVar33._0_13_ = auVar26;
                auVar32._13_3_ = auVar33._13_3_;
                auVar32[0xc] = 0xff;
                auVar32._0_12_ = auVar25;
                auVar31._12_4_ = auVar32._12_4_;
                auVar31[0xb] = 0xff;
                auVar31._0_11_ = auVar24;
                auVar30._11_5_ = auVar31._11_5_;
                auVar30[10] = 0xff;
                auVar30._0_10_ = auVar24._0_10_;
                auVar29._10_6_ = auVar30._10_6_;
                auVar29[9] = 0xff;
                auVar28._9_7_ = auVar29._9_7_;
                auVar28[8] = 0xff;
                auVar28._0_8_ = 0xff00000000000000;
                Var6 = CONCAT91(CONCAT81(auVar28._8_8_,cVar42),cVar42);
                auVar5._2_10_ = Var6;
                auVar5[1] = cVar41;
                auVar5[0] = cVar41;
                auVar4._2_12_ = auVar5;
                auVar4[1] = cVar40;
                auVar4[0] = cVar40;
                auVar27[1] = 0;
                auVar27._2_14_ = auVar4;
                uVar43 = (undefined2)Var6;
                auVar39._0_12_ = auVar27._0_12_;
                auVar39._12_2_ = uVar43;
                auVar39._14_2_ = uVar43;
                auVar38._12_4_ = auVar39._12_4_;
                auVar38._0_10_ = auVar27._0_10_;
                auVar38._10_2_ = auVar5._0_2_;
                auVar37._10_6_ = auVar38._10_6_;
                auVar37._0_8_ = auVar27._0_8_;
                auVar37._8_2_ = auVar5._0_2_;
                auVar36._8_8_ = auVar37._8_8_;
                auVar36._6_2_ = auVar4._0_2_;
                auVar36._0_4_ = auVar27._0_4_;
                auVar36._4_2_ = auVar4._0_2_;
                auVar35._4_12_ = auVar36._4_12_;
                auVar35._0_4_ = auVar36._0_4_ & 0xffff;
                auVar3._8_4_ = 0xffffffff;
                auVar3._0_8_ = 0xffffffffffffffff;
                auVar3._12_4_ = 0xffffffff;
                auVar17 = auVar17 | auVar35 ^ auVar3;
                lVar10 = lVar10 + 4;
              } while (lVar10 != 0x10);
              auVar19._0_4_ = auVar18._0_4_ << 0x1f;
              auVar19._4_4_ = auVar18._4_4_ << 0x1f;
              auVar19._8_4_ = auVar18._8_4_ << 0x1f;
              auVar19._12_4_ = auVar18._12_4_ << 0x1f;
              iVar8 = movmskps(0x10,auVar19);
              if ((iVar8 == 0) ||
                 (auVar18._0_4_ = auVar17._0_4_ << 0x1f, auVar18._4_4_ = auVar17._4_4_ << 0x1f,
                 auVar18._8_4_ = auVar17._8_4_ << 0x1f, auVar18._12_4_ = auVar17._12_4_ << 0x1f,
                 uVar9 = movmskps(iVar8,auVar18), iVar8 = iVar13, (char)uVar9 == '\0')) {
                FUN_14012d664(param_2,8);
                sVar7 = FUN_14012d676(param_2,&local_5c);
                iVar8 = local_5c;
                if ((local_5c == 0) && (iVar8 = 2, -1 < sVar7)) {
                  iVar8 = FUN_14012d612(param_2,iVar16 + sVar7);
                  if (iVar8 == 0) {
                    *param_4 = iVar16 + sVar7;
                    iVar8 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14012d37f:
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_88);
  }
  return iVar8;
}

