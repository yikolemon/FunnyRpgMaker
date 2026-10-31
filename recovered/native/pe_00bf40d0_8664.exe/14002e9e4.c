/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002e9e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14002e9e4(double param_1,double param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  dVar2 = (double)FUN_140081c39(param_1,param_2);
  dVar3 = FUN_140081c6c(param_1,param_2);
  dVar4 = (double)FUN_1400819d2(dVar2,param_1);
  dVar5 = (double)FUN_1400819d2(dVar3,param_1);
  bVar1 = FUN_14002eb01((ulonglong)param_1);
  if (bVar1) {
    bVar1 = (dVar5 <= dVar4 || param_2 <= dVar4) ||
            dVar5 < param_2 &&
            ((double)((ulonglong)(dVar4 - dVar5) & _DAT_1400b6b00) < DAT_1400ede70 &&
            dVar4 < param_2);
  }
  else {
    bVar1 = dVar5 < param_2 && dVar5 < dVar4;
  }
  uVar6 = SUB84(dVar2,0);
  uVar7 = (int)((ulonglong)dVar2 >> 0x20);
  if (!bVar1) {
    uVar6 = SUB84(dVar3,0);
    uVar7 = (int)((ulonglong)dVar3 >> 0x20);
  }
  return CONCAT44(uVar7,uVar6);
}

