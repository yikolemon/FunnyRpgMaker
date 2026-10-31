/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b490 */

uint FUN_14076b490(void)

{
  uint uVar1;
  uint unaff_retaddr;
  
  if ((unaff_retaddr & 0xffff0fff) - 0x20f < 8) {
    uVar1 = FUN_14076b4b3();
    unaff_retaddr = unaff_retaddr | uVar1;
  }
  return unaff_retaddr;
}

