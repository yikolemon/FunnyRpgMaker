/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026de00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1026de00(double param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  longlong lVar4;
  
  uVar1 = (uint)((ulonglong)param_1 >> 0x20);
  uVar2 = uVar1 >> 0x14;
  lVar4 = CONCAT44(_UNK_10324f34,_DAT_10324f30 - (uVar1 >> 0x14 & _DAT_10324f60));
  if ((uVar2 & 0x800) == 0) {
    if (uVar2 < 0x3ff) {
      return (float10)0;
    }
    if (uVar2 < 0x433) {
      return (float10)(double)(((ulonglong)param_1 >> lVar4) << lVar4);
    }
  }
  else {
    dVar3 = (double)(((ulonglong)param_1 >> lVar4) << lVar4);
    if (!NAN(param_1)) {
      if (uVar2 < 0xbff) {
        return (float10)(double)((-(ulonglong)(param_1 < _DAT_10324f50) | (ulonglong)_DAT_10324f50)
                                & _DAT_10324f40);
      }
      if (uVar2 < 0xc33) {
        return (float10)(dVar3 - (double)(-(ulonglong)(param_1 < dVar3) & _DAT_10324f20));
      }
    }
  }
  return (float10)param_1;
}

