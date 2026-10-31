/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a3c2 */

/* Library Function - Single Match
    __wmkdir
   
   Library: Visual Studio 2019 Release */

int __cdecl __wmkdir(wchar_t *_Path)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = CreateDirectoryW(_Path,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    ___acrt_errno_map_os_error(DVar2);
    return -1;
  }
  return 0;
}

