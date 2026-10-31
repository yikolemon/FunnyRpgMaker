/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017326b */

bool __fastcall FUN_1017326b(uint param_1,uint param_2)

{
  if (-1 < (int)(param_2 | param_1)) {
    return param_2 == 0 || (int)param_1 <= (int)(0x7fffffff / (ulonglong)param_2);
  }
  return false;
}

