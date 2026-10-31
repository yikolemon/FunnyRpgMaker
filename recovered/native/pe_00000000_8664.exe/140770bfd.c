/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140770bfd */

void FUN_140770bfd(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  
  uVar1 = (ulonglong)unaff_retaddr;
  if ((*(char *)(uVar1 + 0xf8) == '\x01') &&
     (uVar2 = (ulonglong)*(uint *)(uVar1 + 0x3c), *(uint *)(uVar2 + 0x58) == unaff_retaddr)) {
    *(undefined4 *)(uVar2 + 0x10) = 0;
    *(undefined4 *)(uVar2 + 0x14) = 0;
  }
  *(uint *)(uVar1 + 0x3c) = unaff_retaddr_00;
  *(undefined4 *)(uVar1 + 0x40) = *(undefined4 *)(ulonglong)unaff_retaddr_00;
  *(bool *)(uVar1 + 0xf8) = ((undefined4 *)(ulonglong)unaff_retaddr_00)[0x16] == unaff_retaddr;
  return;
}

