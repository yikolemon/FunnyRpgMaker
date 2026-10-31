/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005aa34 */

bool FUN_14005aa34(byte param_1)

{
  if ((param_1 < 0x21) && ((0x100003600U >> ((ulonglong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return param_1 == 0;
}

