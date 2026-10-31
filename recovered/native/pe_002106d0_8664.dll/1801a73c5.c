/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a73c5 */

void FUN_1801a73c5(void)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = DAT_180328fe0;
  FUN_18010ca41(&local_18,4);
  cVar1 = FUN_18010ca66("Example: Property editor",&DAT_18041f1e9,0);
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x26c2,"Examples/Property Editor");
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_180420bf8) {
      FUN_18023d500(&DAT_180420bf8);
      if (DAT_180420bf8 == -1) {
        FUN_1801c35ee(&DAT_180420ad0);
        FUN_18023d710(FUN_1801c3651);
        _Init_thread_footer(&DAT_180420bf8);
      }
    }
    if (DAT_18041f1f8 == 0) {
      DAT_18041f1f8 = FUN_1801c004f();
    }
    FUN_1801c36c8(&DAT_180420ad0,DAT_18041f1f8);
  }
  FUN_18010f900();
  return;
}

