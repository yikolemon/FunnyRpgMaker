/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042e80c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0042e80c(double param_1,double param_2)

{
  double dVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar3 = FUN_0047aeab(SUB84(param_1,0),uVar7,SUB84(param_2,0),uVar8);
  fVar4 = FUN_0047aefa(SUB84(param_1,0),uVar7,SUB84(param_2,0),uVar8);
  fVar5 = (float10)FUN_0047abf0((double)fVar3,param_1);
  dVar6 = (double)fVar5;
  fVar5 = (float10)FUN_0047abf0((double)fVar4,param_1);
  dVar1 = (double)fVar5;
  bVar2 = FUN_0042e96a(param_1);
  if (bVar2) {
    bVar2 = (dVar1 <= dVar6 || param_2 <= dVar6) ||
            dVar1 < param_2 &&
            ((double)((ulonglong)(dVar6 - dVar1) & _DAT_004a88c0) < DAT_004dcaf8 && dVar6 < param_2)
    ;
  }
  else {
    bVar2 = dVar1 < param_2 && dVar1 < dVar6;
  }
  dVar6 = (double)fVar3;
  if (!bVar2) {
    dVar6 = (double)fVar4;
  }
  return (float10)dVar6;
}

