/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a5b4 */

/* Library Function - Single Match
    __int64 __cdecl __crt_time_elapsed_leap_years<__int64>(__int64)
   
   Library: Visual Studio 2019 Release */

__int64 __cdecl __crt_time_elapsed_leap_years<__int64>(__int64 param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = param_1._4_4_ - (uint)((int)param_1 == 0);
  lVar3 = __alldiv(param_1 + 299,400,0);
  lVar4 = __alldiv((int)param_1 + -1,iVar2,100,0);
  lVar5 = __alldiv((int)param_1 + -1,iVar2,4,0);
  lVar5 = (lVar3 - lVar4) + lVar5;
  uVar1 = (uint)lVar5;
  return CONCAT44((int)((ulonglong)lVar5 >> 0x20) - (uint)(uVar1 < 0x11),uVar1 - 0x11);
}

