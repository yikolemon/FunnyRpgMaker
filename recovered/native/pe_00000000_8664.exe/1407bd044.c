/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd044 */

int FUN_1407bd044(void)

{
  int iVar1;
  ulonglong uVar2;
  uint unaff_retaddr;
  int unaff_retaddr_00;
  
  uVar2 = (ulonglong)unaff_retaddr;
  if ((*(char *)(uVar2 + 0x1ed) != '\0') ||
     (iVar1 = 0x10356101, unaff_retaddr_00 < *(short *)(uVar2 + 0x1ba))) {
    iVar1 = (int)*(short *)((ulonglong)*(uint *)(uVar2 + 0x10) + 0x54 +
                           (ulonglong)(uint)(unaff_retaddr_00 * 0x74));
    if (iVar1 == -1) {
      iVar1 = 0x10356101;
    }
    else {
      iVar1 = iVar1 + *(int *)(uVar2 + 0x164);
    }
  }
  return iVar1;
}

