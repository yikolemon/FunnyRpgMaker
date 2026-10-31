/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401baad0 */

void FUN_1401baad0(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_1401b9820(&DAT_140edd258,0x1e,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}

