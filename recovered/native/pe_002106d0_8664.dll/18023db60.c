/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023db60 */

LARGE_INTEGER FUN_18023db60(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return (LARGE_INTEGER)local_res8[0].QuadPart;
}

