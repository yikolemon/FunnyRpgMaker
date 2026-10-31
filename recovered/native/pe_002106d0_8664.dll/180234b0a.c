/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180234b0a */

void FUN_180234b0a(double param_1,double param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  
  dVar5 = 0.0;
  if (0.0 <= param_1) {
    dVar5 = param_1;
  }
  bVar1 = DAT_18032a0f8 < param_1;
  uVar6 = -(ulonglong)bVar1 & (ulonglong)DAT_18032a0f8;
  dVar4 = 0.0;
  if (0.0 <= param_2) {
    dVar4 = param_2;
  }
  uVar2 = FUN_1801d2f26(-(ulonglong)(DAT_18032a0f8 < param_2) & (ulonglong)DAT_18032a0f8 |
                        ~-(ulonglong)(DAT_18032a0f8 < param_2) & (ulonglong)dVar4);
  uVar3 = FUN_1801d2f26(uVar6 | ~-(ulonglong)bVar1 & (ulonglong)dVar5);
  FUN_180234ad4(uVar3,uVar2);
  return;
}

