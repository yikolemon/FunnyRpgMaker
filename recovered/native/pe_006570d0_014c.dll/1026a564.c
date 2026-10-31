/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a564 */

/* Library Function - Single Match
    bool __cdecl __crt_time_is_leap_year<__int64>(__int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __crt_time_is_leap_year<__int64>(__int64 param_1)

{
  longlong lVar1;
  
  lVar1 = __allrem(param_1,4,0);
  if (((lVar1 != 0) || (lVar1 = __allrem(param_1,100,0), lVar1 == 0)) &&
     (lVar1 = __allrem(param_1 + 0x76c,400,0), lVar1 != 0)) {
    return false;
  }
  return true;
}

