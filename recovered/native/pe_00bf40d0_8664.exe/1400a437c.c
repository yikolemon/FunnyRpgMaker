/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a437c */

void FUN_1400a437c(char param_1,int *param_2,longlong *param_3)

{
  if ((param_1 != '\0') && (((uint)param_2[5] >> 9 & 1) != 0)) {
    FUN_140097d30(param_2,param_3);
    LOCK();
    param_2[5] = param_2[5] & 0xfffffd7f;
    UNLOCK();
    param_2[8] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  return;
}

