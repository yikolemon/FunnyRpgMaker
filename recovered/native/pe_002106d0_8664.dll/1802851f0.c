/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802851f0 */

ulonglong FUN_1802851f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  
  uVar4 = in_XMM0._0_8_;
  if (1 < DAT_1804039d8) {
    auVar5 = roundss(in_XMM0,in_XMM0,9);
    return auVar5._0_8_;
  }
  fVar3 = in_XMM0._0_4_;
  fVar1 = ABS(fVar3);
  if ((uint)fVar1 < 0x4b000000) {
    if ((uint)fVar1 < 0x3f800000) {
      if (fVar1 != 0.0) {
        if (fVar3 != fVar1) {
          return (ulonglong)DAT_1802bb8e0;
        }
        return 0;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)fVar1 >> 0x17) & 0x1f) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar2;
      if ((fVar3 != fVar1) && (fVar3 != fVar2)) {
        uVar4 = (ulonglong)(uint)(fVar2 - DAT_1802ac570);
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    uVar4 = FUN_18029c410(fVar3);
    return uVar4;
  }
  return uVar4;
}

