/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802842f0 */

undefined8
FUN_1802842f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  float in_XMM0_Da;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 in_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  fVar1 = ABS(in_XMM0_Da);
  if (0x7f7fffff < (uint)fVar1) {
    uVar5 = FUN_18029d780(param_1,param_2,0);
    return uVar5;
  }
  auVar6._0_8_ = (double)in_XMM0_Da;
  auVar6._8_8_ = in_XMM0_Qb;
  dVar4 = ABS(auVar6._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    uVar2 = 0;
  }
  else if ((uint)fVar1 < 0x48f42400) {
    uVar2 = (uint)(dVar4 * DAT_180351a90 + DAT_180351a80);
    dVar8 = (double)(int)uVar2;
    dVar10 = dVar4 - DAT_180351ac0 * dVar8;
    dVar9 = dVar10 - DAT_180351ad0 * dVar8;
    uVar3 = (ulonglong)ABS(dVar9) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar4 >> 0x34) - uVar3)) {
      dVar9 = dVar10 - DAT_180351ae0 * dVar8;
      dVar9 = dVar9 - (DAT_180351af0 * dVar8 - ((dVar10 - dVar9) - DAT_180351ae0 * dVar8));
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar9;
    if (uVar3 < 0x3f2) {
      if (uVar3 < 0x3df) {
        if ((uVar2 & 1) == 0) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = DAT_180351a70;
        }
      }
      else if ((uVar2 & 1) == 0) {
        auVar6._0_8_ = DAT_180351a70 - dVar9 * dVar9 * DAT_180351a80;
        auVar6._8_8_ = 0;
      }
      else {
        auVar6._0_8_ = dVar9 - DAT_180351aa0 * dVar9 * dVar9 * dVar9;
        auVar6._8_8_ = 0;
      }
      goto LAB_180284564;
    }
  }
  else {
    uVar2 = FUN_18029d830(dVar4,auVar6._0_8_,1,param_4,auVar6._0_8_);
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVar4 = auVar6._0_8_;
  dVar9 = dVar4 * dVar4;
  if ((uVar2 & 1) == 0) {
    auVar6._0_8_ = DAT_180355940 * dVar9 + DAT_180351a70 +
                   ((DAT_180355960 * dVar9 + DAT_180355958) * dVar9 * dVar9 +
                   DAT_180355950 * dVar9 + DAT_180355948) * dVar9 * dVar9;
    auVar6._8_8_ = 0;
  }
  else {
    auVar6._0_8_ = dVar4 + ((DAT_180355988 * dVar9 + DAT_180355980) * dVar9 * dVar9 +
                           DAT_180355978 * dVar9 + DAT_180355970) * dVar4 * dVar9;
  }
LAB_180284564:
  if ((uVar2 + 1 & 2) != 0) {
    dVar4 = auVar6._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = 0.0 - dVar4;
  }
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)auVar6._0_8_;
  return auVar7._0_8_;
}

