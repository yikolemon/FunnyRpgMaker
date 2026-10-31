/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023c230 */

char FUN_18023c230(ulonglong param_1,ulonglong param_2,char param_3)

{
  bool bVar1;
  
  if ((param_3 != '\0') && (0x30 < param_1)) {
    if (param_2 < 0x11) {
      return (1000 < param_1) * '\x02';
    }
    if (param_2 < 0x31) {
      return (0x50 < param_1) * '\x02';
    }
    return 2;
  }
  bVar1 = false;
  if (0x20 < param_2) {
    if (param_2 < 0x31) {
      return 0x1a0 < param_1;
    }
    if (param_2 < 0x41) {
      return 0xe0 < param_1;
    }
    if (param_2 < 0x51) {
      return 0x80 < param_1;
    }
    if (param_2 < 0x21d) {
      return 0x30 < param_1;
    }
    bVar1 = 0x20 < param_1;
  }
  return bVar1;
}

