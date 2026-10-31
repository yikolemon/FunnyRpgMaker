/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140080870 */

undefined8 FUN_140080870(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  byte bVar2;
  
  pcVar1 = (char *)*param_2;
  if (pcVar1 != (char *)param_2[1]) {
    while ((0xb4 < (byte)(*pcVar1 + 0x85U) &&
           ((bVar2 = *pcVar1 - 0x3a, 0x26 < bVar2 ||
            ((0x7e0000007fU >> ((ulonglong)bVar2 & 0x3f) & 1) == 0))))) {
      pcVar1 = pcVar1 + 1;
      if (pcVar1 == (char *)param_2[1]) {
        return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
      }
    }
  }
  return 0;
}

