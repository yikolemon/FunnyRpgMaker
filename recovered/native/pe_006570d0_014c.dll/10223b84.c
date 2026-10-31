/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223b84 */

void FUN_10223b84(double param_1,double param_2)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  
  dVar5 = 0.0;
  if (0.0 <= param_1) {
    dVar5 = param_1;
  }
  bVar1 = DAT_103037f0 < param_1;
  uVar6 = -(ulonglong)bVar1 & (ulonglong)DAT_103037f0;
  dVar4 = 0.0;
  if (0.0 <= param_2) {
    dVar4 = param_2;
  }
  fVar2 = (float10)FUN_101c8f55(-(ulonglong)(DAT_103037f0 < param_2) & (ulonglong)DAT_103037f0 |
                                ~-(ulonglong)(DAT_103037f0 < param_2) & (ulonglong)dVar4);
  fVar3 = (float10)FUN_101c8f55(uVar6 | ~-(ulonglong)bVar1 & (ulonglong)dVar5);
  FUN_10223b34((double)fVar3,(double)fVar2);
  return;
}

