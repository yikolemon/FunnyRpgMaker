/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081a53 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140081a53(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  
  uVar3 = DAT_1400e72b0;
  if ((0.0 <= param_1) && (param_1 <= DAT_1400e7248)) {
    dVar1 = FUN_1400250ba(param_1);
    dVar2 = (DAT_14010a670 + dVar1) * param_2 + _DAT_14010a678;
    dVar1 = FUN_14008199c(dVar2,dVar1);
    if ((param_2 <= dVar1) ||
       ((double)((ulonglong)(dVar1 - param_2) & _DAT_1400b6b00) <= _DAT_14010a680)) {
      dVar2 = FUN_140025074(dVar2);
      dVar2 = dVar2 + DAT_1400edce0;
      uVar3 = -(ulonglong)(dVar2 < 0.0) & DAT_1400e72b0 |
              ~-(ulonglong)(dVar2 < 0.0) &
              (~-(ulonglong)(DAT_1400e7248 < dVar2) & (ulonglong)dVar2 |
              -(ulonglong)(DAT_1400e7248 < dVar2) & DAT_1400e72b0);
    }
  }
  return uVar3;
}

