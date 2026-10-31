/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d0de */

void FUN_18011d0de(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_48 [32];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  lVar3 = DAT_180419160;
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  local_28 = (float)*param_1;
  fStack_24 = (float)((ulonglong)*param_1 >> 0x20);
  fStack_20 = (float)param_1[1];
  fStack_1c = (float)((ulonglong)param_1[1] >> 0x20);
  uVar4 = -(uint)(*(float *)(DAT_180419160 + 0x2488) <= local_28);
  uVar5 = -(uint)(*(float *)(DAT_180419160 + 0x248c) <= fStack_24);
  uVar6 = -(uint)(fStack_20 < *(float *)(DAT_180419160 + 0x2490));
  uVar7 = -(uint)(fStack_1c < *(float *)(DAT_180419160 + 0x2494));
  auVar12._0_4_ = ~uVar4 & (uint)*(float *)(DAT_180419160 + 0x2488);
  auVar12._4_4_ = ~uVar5 & (uint)*(float *)(DAT_180419160 + 0x248c);
  auVar12._8_4_ = ~uVar6 & (uint)*(float *)(DAT_180419160 + 0x2490);
  auVar12._12_4_ = ~uVar7 & (uint)*(float *)(DAT_180419160 + 0x2494);
  auVar2._4_4_ = (uint)fStack_24 & uVar5;
  auVar2._0_4_ = (uint)local_28 & uVar4;
  auVar2._8_4_ = (uint)fStack_20 & uVar6;
  auVar2._12_4_ = (uint)fStack_1c & uVar7;
  auVar12 = auVar12 | auVar2;
  fVar9 = *(float *)(DAT_180419160 + 0xe8c);
  fVar10 = auVar12._0_4_ - fVar9;
  fVar11 = auVar12._4_4_ - fVar9;
  fVar8 = fVar9 + auVar12._8_4_;
  fVar9 = fVar9 + auVar12._12_4_;
  _local_28 = CONCAT44(fVar11,fVar10);
  _fStack_20 = CONCAT44(fVar9,fVar8);
  if ((((fVar10 < *(float *)(lVar1 + 0x2b8)) || (fVar11 < *(float *)(lVar1 + 700))) ||
      (*(float *)(lVar1 + 0x2c0) < fVar8)) || (*(float *)(lVar1 + 0x2c4) < fVar9)) {
    FUN_18018f6ec(*(undefined8 *)(lVar1 + 800));
    FUN_18011d02b(*(undefined8 *)(lVar1 + 800),&local_28,*(undefined4 *)(lVar3 + 0xe84));
    FUN_18018f750(*(undefined8 *)(lVar1 + 800));
  }
  else {
    FUN_18011d02b(*(undefined8 *)(lVar1 + 800),&local_28,*(undefined4 *)(DAT_180419160 + 0xe84));
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

