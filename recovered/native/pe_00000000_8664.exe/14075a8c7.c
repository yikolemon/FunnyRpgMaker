/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a8c7 */

undefined8 FUN_14075a8c7(void)

{
  uint *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint unaff_retaddr;
  int local_res8;
  
  uVar3 = (ulonglong)unaff_retaddr;
  uVar2 = 1;
  if (*(int *)(uVar3 + 0x3a8) != local_res8) {
    do {
      if ((int)uVar3 == local_res8) {
        return 1;
      }
      puVar1 = (uint *)(uVar3 + 0x3a4);
      uVar3 = (ulonglong)*puVar1;
    } while (*puVar1 != 0);
    uVar2 = 0;
  }
  return uVar2;
}

