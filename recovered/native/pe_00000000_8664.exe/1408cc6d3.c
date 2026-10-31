/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc6d3 */

void FUN_1408cc6d3(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_1408d05b0();
  FUN_1408c1f00();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar1 = *(undefined8 *)
           (ulonglong)*(uint *)(ulonglong)*(uint *)((ulonglong)*(uint *)(unaff_RBP + 0xc) + 4);
  FUN_1408cc428();
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_1408cc721(uVar1);
  *(undefined4 *)(in_FS_OFFSET + 0x1408cc719) = *(undefined4 *)(unaff_RBP + -0x10);
  return;
}

