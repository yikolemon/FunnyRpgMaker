/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f0cf */

bool FUN_18017f0cf(uint param_1,uint param_2)

{
  bool bVar1;
  
  if ((int)(param_2 ^ param_1) < 0) {
    bVar1 = true;
  }
  else if ((int)(param_2 & param_1) < 0) {
    bVar1 = (int)(-0x80000000 - param_2) <= (int)param_1;
  }
  else {
    bVar1 = (int)param_1 <= (int)(param_2 ^ 0x7fffffff);
  }
  return bVar1;
}

