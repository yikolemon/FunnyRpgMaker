/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022abb0 */

char FUN_1022abb0(uint param_1,uint param_2,char param_3)

{
  uint uVar1;
  
  if ((param_3 != '\0') && (0x30 < param_1)) {
    if (param_2 < 0x11) {
      return (1000 < param_1) * '\x02';
    }
    if (param_2 < 0x31) {
      return (0x50 < param_1) * '\x02';
    }
    return 2;
  }
  if (param_2 < 0x21) {
    return false;
  }
  if (param_2 < 0x31) {
    return 0x1a0 < param_1;
  }
  if (param_2 < 0x41) {
    return 0xe0 < param_1;
  }
  if (param_2 < 0x51) {
    return 0x80 < param_1;
  }
  uVar1 = 0x30;
  if (0x21c < param_2) {
    uVar1 = 0x20;
  }
  return uVar1 < param_1;
}

