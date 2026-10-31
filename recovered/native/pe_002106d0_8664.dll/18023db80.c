/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023db80 */

void FUN_18023db80(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_1804180c0.QuadPart == 0) {
    QueryPerformanceFrequency(local_res8);
    DAT_1804180c0 = local_res8[0];
  }
  return;
}

