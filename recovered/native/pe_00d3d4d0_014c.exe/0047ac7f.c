/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047ac7f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0047ac7f(double param_1,double param_2)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = DAT_004d7df8;
  if ((0.0 <= param_1) && (param_1 <= DAT_004d7da0)) {
    fVar1 = FUN_00424db1(param_1);
    dVar2 = (DAT_004f6cb8 + (double)fVar1) * param_2 + _DAT_004f6cc0;
    fVar1 = FUN_0047aba0(dVar2,(double)fVar1);
    if ((param_2 <= (double)fVar1) ||
       (dVar3 = DAT_004d7df8,
       (double)((ulonglong)((double)fVar1 - param_2) & _DAT_004a88c0) <= _DAT_004f6cc8)) {
      fVar1 = FUN_00424d37(extraout_ECX,dVar2);
      dVar3 = (double)fVar1 + DAT_004dc960;
      dVar3 = (double)(-(ulonglong)(dVar3 < 0.0) & (ulonglong)DAT_004d7df8 |
                      ~-(ulonglong)(dVar3 < 0.0) &
                      (~-(ulonglong)(DAT_004d7da0 < dVar3) & (ulonglong)dVar3 |
                      -(ulonglong)(DAT_004d7da0 < dVar3) & (ulonglong)DAT_004d7df8));
    }
  }
  return (float10)dVar3;
}

