/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c85c0 */

int FUN_1408c85c0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint unaff_retaddr;
  
  puVar4 = (uint *)(ulonglong)unaff_retaddr;
  if ((unaff_retaddr & 3) != 0) {
    do {
      uVar1 = *puVar4;
      uVar2 = (int)puVar4 + 1;
      puVar4 = (uint *)(ulonglong)uVar2;
      if ((char)uVar1 == '\0') goto LAB_1408c8623;
    } while ((uVar2 & 3) != 0);
    register0x00000020 = (BADSPACEBASE *)((ulonglong)&stack0x00000000 & 0xffffffff);
  }
  do {
    do {
      uVar1 = *puVar4;
      iVar3 = (int)puVar4;
      uVar2 = iVar3 + 4;
      puVar4 = (uint *)(ulonglong)uVar2;
    } while (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = puVar4[-1];
    if ((char)uVar1 == '\0') {
      return iVar3 - *(int *)((longlong)register0x00000020 + 4);
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (iVar3 + 1) - *(int *)((longlong)register0x00000020 + 4);
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (iVar3 + 2) - *(int *)((longlong)register0x00000020 + 4);
    }
  } while ((uVar1 & 0xff000000) != 0);
LAB_1408c8623:
  return (uVar2 - 1) - *(int *)((longlong)register0x00000020 + 4);
}

