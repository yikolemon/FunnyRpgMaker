/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015472b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1015472b(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                    uint param_5,uint param_6,uint param_7,float param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  uVar17 = (ulonglong)param_7;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_1c = param_7;
  local_20 = param_6;
  local_24 = param_5;
  local_28 = param_4;
  fVar6 = 0.0;
  if (param_6 != param_4 || param_7 != param_5) {
    if (param_5 < param_7 || param_5 - param_7 < (uint)(param_4 < param_6)) {
      uVar14 = CONCAT44(param_7,param_6);
      uVar15 = param_4;
      param_7 = param_5;
    }
    else {
      uVar14 = CONCAT44(param_5,param_4);
      uVar15 = param_6;
    }
    uVar14 = FUN_10154d18(param_2,param_3,uVar15,param_7,uVar14);
    iVar3 = (int)((ulonglong)uVar14 >> 0x20);
    uVar15 = (uint)uVar14;
    uVar16 = (uint)uVar17;
    if (param_8 <= 0.0) {
      fVar6 = (float)((double)CONCAT44((iVar3 - param_5) - (uint)(uVar15 < param_4),uVar15 - param_4
                                      ) /
                     (double)CONCAT44((uVar16 - param_5) - (uint)(param_6 < param_4),
                                      param_6 - param_4));
    }
    else {
      bVar1 = uVar16 - param_5 < (uint)(param_6 < param_4);
      uVar2 = uVar16;
      uVar4 = param_5;
      if (uVar16 < param_5 || bVar1) {
        FUN_1015466a(&local_28,&local_20);
        uVar2 = local_1c;
        param_6 = local_20;
        param_4 = local_28;
        uVar4 = local_24;
      }
      auVar8._4_4_ = uVar4;
      auVar8._0_4_ = param_4;
      auVar8._8_4_ = uVar4;
      auVar8._12_4_ = DAT_102b96b0._4_4_;
      dVar11 = (auVar8._8_8_ - _UNK_102b96c8) +
               ((double)CONCAT44((undefined4)DAT_102b96b0,param_4) - _DAT_102b96c0);
      dVar12 = (double)param_8;
      dVar13 = dVar12;
      if (dVar12 <= dVar11) {
        dVar13 = dVar11;
      }
      auVar9._8_4_ = iVar3;
      auVar9._0_8_ = uVar14;
      auVar9._12_4_ = DAT_102b96b0._4_4_;
      dVar11 = (auVar9._8_8_ - _UNK_102b96c8) +
               ((double)CONCAT44((undefined4)DAT_102b96b0,uVar15) - _DAT_102b96c0);
      fVar6 = 0.0;
      if (dVar13 < dVar11) {
        auVar10._4_4_ = uVar2;
        auVar10._0_4_ = param_6;
        auVar10._8_4_ = uVar2;
        auVar10._12_4_ = DAT_102b96b0._4_4_;
        dVar7 = (auVar10._8_8_ - _UNK_102b96c8) +
                ((double)CONCAT44((undefined4)DAT_102b96b0,param_6) - _DAT_102b96c0);
        if (dVar12 <= dVar7) {
          dVar12 = dVar7;
        }
        fVar6 = DAT_1028b430;
        if (dVar11 < dVar12) {
          fVar5 = (float10)FUN_1026fa50(dVar11 / dVar13,uVar17,dVar12,dVar13);
          dVar11 = (double)fVar5;
          fVar5 = (float10)FUN_1026fa50(dVar12 / dVar13);
          fVar6 = (float)(dVar11 / (double)fVar5);
        }
      }
      if (uVar16 < param_5 || bVar1) {
        fVar6 = DAT_1028b430 - fVar6;
      }
    }
  }
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)fVar6;
}

