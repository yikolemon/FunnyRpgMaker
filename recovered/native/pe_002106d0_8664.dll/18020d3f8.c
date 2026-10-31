/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020d3f8 */

bool FUN_18020d3f8(byte param_1)

{
  if ((param_1 < 0x21) && ((0x100003600U >> ((ulonglong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0;
}

