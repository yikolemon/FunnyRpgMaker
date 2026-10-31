/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400afd51 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400afd51(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  float fVar14;
  undefined1 auStack_128 [32];
  float *local_108;
  undefined8 *local_100;
  float *local_f8;
  undefined4 local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0 [2];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c0 [8];
  undefined1 local_b8 [40];
  ulonglong local_90;
  
  lVar5 = DAT_140f2a910;
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar5 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    fVar8 = (float)param_1;
    fVar14 = *(float *)(lVar5 + 0xdf8);
    fVar10 = *(float *)(lVar5 + 0x1320);
    uVar2 = *(undefined8 *)(lVar1 + 0x158);
    uVar9 = FUN_1400936b2();
    FUN_14008a3c7(local_c0,*param_2,uVar9,fVar14 + fVar14 + fVar10);
    local_d8 = (float)uVar2;
    fStack_d0 = local_c0._0_4_ + local_d8;
    fStack_d4 = (float)((ulonglong)uVar2 >> 0x20);
    fStack_cc = local_c0._4_4_ + fStack_d4;
    FUN_14008a82c(local_c0);
    cVar6 = FUN_14008a9ce(&local_d8,0,0,0);
    fVar14 = DAT_1401c86c8;
    if (cVar6 != '\0') {
      uVar13 = 0;
      if (fVar8 < 0.0) {
        fVar10 = (float)FUN_1401a3780(CONCAT44(_UNK_1401c8594 ^ (uint)((ulonglong)param_1 >> 0x20),
                                               _DAT_1401c8590 ^ (uint)fVar8));
        fVar10 = fVar10 * DAT_140211670 + _DAT_140211858;
        if (fVar10 <= fVar14) {
          fVar14 = fVar10;
        }
        uVar13 = ~-(uint)(fVar10 < 0.0) & (uint)fVar14;
        fVar14 = fVar8;
      }
      else if (fVar8 <= DAT_1401c86c8) {
        fVar14 = fVar8;
      }
      uVar9 = *(undefined4 *)(lVar5 + 0xdfc);
      uVar7 = FUN_14007a557(7);
      local_108 = (float *)CONCAT44(local_108._4_4_,uVar9);
      FUN_14007ba95(CONCAT44(fStack_d4,local_d8),CONCAT44(fStack_cc,fStack_d0),uVar7,1);
      auVar4._4_4_ = fStack_d4;
      auVar4._0_4_ = local_d8;
      auVar4._8_4_ = fStack_d0;
      auVar4._12_4_ = fStack_cc;
      fVar10 = *(float *)(lVar5 + 0xe00);
      local_d8 = local_d8 + fVar10;
      fVar11 = fStack_d4 + fVar10;
      auVar3._4_8_ = auVar4._8_8_;
      auVar3._0_4_ = fStack_d4 - fVar10;
      auVar12._0_8_ = auVar3._0_8_ << 0x20;
      auVar12._8_4_ = fStack_d0 - fVar10;
      auVar12._12_4_ = fStack_cc - fVar10;
      fStack_d4 = fVar11;
      fStack_d0 = auVar12._8_4_;
      fStack_cc = auVar12._12_4_;
      fVar10 = (float)FUN_140048631(CONCAT44(fVar11,local_d8),auVar12._8_8_,uVar13);
      fVar11 = (float)FUN_140048631(local_d8);
      if (fVar10 < fVar11) {
        uVar9 = *(undefined4 *)(lVar5 + 0xdfc);
        uVar7 = FUN_14007a557(0x2e);
        local_100 = (undefined8 *)CONCAT44(local_100._4_4_,uVar9);
        local_108 = (float *)CONCAT44(local_108._4_4_,fVar11);
        FUN_1400e743c(*(undefined8 *)(lVar1 + 800),&local_d8,uVar7,fVar10);
      }
      if (0.0 <= fVar8 || param_3 != (undefined1 *)0x0) {
        if (param_3 == (undefined1 *)0x0) {
          param_3 = local_b8;
          FUN_140077d91(param_3,0x20,"%.0f%%",(double)(fVar14 * DAT_1402114b0 + DAT_140211db4));
        }
        local_108 = (float *)CONCAT44(local_108._4_4_,0xbf800000);
        FUN_14007b686(local_e0,param_3,0,0);
        fVar14 = fStack_d4;
        if (0.0 < local_e0[0]) {
          if (fVar8 < 0.0) {
            fVar11 = ((local_d8 + fStack_d0) - local_e0[0]) * DAT_1401c86a0;
          }
          else {
            fVar11 = *(float *)(lVar5 + 0xe04) + fVar11;
          }
          local_e8 = DAT_140211dc0;
          local_f0 = FUN_140090d06(fVar11);
          local_ec = fVar14;
          local_108 = local_e0;
          local_100 = &local_e8;
          local_f8 = &local_d8;
          FUN_14007b731(&local_f0,&fStack_d0,param_3,0);
        }
      }
    }
  }
  if (DAT_140f17b40 == (local_90 ^ (ulonglong)auStack_128)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_90 ^ (ulonglong)auStack_128);
}

