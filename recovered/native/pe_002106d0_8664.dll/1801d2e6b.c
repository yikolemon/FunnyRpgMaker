/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2e6b */

void FUN_1801d2e6b(uint param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_1801d2e19(param_1 >> 0x10 & 0xff);
  dVar2 = (double)FUN_1801d2e19(param_1 >> 8 & 0xff);
  dVar3 = (double)FUN_1801d2e19(param_1 & 0xff);
  FUN_1801d2ee0(dVar3 * DAT_18032a178 + dVar1 * DAT_18032a190 + dVar2 * DAT_18032a188);
  return;
}

