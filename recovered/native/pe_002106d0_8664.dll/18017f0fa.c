/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f0fa */

bool FUN_18017f0fa(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  if (1 < param_2 + 1) {
    if ((int)(param_2 ^ param_1) < 0) {
      if (-1 < (int)param_2) {
        return -(int)(0x8000 / (ulonglong)param_2) <= (int)param_1;
      }
      iVar2 = (int)(0x8000 / (ulonglong)-param_2);
    }
    else {
      iVar2 = (int)(0x7fff / (longlong)(int)param_2);
    }
    bVar1 = (int)param_1 <= iVar2;
  }
  return bVar1;
}

