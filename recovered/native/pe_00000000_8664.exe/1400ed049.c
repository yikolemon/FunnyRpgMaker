/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ed049 */

void FUN_1400ed049(void)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = DAT_140e8d380;
  FUN_140085d59(&local_18,4);
  cVar1 = FUN_140085d7e("Example: Property editor",&DAT_140f30939,0);
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x26c2,"Examples/Property Editor");
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_140f32348) {
      FUN_140188840(&DAT_140f32348);
      if (DAT_140f32348 == -1) {
        FUN_1401092f2(&DAT_140f32220);
        FUN_140188b50(FUN_140109355);
        _Init_thread_footer(&DAT_140f32348);
      }
    }
    if (DAT_140f30948 == 0) {
      DAT_140f30948 = FUN_140105d53();
    }
    FUN_1401093cc(&DAT_140f32220,DAT_140f30948);
  }
  FUN_140088c18();
  return;
}

