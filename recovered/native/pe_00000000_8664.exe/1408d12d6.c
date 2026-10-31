/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d12d6 */

/* WARNING: Removing unreachable block (ram,0x0001408d134a) */
/* WARNING: Removing unreachable block (ram,0x0001408d136b) */
/* WARNING: Removing unreachable block (ram,0x0001408d13ab) */
/* WARNING: Removing unreachable block (ram,0x0001408d1392) */
/* WARNING: Removing unreachable block (ram,0x0001408d13ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1408d12d6(void)

{
  ulonglong uVar1;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  if (*(int *)(unaff_RBP + 8) == -2) {
    uVar1 = (ulonglong)*(uint *)(unaff_RBP + 0x18);
    *(undefined1 *)(uVar1 + 0x24) = 1;
    *(undefined4 *)(uVar1 + 0x20) = 0;
    *(undefined1 *)(uVar1 + 0x1c) = 1;
    *(undefined4 *)(uVar1 + 0x18) = 9;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(unaff_RBP + 0x18);
    *(undefined1 *)(uVar1 + 0x24) = 1;
    *(undefined4 *)(uVar1 + 0x20) = 0;
    *(undefined1 *)(uVar1 + 0x1c) = 1;
    *(undefined4 *)(uVar1 + 0x18) = 9;
    FUN_1408cbf04();
  }
  *(undefined4 *)(in_FS_OFFSET + 0x1408d13e4) = *(undefined4 *)(unaff_RBP + -0x10);
  return 0xffffffff;
}

