/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076236b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076236b(void)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  uint unaff_retaddr;
  
  puVar1 = (undefined2 *)(ulonglong)unaff_retaddr;
  uVar2 = (ulonglong)_DAT_150affac1;
  *puVar1 = *(undefined2 *)(uVar2 + 0x14a8);
  puVar1[1] = *(undefined2 *)((ulonglong)*(uint *)(uVar2 + 0x14cc) + 0x138);
  puVar1[2] = *(undefined2 *)((ulonglong)*(uint *)(uVar2 + 0x14cc) + 0x1cc);
  puVar1[3] = *(undefined2 *)(uVar2 + 0x1f74);
  puVar1[4] = *(undefined2 *)(uVar2 + 0x1f80);
  puVar1[5] = *(undefined2 *)(uVar2 + 0x1f8c);
  puVar1[6] = *(undefined2 *)(uVar2 + 0x1f98);
  puVar1[7] = *(undefined2 *)(uVar2 + 0x1fb0);
  puVar1[8] = *(undefined2 *)(uVar2 + 0x1fa4);
  puVar1[9] = *(undefined2 *)(uVar2 + 0x1fc8);
  puVar1[10] = *(undefined2 *)(uVar2 + 0x25e8);
  return;
}

