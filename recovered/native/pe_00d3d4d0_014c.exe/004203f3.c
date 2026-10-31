/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004203f3 */

int __cdecl FUN_004203f3(undefined4 param_1,int *param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [14];
  undefined1 auVar5 [12];
  unkbyte10 Var6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar19;
  char cVar20;
  char cVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [11];
  undefined1 auVar25 [16];
  undefined1 auVar33 [16];
  uint local_3c;
  int local_38;
  uint local_34 [3];
  char local_25;
  undefined4 local_24;
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
  undefined1 auVar34 [16];
  undefined1 auVar26 [16];
  undefined1 auVar35 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar36 [16];
  undefined1 auVar23 [12];
  undefined1 auVar29 [16];
  undefined1 auVar24 [13];
  undefined1 auVar30 [16];
  undefined1 auVar37 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  char cVar38;
  char cVar39;
  char cVar40;
  undefined2 uVar41;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_3c;
  iVar8 = FUN_00420696((int)param_2,param_3);
  if ((iVar8 == 0) && (iVar8 = FUN_004206d1(param_2,&local_24,0x10), iVar8 == 0)) {
    iVar13 = 2;
    iVar8 = iVar13;
    if (-1 < (char)((byte)local_24 | local_20 | local_1c | local_18)) {
      uVar14 = (uint)local_24._3_1_ |
               (uint)local_24._2_1_ << 8 |
               (uint)local_24._1_1_ << 0x10 | (uint)(byte)local_24 << 0x18;
      *param_5 = uVar14;
      uVar11 = (uint)local_1d |
               (uint)local_1e << 8 | (uint)local_1f << 0x10 | (uint)local_20 << 0x18;
      if (uVar11 != 0) {
        uVar12 = (uint)local_19 |
                 (uint)local_1a << 8 | (uint)local_1b << 0x10 | (uint)local_1c << 0x18;
        uVar9 = (uint)local_15 |
                (uint)local_16 << 8 | (uint)local_17 << 0x10 | (uint)local_18 << 0x18;
        local_3c = uVar11;
        if (uVar14 < uVar11) {
          if ((int)(uVar11 - uVar12) < (int)uVar14) goto LAB_00420431;
        }
        else if ((int)(uVar14 - uVar9) < (int)uVar11) goto LAB_00420431;
        if ((((uVar14 <= (uVar12 ^ 0x7fffffff)) && (uVar11 <= (uVar9 ^ 0x7fffffff))) &&
            ((int)param_3 <= (int)(uVar12 + uVar14 ^ 0x7fffffff))) &&
           ((int)param_3 <= (int)(uVar9 + uVar11 ^ 0x7fffffff))) {
          if ((uVar12 + uVar14 + param_3 <= (uint)param_2[1]) &&
             (uVar11 = uVar11 + param_3, uVar9 + uVar11 <= (uint)param_2[1])) {
            *param_5 = uVar14 + param_3;
            iVar8 = FUN_00420696((int)param_2,uVar11);
            if (iVar8 == 0) {
              local_25 = local_15 + 1;
              iVar8 = FUN_004206d1(param_2,local_34,0x10);
              if (iVar8 == 0) {
                iVar8 = 0;
                auVar15 = (undefined1  [16])0x0;
                auVar16 = (undefined1  [16])0x0;
                do {
                  uVar10 = *(undefined4 *)((int)local_34 + iVar8);
                  uVar1 = *(undefined4 *)((int)&local_24 + iVar8);
                  auVar25[0] = -((char)uVar1 == (char)uVar10);
                  cVar19 = (char)((uint)uVar10 >> 8);
                  cVar38 = -((char)((uint)uVar1 >> 8) == cVar19);
                  cVar20 = (char)((uint)uVar10 >> 0x10);
                  cVar39 = -((char)((uint)uVar1 >> 0x10) == cVar20);
                  cVar21 = (char)((uint)uVar10 >> 0x18);
                  cVar40 = -((char)((uint)uVar1 >> 0x18) == cVar21);
                  auVar27._0_9_ = CONCAT18(0xff,0xff00000000000000);
                  auVar22._0_10_ = CONCAT19(0xff,auVar27._0_9_);
                  auVar22[10] = 0xff;
                  auVar23[0xb] = 0xff;
                  auVar23._0_11_ = auVar22;
                  auVar24[0xc] = 0xff;
                  auVar24._0_12_ = auVar23;
                  auVar32[0xd] = 0xff;
                  auVar32._0_13_ = auVar24;
                  auVar18[0] = -((char)uVar10 == '\0');
                  auVar18._1_3_ = 0;
                  auVar18[4] = -(cVar19 == '\0');
                  auVar18._5_2_ = 0;
                  auVar18[7] = -(cVar19 == '\0');
                  auVar18[8] = -(cVar20 == '\0');
                  auVar18[9] = -(cVar20 == '\0');
                  auVar18[10] = -(cVar20 == '\0');
                  auVar18[0xb] = -(cVar20 == '\0');
                  auVar18[0xc] = -(cVar21 == '\0');
                  auVar18[0xd] = -(cVar21 == '\0');
                  auVar18[0xe] = -(cVar21 == '\0');
                  auVar18[0xf] = -(cVar21 == '\0');
                  auVar2._8_4_ = 0xffffffff;
                  auVar2._0_8_ = 0xffffffffffffffff;
                  auVar2._12_4_ = 0xffffffff;
                  auVar16 = auVar16 | auVar18 ^ auVar2;
                  auVar32[0xe] = 0xff;
                  auVar32[0xf] = 0xff;
                  auVar31._14_2_ = auVar32._14_2_;
                  auVar31[0xd] = 0xff;
                  auVar31._0_13_ = auVar24;
                  auVar30._13_3_ = auVar31._13_3_;
                  auVar30[0xc] = 0xff;
                  auVar30._0_12_ = auVar23;
                  auVar29._12_4_ = auVar30._12_4_;
                  auVar29[0xb] = 0xff;
                  auVar29._0_11_ = auVar22;
                  auVar28._11_5_ = auVar29._11_5_;
                  auVar28[10] = 0xff;
                  auVar28._0_10_ = auVar22._0_10_;
                  auVar27._10_6_ = auVar28._10_6_;
                  auVar27[9] = 0xff;
                  auVar26._9_7_ = auVar27._9_7_;
                  auVar26[8] = 0xff;
                  auVar26._0_8_ = 0xff00000000000000;
                  Var6 = CONCAT91(CONCAT81(auVar26._8_8_,cVar40),cVar40);
                  auVar5._2_10_ = Var6;
                  auVar5[1] = cVar39;
                  auVar5[0] = cVar39;
                  auVar4._2_12_ = auVar5;
                  auVar4[1] = cVar38;
                  auVar4[0] = cVar38;
                  auVar25[1] = 0;
                  auVar25._2_14_ = auVar4;
                  uVar41 = (undefined2)Var6;
                  auVar37._0_12_ = auVar25._0_12_;
                  auVar37._12_2_ = uVar41;
                  auVar37._14_2_ = uVar41;
                  auVar36._12_4_ = auVar37._12_4_;
                  auVar36._0_10_ = auVar25._0_10_;
                  auVar36._10_2_ = auVar5._0_2_;
                  auVar35._10_6_ = auVar36._10_6_;
                  auVar35._0_8_ = auVar25._0_8_;
                  auVar35._8_2_ = auVar5._0_2_;
                  auVar34._8_8_ = auVar35._8_8_;
                  auVar34._6_2_ = auVar4._0_2_;
                  auVar34._0_4_ = auVar25._0_4_;
                  auVar34._4_2_ = auVar4._0_2_;
                  auVar33._4_12_ = auVar34._4_12_;
                  auVar33._0_4_ = auVar34._0_4_ & 0xffff;
                  auVar3._8_4_ = 0xffffffff;
                  auVar3._0_8_ = 0xffffffffffffffff;
                  auVar3._12_4_ = 0xffffffff;
                  auVar15 = auVar15 | auVar33 ^ auVar3;
                  iVar8 = iVar8 + 4;
                } while (iVar8 != 0x10);
                auVar17._0_4_ = auVar16._0_4_ << 0x1f;
                auVar17._4_4_ = auVar16._4_4_ << 0x1f;
                auVar17._8_4_ = auVar16._8_4_ << 0x1f;
                auVar17._12_4_ = auVar16._12_4_ << 0x1f;
                iVar8 = movmskps(0x10,auVar17);
                if ((iVar8 == 0) ||
                   (auVar16._0_4_ = auVar15._0_4_ << 0x1f, auVar16._4_4_ = auVar15._4_4_ << 0x1f,
                   auVar16._8_4_ = auVar15._8_4_ << 0x1f, auVar16._12_4_ = auVar15._12_4_ << 0x1f,
                   uVar10 = movmskps(iVar8,auVar16), iVar8 = iVar13, (char)uVar10 == '\0')) {
                  FUN_004206ea((int)param_2,8);
                  uVar7 = FUN_0042070a(param_2,&local_38);
                  iVar8 = local_38;
                  if ((local_38 == 0) && (iVar8 = 2, -1 < (short)uVar7)) {
                    iVar8 = FUN_00420696((int)param_2,uVar11 + (int)(short)uVar7);
                    if (iVar8 == 0) {
                      *param_4 = uVar11 + (int)(short)uVar7;
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
LAB_00420431:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_3c);
  }
  return iVar8;
}

