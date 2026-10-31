/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a1e40 */

double FUN_1401a1e40(void)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  
  dVar4 = in_XMM0._0_8_;
  if (1 < DAT_140f1c690) {
    auVar5 = roundsd(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  dVar1 = ABS(dVar4);
  uVar3 = (ulonglong)dVar1 >> 0x34;
  dVar2 = dVar4;
  if (uVar3 < 0x433) {
    if (uVar3 < 0x3ff) {
      if (dVar1 != 0.0) {
        if (dVar4 != dVar1) {
          return -0.0;
        }
        return DAT_1401ced60;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)uVar3 & 0x3f)) - 1U) & (ulonglong)dVar4);
      if ((dVar4 == dVar1) && (dVar2 != dVar4)) {
        dVar2 = dVar2 + DAT_1401ced60;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar4 = (double)FUN_1401b9960();
    return dVar4;
  }
  return dVar2;
}

