/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102870f6 */

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  int iVar1;
  undefined1 local_8 [4];
  
  iVar1 = ___dcrt_lowio_ensure_console_output_initialized();
  if (iVar1 != 0) {
    iVar1 = ___dcrt_write_console(&_WCh,1,local_8);
    if (iVar1 != 0) {
      return _WCh;
    }
  }
  return 0xffff;
}

