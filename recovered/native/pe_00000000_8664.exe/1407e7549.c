/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e7549 */

undefined8 FUN_1407e7549(void)

{
  uint uVar1;
  char cVar2;
  uint unaff_retaddr;
  uint local_res8;
  
  uVar1 = *(uint *)((ulonglong)local_res8 + 0x74);
  if (uVar1 == 0) {
    uVar1 = *(uint *)((ulonglong)unaff_retaddr + 0x294);
  }
  if (*(uint *)((ulonglong)uVar1 + 0xc) != 0) {
    cVar2 = (*(code *)(ulonglong)*(uint *)((ulonglong)uVar1 + 0xc))();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

