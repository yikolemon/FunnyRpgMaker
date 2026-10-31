/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140019c70 */

void Unwind_140019c70(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x18);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

