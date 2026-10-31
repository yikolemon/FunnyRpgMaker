/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800246a0 */

void Unwind_1800246a0(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x28);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

