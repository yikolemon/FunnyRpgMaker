/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e5b8c */

undefined8 FUN_1400e5b8c(longlong param_1,uint param_2,uint param_3)

{
  param_2 = param_2 >> 0xd;
  if (param_2 <= param_3 >> 0xd) {
    do {
      if ((param_2 < 8) && ((*(byte *)(param_1 + 0x34) >> (param_2 & 0x1f) & 1) != 0)) {
        return 0;
      }
      param_2 = param_2 + 1;
    } while ((param_3 >> 0xd) + 1 != param_2);
  }
  return 1;
}

