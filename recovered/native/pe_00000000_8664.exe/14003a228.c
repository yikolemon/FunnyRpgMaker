/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003a228 */

void Unwind_14003a228(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x28);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

