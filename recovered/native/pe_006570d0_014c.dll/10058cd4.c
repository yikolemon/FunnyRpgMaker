/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10058cd4 */

void Unwind_10058cd4(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 8);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

