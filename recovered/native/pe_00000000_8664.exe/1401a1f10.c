/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a1f10 */

ulonglong FUN_1401a1f10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  
  uVar4 = in_XMM0._0_8_;
  if (1 < DAT_140f1c690) {
    auVar5 = roundss(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  fVar3 = in_XMM0._0_4_;
  fVar1 = ABS(fVar3);
  if ((uint)fVar1 < 0x4b000000) {
    if ((uint)fVar1 < 0x3f800000) {
      if (fVar1 != 0.0) {
        if (fVar3 != fVar1) {
          return 0x80000000;
        }
        return (ulonglong)(uint)DAT_1401c86c8;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)fVar1 >> 0x17) & 0x1f) & (uint)fVar3);
      uVar4 = (ulonglong)(uint)fVar2;
      if ((fVar3 == fVar1) && (fVar3 != fVar2)) {
        uVar4 = (ulonglong)(uint)(fVar2 + DAT_1401c86c8);
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    uVar4 = FUN_1401b9810(fVar3);
    return uVar4;
  }
  return uVar4;
}

