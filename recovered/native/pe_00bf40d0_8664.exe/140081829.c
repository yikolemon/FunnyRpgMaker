/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081829 */

char FUN_140081829(byte *param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = param_1[3];
  if (bVar1 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = bVar1 - (char)(((uint)param_1[2] * (uint)param_1[2] * 0x3671 +
                            (uint)param_1[1] * (uint)param_1[1] * 0xb714 +
                            (uint)*param_1 * (uint)*param_1 * 0x127b >> 0x10) / (uint)bVar1);
  }
  return cVar2;
}

