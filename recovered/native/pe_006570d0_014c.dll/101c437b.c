/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c437b */

int FUN_101c437b(undefined4 param_1,int param_2,int param_3,int *param_4,uint *param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  short sVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar20;
  char cVar21;
  char cVar22;
  undefined1 auVar19 [16];
  undefined1 auVar23 [11];
  undefined1 auVar26 [16];
  undefined1 auVar34 [16];
  uint local_3c;
  int local_38;
  undefined4 local_34 [3];
  char local_25;
  byte local_24 [4];
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  uint local_14;
  undefined1 auVar35 [16];
  undefined1 auVar27 [16];
  undefined1 auVar36 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar37 [16];
  undefined1 auVar24 [12];
  undefined1 auVar30 [16];
  undefined1 auVar25 [13];
  undefined1 auVar31 [16];
  undefined1 auVar38 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  char cVar39;
  char cVar40;
  char cVar41;
  undefined2 uVar42;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  iVar8 = FUN_101c461e(param_2,param_3);
  if ((iVar8 == 0) && (iVar8 = FUN_101c4659(param_2,local_24,0x10), iVar8 == 0)) {
    iVar14 = 2;
    iVar8 = iVar14;
    if (-1 < (char)(local_24[0] | local_20 | local_1c | local_18)) {
      uVar15 = (uint)local_24[3] |
               (uint)local_24[2] << 8 | (uint)local_24[1] << 0x10 | (uint)local_24[0] << 0x18;
      *param_5 = uVar15;
      uVar11 = (uint)local_1d |
               (uint)local_1e << 8 | (uint)local_1f << 0x10 | (uint)local_20 << 0x18;
      if (uVar11 != 0) {
        uVar12 = (uint)local_19 |
                 (uint)local_1a << 8 | (uint)local_1b << 0x10 | (uint)local_1c << 0x18;
        uVar9 = (uint)local_15 |
                (uint)local_16 << 8 | (uint)local_17 << 0x10 | (uint)local_18 << 0x18;
        local_3c = uVar11;
        if (uVar15 < uVar11) {
          if ((int)(uVar11 - uVar12) < (int)uVar15) goto LAB_101c43b9;
        }
        else if ((int)(uVar15 - uVar9) < (int)uVar11) goto LAB_101c43b9;
        if ((((uVar15 <= (uVar12 ^ 0x7fffffff)) && (uVar11 <= (uVar9 ^ 0x7fffffff))) &&
            (param_3 <= (int)(uVar12 + uVar15 ^ 0x7fffffff))) &&
           (param_3 <= (int)(uVar9 + uVar11 ^ 0x7fffffff))) {
          if ((uVar12 + uVar15 + param_3 <= *(uint *)(param_2 + 4)) &&
             (iVar13 = uVar11 + param_3, uVar9 + iVar13 <= *(uint *)(param_2 + 4))) {
            *param_5 = uVar15 + param_3;
            iVar8 = FUN_101c461e(param_2,iVar13);
            if (iVar8 == 0) {
              local_25 = local_15 + 1;
              iVar8 = FUN_101c4659(param_2,local_34,0x10);
              if (iVar8 == 0) {
                iVar8 = 0;
                auVar16 = (undefined1  [16])0x0;
                auVar17 = (undefined1  [16])0x0;
                do {
                  uVar10 = *(undefined4 *)((int)local_34 + iVar8);
                  uVar1 = *(undefined4 *)(local_24 + iVar8);
                  auVar26[0] = -((char)uVar1 == (char)uVar10);
                  cVar20 = (char)((uint)uVar10 >> 8);
                  cVar39 = -((char)((uint)uVar1 >> 8) == cVar20);
                  cVar21 = (char)((uint)uVar10 >> 0x10);
                  cVar40 = -((char)((uint)uVar1 >> 0x10) == cVar21);
                  cVar22 = (char)((uint)uVar10 >> 0x18);
                  cVar41 = -((char)((uint)uVar1 >> 0x18) == cVar22);
                  auVar28._0_9_ = CONCAT18(0xff,0xff00000000000000);
                  auVar23._0_10_ = CONCAT19(0xff,auVar28._0_9_);
                  auVar23[10] = 0xff;
                  auVar24[0xb] = 0xff;
                  auVar24._0_11_ = auVar23;
                  auVar25[0xc] = 0xff;
                  auVar25._0_12_ = auVar24;
                  auVar33[0xd] = 0xff;
                  auVar33._0_13_ = auVar25;
                  auVar19[0] = -((char)uVar10 == '\0');
                  auVar19._1_3_ = 0;
                  auVar19[4] = -(cVar20 == '\0');
                  auVar19._5_2_ = 0;
                  auVar19[7] = -(cVar20 == '\0');
                  auVar19[8] = -(cVar21 == '\0');
                  auVar19[9] = -(cVar21 == '\0');
                  auVar19[10] = -(cVar21 == '\0');
                  auVar19[0xb] = -(cVar21 == '\0');
                  auVar19[0xc] = -(cVar22 == '\0');
                  auVar19[0xd] = -(cVar22 == '\0');
                  auVar19[0xe] = -(cVar22 == '\0');
                  auVar19[0xf] = -(cVar22 == '\0');
                  auVar2._8_4_ = 0xffffffff;
                  auVar2._0_8_ = 0xffffffffffffffff;
                  auVar2._12_4_ = 0xffffffff;
                  auVar17 = auVar17 | auVar19 ^ auVar2;
                  auVar33[0xe] = 0xff;
                  auVar33[0xf] = 0xff;
                  auVar32._14_2_ = auVar33._14_2_;
                  auVar32[0xd] = 0xff;
                  auVar32._0_13_ = auVar25;
                  auVar31._13_3_ = auVar32._13_3_;
                  auVar31[0xc] = 0xff;
                  auVar31._0_12_ = auVar24;
                  auVar30._12_4_ = auVar31._12_4_;
                  auVar30[0xb] = 0xff;
                  auVar30._0_11_ = auVar23;
                  auVar29._11_5_ = auVar30._11_5_;
                  auVar29[10] = 0xff;
                  auVar29._0_10_ = auVar23._0_10_;
                  auVar28._10_6_ = auVar29._10_6_;
                  auVar28[9] = 0xff;
                  auVar27._9_7_ = auVar28._9_7_;
                  auVar27[8] = 0xff;
                  auVar27._0_8_ = 0xff00000000000000;
                  Var6 = CONCAT91(CONCAT81(auVar27._8_8_,cVar41),cVar41);
                  auVar5._2_10_ = Var6;
                  auVar5[1] = cVar40;
                  auVar5[0] = cVar40;
                  auVar4._2_12_ = auVar5;
                  auVar4[1] = cVar39;
                  auVar4[0] = cVar39;
                  auVar26[1] = 0;
                  auVar26._2_14_ = auVar4;
                  uVar42 = (undefined2)Var6;
                  auVar38._0_12_ = auVar26._0_12_;
                  auVar38._12_2_ = uVar42;
                  auVar38._14_2_ = uVar42;
                  auVar37._12_4_ = auVar38._12_4_;
                  auVar37._0_10_ = auVar26._0_10_;
                  auVar37._10_2_ = auVar5._0_2_;
                  auVar36._10_6_ = auVar37._10_6_;
                  auVar36._0_8_ = auVar26._0_8_;
                  auVar36._8_2_ = auVar5._0_2_;
                  auVar35._8_8_ = auVar36._8_8_;
                  auVar35._6_2_ = auVar4._0_2_;
                  auVar35._0_4_ = auVar26._0_4_;
                  auVar35._4_2_ = auVar4._0_2_;
                  auVar34._4_12_ = auVar35._4_12_;
                  auVar34._0_4_ = auVar35._0_4_ & 0xffff;
                  auVar3._8_4_ = 0xffffffff;
                  auVar3._0_8_ = 0xffffffffffffffff;
                  auVar3._12_4_ = 0xffffffff;
                  auVar16 = auVar16 | auVar34 ^ auVar3;
                  iVar8 = iVar8 + 4;
                } while (iVar8 != 0x10);
                auVar18._0_4_ = auVar17._0_4_ << 0x1f;
                auVar18._4_4_ = auVar17._4_4_ << 0x1f;
                auVar18._8_4_ = auVar17._8_4_ << 0x1f;
                auVar18._12_4_ = auVar17._12_4_ << 0x1f;
                iVar8 = movmskps(0x10,auVar18);
                if ((iVar8 == 0) ||
                   (auVar17._0_4_ = auVar16._0_4_ << 0x1f, auVar17._4_4_ = auVar16._4_4_ << 0x1f,
                   auVar17._8_4_ = auVar16._8_4_ << 0x1f, auVar17._12_4_ = auVar16._12_4_ << 0x1f,
                   uVar10 = movmskps(iVar8,auVar17), iVar8 = iVar14, (char)uVar10 == '\0')) {
                  FUN_101c4672(param_2,8);
                  sVar7 = FUN_101c4692(param_2,&local_38);
                  iVar8 = local_38;
                  if ((local_38 == 0) && (iVar8 = 2, -1 < sVar7)) {
                    iVar8 = FUN_101c461e(param_2,iVar13 + sVar7);
                    if (iVar8 == 0) {
                      *param_4 = iVar13 + sVar7;
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
  }
LAB_101c43b9:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar8;
}

