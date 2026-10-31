/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180272538 */

/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_180294eb4();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 *)(lVar1 + DAT_180420d80));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + DAT_180420d80) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_180290e40(DAT_180420d80);
  DAT_180420d80 = 0;
  return;
}

