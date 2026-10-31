/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a7578 */

int FUN_1407a7578(void)

{
  uint uVar1;
  int iVar2;
  uint unaff_retaddr;
  undefined4 local_res8;
  
  uVar1 = *(uint *)((ulonglong)local_res8 + 8);
  if (uVar1 != 0) {
    return *(int *)((ulonglong)uVar1 + 4);
  }
  iVar2 = *(int *)((ulonglong)local_res8 + 0x24);
  if (iVar2 != -1) {
    return iVar2 + *(int *)((ulonglong)unaff_retaddr + 0xa0);
  }
  return 0x1033cdfd;
}

