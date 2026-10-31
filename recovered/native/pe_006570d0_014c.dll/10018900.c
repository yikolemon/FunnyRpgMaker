/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018900 */

void Unwind_10018900(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 8);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

