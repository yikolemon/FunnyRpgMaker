/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd486f */

void FUN_140dd486f(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  
  FUN_140dd7bc0();
  FUN_140dce18c();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar1 = *(undefined8 *)
           (ulonglong)*(uint *)(ulonglong)*(uint *)((ulonglong)*(uint *)(unaff_RBP + 0xc) + 4);
  FUN_140dd45c4();
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  FUN_140dd48bd(uVar1);
  *(undefined4 *)(in_FS_OFFSET + 0x140dd48b5) = *(undefined4 *)(unaff_RBP + -0x10);
  return;
}

