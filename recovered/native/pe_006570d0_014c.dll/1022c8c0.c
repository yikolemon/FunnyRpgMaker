/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c8c0 */

LARGE_INTEGER FUN_1022c8c0(void)

{
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  return (LARGE_INTEGER)local_c.QuadPart;
}

