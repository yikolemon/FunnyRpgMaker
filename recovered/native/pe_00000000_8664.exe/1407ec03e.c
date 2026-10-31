/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ec03e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1407ec03e(char param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *unaff_RDI;
  
  uVar1 = *(undefined4 *)((ulonglong)((int)&stack0xffffffffffffffe0 - 0x84) + 0xa4);
  pcVar2 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff80);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  *unaff_RDI = *unaff_RDI + param_1;
  return uVar1;
}

