/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016e482 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1016e482(undefined1 (*param_1) [16],byte *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 auVar7 [16];
  undefined1 auVar11 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  
  local_20 = local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_10180230;
  local_1c = ExceptionList;
  if (param_3 == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined4 *)param_1[1] = 0;
    *(undefined4 *)(param_1[1] + 4) = 0xf;
  }
  else {
    ExceptionList = &local_1c;
    if ((param_3 & 3) != 0) {
      FUN_1000648a("Invalid base64 encoded data - Size not divisible by 4");
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_64,&DAT_10367d98);
    }
    uVar1 = *(undefined4 *)(param_2 + (param_3 - 4));
    uVar10 = (undefined1)((uint)uVar1 >> 0x18);
    uVar9 = (undefined1)((uint)uVar1 >> 0x10);
    uVar8 = (undefined1)((uint)uVar1 >> 8);
    uVar2 = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11((char)uVar1,(char)uVar1));
    auVar7._4_4_ = (undefined4)
                   (CONCAT35(CONCAT21(CONCAT11(uVar10,uVar10),uVar9),CONCAT14(uVar9,uVar1)) >> 0x20)
    ;
    auVar7._0_4_ = uVar2;
    auVar7._8_4_ = uVar2;
    auVar7._12_4_ = 0;
    auVar7 = pshuflw(auVar7,auVar7,0xaf);
    auVar7 = pshufhw(auVar7,auVar7,5);
    auVar17._0_14_ = DAT_102bb440._0_14_;
    auVar17[0xe] = DAT_102bb440._7_1_;
    auVar17[0xf] = DAT_102bb440._7_1_;
    auVar16._14_2_ = auVar17._14_2_;
    auVar16._0_13_ = DAT_102bb440._0_13_;
    auVar16[0xd] = DAT_102bb440._6_1_;
    auVar15._13_3_ = auVar16._13_3_;
    auVar15._0_12_ = DAT_102bb440._0_12_;
    auVar15[0xc] = DAT_102bb440._6_1_;
    auVar14._12_4_ = auVar15._12_4_;
    auVar14._0_11_ = DAT_102bb440._0_11_;
    auVar14[0xb] = DAT_102bb440._5_1_;
    auVar13._11_5_ = auVar14._11_5_;
    auVar13._0_10_ = (unkbyte10)DAT_102bb440;
    auVar13[10] = DAT_102bb440._5_1_;
    auVar12._10_6_ = auVar13._10_6_;
    auVar12._0_9_ = (unkbyte9)DAT_102bb440;
    auVar12[9] = DAT_102bb440._4_1_;
    auVar11._9_7_ = auVar12._9_7_;
    auVar11._0_8_ = (undefined8)DAT_102bb440;
    auVar11[8] = DAT_102bb440._4_1_;
    auVar18._8_8_ = auVar11._8_8_;
    auVar18[7] = DAT_102bb440._3_1_;
    auVar18[6] = DAT_102bb440._3_1_;
    auVar18[5] = DAT_102bb440._2_1_;
    auVar18[4] = DAT_102bb440._2_1_;
    auVar18[3] = DAT_102bb440._1_1_;
    auVar18[2] = DAT_102bb440._1_1_;
    auVar18[0] = DAT_102bb440;
    auVar18[1] = auVar18[0];
    auVar18 = pshuflw(auVar18,auVar18,0xc);
    auVar19[0] = -(auVar18[0] == auVar7[0]);
    auVar19[1] = -(auVar18[1] == auVar7[1]);
    auVar19[2] = -(auVar18[2] == auVar7[2]);
    auVar19[3] = -(auVar18[3] == auVar7[3]);
    cVar20 = auVar18[4];
    auVar19[4] = -(cVar20 == auVar7[4]);
    cVar21 = auVar18[5];
    auVar19[5] = -(cVar21 == auVar7[5]);
    cVar22 = auVar18[6];
    auVar19[6] = -(cVar22 == auVar7[6]);
    cVar23 = auVar18[7];
    auVar19[7] = -(cVar23 == auVar7[7]);
    auVar19[8] = -(cVar20 == auVar7[8]);
    auVar19[9] = -(cVar21 == auVar7[9]);
    auVar19[10] = -(cVar22 == auVar7[10]);
    auVar19[0xb] = -(cVar23 == auVar7[0xb]);
    auVar19[0xc] = -(cVar20 == auVar7[0xc]);
    auVar19[0xd] = -(cVar21 == auVar7[0xd]);
    auVar19[0xe] = -(cVar22 == auVar7[0xe]);
    auVar19[0xf] = -(cVar23 == auVar7[0xf]);
    iVar4 = movmskps(param_1,auVar19);
    uVar5 = ((uint)(iVar4 * 0x8040201) >> 3 & 0x1111111) * 0x11111111;
    local_28 = uVar5 >> 0x1c;
    bVar3 = (byte)(uVar5 >> 0x1c);
    if (2 < bVar3) {
      local_20 = local_64;
      FUN_1000648a("Invalid base64 encoded data - Found more than 2 padding signs");
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_58,&DAT_10367d98);
    }
    local_24 = (uint)bVar3;
    *(undefined8 *)param_1[1] = 0;
    *param_1 = (undefined1  [16])0x0;
    local_20 = local_64;
    FUN_10062152(0x2e,(param_3 * 3 >> 2) - local_24);
    pauVar6 = param_1;
    if (0xf < *(uint *)(param_1[1] + 4)) {
      pauVar6 = *(undefined1 (**) [16])*param_1;
    }
    for (iVar4 = (param_3 >> 2) - (uint)((char)iVar4 != '\0'); iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar5 = *(uint *)(&DAT_102b9fd8 + (uint)param_2[1] * 4) |
              *(uint *)(&DAT_102b9bd8 + (uint)*param_2 * 4) |
              *(uint *)(&DAT_102ba3d8 + (uint)param_2[2] * 4) |
              *(uint *)(&DAT_102ba7d8 + (uint)param_2[3] * 4);
      if (0x1fffffe < uVar5) {
        local_14 = 0;
        FUN_1000648a("Invalid base64 encoded data - Invalid character");
                    /* WARNING: Subroutine does not return */
        FUN_102586e0(local_4c,&DAT_10367d98);
      }
      param_2 = param_2 + 4;
      (*pauVar6)[0] = (char)(uVar5 & 0xffff);
      (*pauVar6)[1] = (char)((uVar5 & 0xffff) >> 8);
      (*pauVar6)[2] = (char)(uVar5 >> 0x10);
      pauVar6 = (undefined1 (*) [16])(*pauVar6 + 3);
    }
    if ((local_28 & 3) != 0) {
      if ((local_24 & 3) == 1) {
        uVar5 = *(uint *)(&DAT_102b9fd8 + (uint)param_2[1] * 4) |
                *(uint *)(&DAT_102b9bd8 + (uint)*param_2 * 4) |
                *(uint *)(&DAT_102ba3d8 + (uint)param_2[2] * 4);
        if (0x1fffffe < uVar5) {
          local_14 = 0;
          FUN_1000648a("Invalid base64 encoded data - Invalid character");
                    /* WARNING: Subroutine does not return */
          FUN_102586e0(local_40,&DAT_10367d98);
        }
        *(short *)*pauVar6 = (short)uVar5;
      }
      else {
        if (0x1fffffe <
            (*(uint *)(&DAT_102b9fd8 + (uint)param_2[1] * 4) |
            *(uint *)(&DAT_102b9bd8 + (uint)*param_2 * 4))) {
          local_14 = 0;
          FUN_1000648a("Invalid base64 encoded data - Invalid character");
                    /* WARNING: Subroutine does not return */
          FUN_102586e0(local_34,&DAT_10367d98);
        }
        (*pauVar6)[0] =
             (char)(*(uint *)(&DAT_102b9fd8 + (uint)param_2[1] * 4) |
                   *(uint *)(&DAT_102b9bd8 + (uint)*param_2 * 4));
      }
    }
    ExceptionList = local_1c;
  }
  return param_1;
}

