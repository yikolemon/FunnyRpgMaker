/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140795972 */

/* WARNING: Instruction at (ram,0x0001407959c2) overlaps instruction at (ram,0x0001407959c1)
    */

void FUN_140795972(void)

{
  uint uVar1;
  char cVar2;
  ulonglong unaff_RBX;
  
  if (*(char *)(unaff_RBX >> 0x20) == '%') {
    cVar2 = '%';
    do {
      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        uVar1 = 0x900 >> ((byte)(cVar2 - 1) & 0x1f);
joined_r0x0001407959b5:
        if ((uVar1 & 1) == 0) {
          return;
        }
      }
      else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        uVar1 = 0x2480a80 >> ((byte)(cVar2 - 1) & 0x1f);
        goto joined_r0x0001407959b5;
      }
      cVar2 = *(char *)(unaff_RBX >> 0x20);
    } while (cVar2 != '\0');
  }
  return;
}

