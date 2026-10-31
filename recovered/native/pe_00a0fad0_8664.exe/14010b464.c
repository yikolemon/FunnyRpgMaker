/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b464 */

/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_140124c6c();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 *)(lVar1 + DAT_140354b18));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + DAT_140354b18) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_1401212e0(DAT_140354b18);
  DAT_140354b18 = 0;
  return;
}

