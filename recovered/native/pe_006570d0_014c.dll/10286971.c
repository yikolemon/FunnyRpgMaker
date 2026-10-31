/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10286971 */

/* Library Function - Multiple Matches With Different Base Names
    __itow_s
    __ltow_s
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl FID_conflict___itow_s(long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix)

{
  int iVar1;
  undefined1 local_8;
  
  if ((_Radix != 10) || (local_8 = true, -1 < _Val)) {
    local_8 = false;
  }
  iVar1 = common_xtox_s<unsigned_long,wchar_t>(_Val,_DstBuf,_SizeInWords,_Radix,local_8);
  return iVar1;
}

