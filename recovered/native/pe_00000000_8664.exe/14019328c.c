/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019328c */

/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_1401b29f4();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 *)(lVar1 + DAT_140f32720));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + DAT_140f32720) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_1401aea30(DAT_140f32720);
  DAT_140f32720 = 0;
  return;
}

