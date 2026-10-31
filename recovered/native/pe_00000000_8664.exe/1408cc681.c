/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc681 */

void FUN_1408cc681(void)

{
  undefined8 uVar1;
  int *piVar2;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  uVar1 = *(undefined8 *)(ulonglong)*(uint *)(unaff_RBP + 8);
  FUN_1408c1f00();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  piVar2 = (int *)(ulonglong)
                  *(uint *)((ulonglong)
                            *(uint *)(ulonglong)*(uint *)(ulonglong)*(uint *)(unaff_RBP + 0xc) +
                           0x48);
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408cc6c7(uVar1);
  *(undefined4 *)(in_FS_OFFSET + 0x1408cc6bf) = *(undefined4 *)(unaff_RBP + -0x10);
  return;
}

