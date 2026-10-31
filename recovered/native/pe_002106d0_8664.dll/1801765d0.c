/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801765d0 */

void FUN_1801765d0(undefined8 param_1)

{
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x160) =
       param_1;
  return;
}

