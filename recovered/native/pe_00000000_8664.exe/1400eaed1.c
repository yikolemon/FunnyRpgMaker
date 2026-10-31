/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400eaed1 */

void FUN_1400eaed1(void)

{
  FUN_1400811b6("imgui_demo.cpp",0x2d04,"Examples/Assets Browser");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_140f32460) {
    FUN_140188840(&DAT_140f32460);
    if (DAT_140f32460 == -1) {
      FUN_14010a7bc(&DAT_140f323d8);
      FUN_140188b50(FUN_14010a8b7);
      _Init_thread_footer(&DAT_140f32460);
    }
  }
  FUN_14010a98a(&DAT_140f323d8,"Example: Assets Browser",&DAT_140f30931);
  return;
}

