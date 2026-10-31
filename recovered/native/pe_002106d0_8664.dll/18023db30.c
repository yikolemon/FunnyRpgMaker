/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023db30 */

/* Library Function - Single Match
    _Xtime_get_ticks
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _Xtime_get_ticks(void)

{
  uint local_res8;
  uint local_resc;
  
  GetSystemTimePreciseAsFileTime(&local_res8);
  return ((ulonglong)local_resc << 0x20) + -0x19db1ded53e8000 + (ulonglong)local_res8;
}

