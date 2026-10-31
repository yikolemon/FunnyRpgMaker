/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fe2b */

void FUN_14008fe2b(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x2030) = *(uint *)(DAT_140f2a910 + 0x2030) | 0x80;
  *(undefined8 *)(lVar1 + 0x2064) = *param_1;
  return;
}

