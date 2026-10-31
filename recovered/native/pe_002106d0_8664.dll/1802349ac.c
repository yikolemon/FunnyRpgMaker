/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802349ac */

bool FUN_1802349ac(undefined8 param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double extraout_XMM0_Qa;
  
  FUN_18019efb4();
  dVar2 = (double)FUN_180289960();
  FUN_18019efba(param_1);
  dVar3 = (double)FUN_180289960();
  FUN_18019efc0(param_1);
  bVar1 = false;
  if (((DAT_180330c10 <= dVar2) && (dVar2 <= DAT_18034d560)) && (DAT_180328078 < dVar3)) {
    FUN_180289960();
    bVar1 = extraout_XMM0_Qa < DAT_18034d568;
  }
  return bVar1;
}

