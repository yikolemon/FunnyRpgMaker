/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024885 */

void FUN_180024885(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x18);
  FUN_1800248c8(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  thunk_FUN_1802464a0(*plVar1,0x60);
  return;
}

