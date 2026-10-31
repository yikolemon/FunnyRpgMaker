/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017905b */

bool FUN_18017905b(uint param_1,uint param_2)

{
  if ((int)(param_2 | param_1) < 0) {
    return false;
  }
  if (param_2 != 0) {
    return (int)param_1 <= (int)(0x7fffffff / (ulonglong)param_2);
  }
  return true;
}

