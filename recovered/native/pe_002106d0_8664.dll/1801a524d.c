/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a524d */

void FUN_1801a524d(void)

{
  FUN_180107e9e("imgui_demo.cpp",0x2d04,"Examples/Assets Browser");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_180420d10) {
    FUN_18023d500(&DAT_180420d10);
    if (DAT_180420d10 == -1) {
      FUN_1801c4ab8(&DAT_180420c88);
      FUN_18023d710(FUN_1801c4bb3);
      _Init_thread_footer(&DAT_180420d10);
    }
  }
  FUN_1801c4c86(&DAT_180420c88,"Example: Assets Browser",&DAT_18041f1e1);
  return;
}

