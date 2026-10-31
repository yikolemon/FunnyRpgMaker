/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a7f3c */

uint FUN_1404a7f3c(void)

{
  longlong unaff_GS_OFFSET;
  
  return *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 0x60) + 0x20)
                  + 8) >> 0x1f;
}

