/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119b9f */

void FUN_140119b9f(uint param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_140119b4d(param_1 >> 0x10 & 0xff);
  dVar2 = (double)FUN_140119b4d(param_1 >> 8 & 0xff);
  dVar3 = (double)FUN_140119b4d(param_1 & 0xff);
  FUN_140119c14(dVar3 * DAT_140e8e168 + dVar1 * DAT_140e8e180 + dVar2 * DAT_140e8e178);
  return;
}

