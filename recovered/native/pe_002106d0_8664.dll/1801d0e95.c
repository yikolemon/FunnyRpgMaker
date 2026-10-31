/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d0e95 */

undefined4 FUN_1801d0e95(ulonglong param_1)

{
  return *(undefined4 *)(&DAT_1803295f8 + (param_1 & 0xffffffff) * 0x10);
}

