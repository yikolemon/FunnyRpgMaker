/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801dff70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801dff70(undefined8 param_1,double param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = FUN_180234d71();
  uVar4 = FUN_180234da4(param_1,param_2);
  dVar5 = (double)FUN_180234b0a(uVar3,param_1);
  dVar6 = (double)FUN_180234b0a(uVar4,param_1);
  cVar1 = FUN_1801e008d(param_1);
  if (cVar1 == '\0') {
    bVar2 = dVar6 < param_2 && dVar6 < dVar5;
  }
  else {
    bVar2 = (dVar6 <= dVar5 || param_2 <= dVar5) ||
            dVar6 < param_2 &&
            ((double)((ulonglong)(dVar5 - dVar6) & _DAT_1802ac560) < DAT_1802b7bf0 &&
            dVar5 < param_2);
  }
  uVar7 = (int)uVar3;
  uVar8 = (int)((ulonglong)uVar3 >> 0x20);
  if (!bVar2) {
    uVar7 = (int)uVar4;
    uVar8 = (int)((ulonglong)uVar4 >> 0x20);
  }
  return CONCAT44(uVar8,uVar7);
}

