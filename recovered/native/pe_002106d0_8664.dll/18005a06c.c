/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005a06c */

void Unwind_18005a06c(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x10);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

