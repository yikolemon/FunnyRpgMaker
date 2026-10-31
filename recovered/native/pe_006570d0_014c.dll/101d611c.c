/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d611c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101d611c(undefined8 param_1,double param_2)

{
  double dVar1;
  char cVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  bool bVar6;
  double dVar7;
  
  fVar3 = (float10)FUN_10223e3f(param_1,param_2);
  fVar4 = (float10)FUN_10223e8e(param_1,param_2);
  fVar5 = (float10)FUN_10223b84((double)fVar3,param_1);
  dVar7 = (double)fVar5;
  fVar5 = (float10)FUN_10223b84((double)fVar4,param_1);
  dVar1 = (double)fVar5;
  cVar2 = FUN_101d627a(param_1);
  if (cVar2 == '\0') {
    bVar6 = dVar1 < param_2 && dVar1 < dVar7;
  }
  else {
    bVar6 = (dVar1 <= dVar7 || param_2 <= dVar7) ||
            dVar1 < param_2 &&
            ((double)((ulonglong)(dVar7 - dVar1) & _DAT_1028b420) < DAT_102944a8 && dVar7 < param_2)
    ;
  }
  dVar7 = (double)fVar3;
  if (!bVar6) {
    dVar7 = (double)fVar4;
  }
  return (float10)dVar7;
}

