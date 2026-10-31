/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012fe69 */

undefined4 FUN_14012fe69(ulonglong param_1)

{
  return *(undefined4 *)(&DAT_140e94df8 + (param_1 & 0xffffffff) * 0x10);
}

