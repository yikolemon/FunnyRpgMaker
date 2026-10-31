/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a771b */

void FUN_1407a771b(void)

{
  int *piVar1;
  ulonglong uVar2;
  uint unaff_retaddr;
  uint local_res8;
  
  piVar1 = (int *)(ulonglong)local_res8;
  if (((uint)piVar1[1] >> 0x15 & 1) == 0) {
    uVar2 = (ulonglong)unaff_retaddr;
    if ((piVar1[1] & 0x101U) == 0) {
      *(undefined1 *)(piVar1 + 0xb) = 1;
      if (*(int *)(uVar2 + 0x24) == *piVar1) {
        piVar1[3] = -1;
        *(undefined4 *)(uVar2 + 0x1c) = 0;
        *(undefined4 *)(uVar2 + 0x18) = 0;
        return;
      }
    }
    else if (*(int *)(uVar2 + 0x24) != *piVar1) {
      *(undefined4 *)((ulonglong)unaff_retaddr + 0x1c) = *(undefined4 *)(ulonglong)local_res8;
      return;
    }
  }
  return;
}

