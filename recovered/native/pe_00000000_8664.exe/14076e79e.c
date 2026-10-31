/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e79e */

uint FUN_14076e79e(void)

{
  uint uVar1;
  uint unaff_retaddr;
  
  uVar1 = unaff_retaddr & 3;
  if ((unaff_retaddr & 3) != 0) {
    return uVar1;
  }
  if ((unaff_retaddr & 0xc) != 0) {
    return uVar1;
  }
  return 0;
}

