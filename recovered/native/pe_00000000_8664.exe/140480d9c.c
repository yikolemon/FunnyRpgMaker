/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140480d9c */

/* Library Function - Multiple Matches With Same Base Name
    bool __cdecl __crt_time_is_leap_year<int>(int)
    bool __cdecl __crt_time_is_leap_year<long>(long)
   
   Library: Visual Studio 2015 Release */

ulonglong __crt_time_is_leap_year<>(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar1 == 0) && (param_1 != ((int)param_1 / 100) * 100)) {
    return CONCAT71((uint7)((ulonglong)((longlong)(int)param_1 * 0x51eb851f) >> 8) & 0xffffff,1);
  }
  iVar2 = ((int)(param_1 + 0x76c) / 400) * 400;
  return (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),param_1 + 0x76c == iVar2);
}

