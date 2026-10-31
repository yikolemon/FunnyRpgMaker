/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140751460 */

int FUN_140751460(void)

{
  uint uVar1;
  int unaff_retaddr;
  uint unaff_retaddr_00;
  
  if (((unaff_retaddr_00 & 0xf000) != 0) &&
     (unaff_retaddr_00 - 1 < (unaff_retaddr_00 ^ unaff_retaddr_00 - 1))) {
    uVar1 = 0;
    if (unaff_retaddr_00 != 0) {
      for (; (unaff_retaddr_00 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    if ((uVar1 & 0x1c) == 0xc) {
      unaff_retaddr_00 = uVar1 + 0x28b;
    }
  }
  return unaff_retaddr_00 * 0x10 + unaff_retaddr + -0x1ef4;
}

