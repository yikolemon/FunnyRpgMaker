/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047abf0 */

void __cdecl FUN_0047abf0(double param_1,double param_2)

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
  bVar1 = DAT_004d7da0 < param_1;
  uVar6 = -(ulonglong)bVar1 & (ulonglong)DAT_004d7da0;
  dVar4 = 0.0;
  if (0.0 <= param_2) {
    dVar4 = param_2;
  }
  fVar2 = FUN_00424db1((double)(-(ulonglong)(DAT_004d7da0 < param_2) & (ulonglong)DAT_004d7da0 |
                               ~-(ulonglong)(DAT_004d7da0 < param_2) & (ulonglong)dVar4));
  fVar3 = FUN_00424db1((double)(uVar6 | ~-(ulonglong)bVar1 & (ulonglong)dVar5));
  FUN_0047aba0((double)fVar3,(double)fVar2);
  return;
}

