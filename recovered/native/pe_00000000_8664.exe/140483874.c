/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140483874 */

char * FUN_140483874(ulonglong param_1)

{
  return ".?AV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@" +
         (param_1 & 0xffffffff) * 0x58 + 0x30;
}

