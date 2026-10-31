/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023298 */

undefined4 FUN_140023298(ulonglong param_1)

{
  return *(undefined4 *)(&DAT_1400e6748 + (param_1 & 0xffffffff) * 0x10);
}

