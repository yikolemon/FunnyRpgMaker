/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa061 */

void FUN_100fa061(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 extraout_ECX;
  uint uVar4;
  float *pfVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_24 [2];
  float local_1c [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  FUN_100f9e56(local_1c,param_2,param_3,param_5);
  FUN_100f9e56(local_24,param_3,param_4,param_5);
  FUN_100f9e56(&local_2c,param_4,param_2,param_5);
  fVar1 = param_5[1];
  fVar2 = *param_5;
  fVar7 = fVar1 - local_24[1];
  fVar8 = fVar1 - local_1c[1];
  fVar9 = fVar2 - local_24[0];
  fVar10 = fVar2 - local_1c[0];
  fVar11 = fVar2 - local_24[1];
  fVar12 = fVar2 - local_1c[1];
  local_3c = fVar9 * fVar9 + fVar7 * fVar7;
  fStack_38 = fVar10 * fVar10 + fVar8 * fVar8;
  fStack_34 = fVar11 * fVar11 + (fVar1 - 0.0) * (fVar1 - 0.0);
  fStack_30 = fVar12 * fVar12 + (fVar1 - 0.0) * (fVar1 - 0.0);
  fVar6 = (float10)FUN_100ea38a(local_3c,(fVar2 - local_2c) * (fVar2 - local_2c) +
                                         (fVar1 - local_28) * (fVar1 - local_28));
  fVar6 = (float10)FUN_100ea38a(fStack_38,(float)fVar6);
  local_40 = (float)fVar6;
  auVar3._4_4_ = -(uint)(local_40 == local_3c);
  auVar3._0_4_ = -(uint)(local_40 == local_3c);
  auVar3._8_4_ = -(uint)(local_40 == fStack_38);
  auVar3._12_4_ = -(uint)(local_40 == fStack_38);
  uVar4 = movmskpd(extraout_ECX,auVar3);
  pfVar5 = &local_2c;
  if ((uVar4 & 1) != 0) {
    pfVar5 = local_24;
  }
  if ((uVar4 & 2) != 0) {
    pfVar5 = local_1c;
  }
  *param_1 = *(undefined8 *)pfVar5;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_40)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

