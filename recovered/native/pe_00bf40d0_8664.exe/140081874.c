/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081874 */

bool FUN_140081874(undefined8 *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = FUN_14001b880(param_1);
  dVar3 = (double)FUN_14009aea0(uVar2);
  uVar2 = FUN_14001b886((longlong)param_1);
  dVar4 = (double)FUN_14009aea0(uVar2);
  uVar2 = FUN_14001b88c((longlong)param_1);
  bVar1 = false;
  if (((DAT_1400edd30 <= dVar3) && (bVar1 = false, dVar3 <= DAT_14010a660)) &&
     (DAT_1400e66c8 < dVar4)) {
    dVar3 = (double)FUN_14009aea0(uVar2);
    bVar1 = dVar3 < DAT_14010a668;
  }
  return bVar1;
}

