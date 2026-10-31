/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130d70 */

bool FUN_140130d70(undefined8 param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double extraout_XMM0_Qa;
  
  FUN_14010bfa8();
  dVar2 = (double)FUN_1401a7810();
  FUN_14010bfae(param_1);
  dVar3 = (double)FUN_1401a7810();
  FUN_14010bfb4(param_1);
  bVar1 = false;
  if (((DAT_140e94c00 <= dVar2) && (dVar2 <= DAT_140e95090)) && (DAT_140e8d7c0 < dVar3)) {
    FUN_1401a7810();
    bVar1 = extraout_XMM0_Qa < DAT_140e95098;
  }
  return bVar1;
}

