/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140024fff */

void FUN_140024fff(uint param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = FUN_140024fad(param_1 >> 0x10 & 0xff);
  dVar2 = FUN_140024fad(param_1 >> 8 & 0xff);
  dVar3 = FUN_140024fad(param_1 & 0xff);
  FUN_140025074(dVar3 * DAT_1400e72c8 + dVar1 * DAT_1400e72e0 + dVar2 * DAT_1400e72d8);
  return;
}

