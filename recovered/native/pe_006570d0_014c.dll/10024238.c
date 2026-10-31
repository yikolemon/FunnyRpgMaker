/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10024238 */

void Unwind_10024238(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x14);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

