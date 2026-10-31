/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752561 */

uint FUN_140752561(void)

{
  uint uVar1;
  undefined8 unaff_RDI;
  int unaff_retaddr;
  uint unaff_retaddr_00;
  uint uVar2;
  
  if (unaff_retaddr != 0) {
    uVar2 = (uint)((ulonglong)unaff_RDI >> 0x20);
    uVar1 = ~unaff_retaddr_00;
    do {
      uVar1 = uVar1 >> 8 ^
              *(uint *)((ulonglong)((uint)*(byte *)(ulonglong)uVar2 ^ uVar1 & 0xff) * 4 + 0x102b7c58
                       );
    } while (uVar2 < unaff_retaddr + uVar2);
    unaff_retaddr_00 = ~uVar1;
  }
  return unaff_retaddr_00;
}

