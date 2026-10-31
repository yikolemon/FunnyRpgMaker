/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd085 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1407bd085(void)

{
  uint uVar1;
  char *pcVar2;
  int unaff_retaddr;
  
  uVar1 = _DAT_2308808b1039d74c;
  pcVar2 = (char *)(ulonglong)_DAT_2308808b1039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_2308808b1039d74c;
  if (uVar1 == 0) {
    return 0;
  }
  if (unaff_retaddr < 0) {
    unaff_retaddr = *(int *)(pcVar2 + 0x48);
  }
  if (unaff_retaddr == *(int *)(pcVar2 + 0x40)) {
    return (uint)(unaff_retaddr == *(short *)(pcVar2 + 0x1be)) << 0x1b;
  }
  return *(int *)((ulonglong)*(uint *)(pcVar2 + 0x10) + (ulonglong)(uint)(unaff_retaddr * 0x74));
}

