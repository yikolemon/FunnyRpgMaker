/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b530 */

void FUN_14010b530(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_1401c9640 & 0x3f) & 0x3f;
  DAT_140354b60 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1401c9640;
  return;
}

