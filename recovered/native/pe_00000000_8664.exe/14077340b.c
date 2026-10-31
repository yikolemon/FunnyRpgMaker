/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077340b */

undefined8 FUN_14077340b(void)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong unaff_RDI;
  
  puVar2 = &stack0xfffffffffffffff0;
  do {
    *(undefined8 *)(puVar2 + -8) = 0;
    *(ulonglong *)(puVar2 + -0x10) = unaff_RDI >> 0x20;
    *(undefined8 *)(puVar2 + -0x18) = 0x14077341b;
    iVar1 = FUN_1407733f8();
    puVar2 = (undefined1 *)(ulonglong)((int)(puVar2 + -0x10) + 8);
  } while (iVar1 != 0);
  return 0;
}

