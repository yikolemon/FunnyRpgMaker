/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140193320 */

void FUN_140193320(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_140f17b40 & 0x3f) & 0x3f;
  DAT_140f32730 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_140f17b40;
  return;
}

