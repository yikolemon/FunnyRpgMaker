/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140019e55 */

void FUN_140019e55(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8);
  FUN_140019e98(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  thunk_FUN_14018e090(*plVar1,0x60);
  return;
}

