/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a7f20 */

uint FUN_1404a7f20(void)

{
  longlong unaff_GS_OFFSET;
  
  return *(uint *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 0x60) + 0xbc) >> 8 &
         0xffffff01;
}

