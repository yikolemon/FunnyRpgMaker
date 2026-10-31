/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400819d2 */

void FUN_1400819d2(double param_1,double param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  
  dVar3 = 0.0;
  if (0.0 <= param_1) {
    dVar3 = param_1;
  }
  bVar1 = DAT_1400e7248 < param_1;
  uVar4 = -(ulonglong)bVar1 & (ulonglong)DAT_1400e7248;
  dVar2 = 0.0;
  if (0.0 <= param_2) {
    dVar2 = param_2;
  }
  dVar2 = FUN_1400250ba((double)(-(ulonglong)(DAT_1400e7248 < param_2) & (ulonglong)DAT_1400e7248 |
                                ~-(ulonglong)(DAT_1400e7248 < param_2) & (ulonglong)dVar2));
  dVar3 = FUN_1400250ba((double)(uVar4 | ~-(ulonglong)bVar1 & (ulonglong)dVar3));
  FUN_14008199c(dVar3,dVar2);
  return;
}

