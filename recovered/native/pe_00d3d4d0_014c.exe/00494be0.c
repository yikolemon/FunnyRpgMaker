/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494be0 */

void Catch_All_00494be0(void)

{
  PVOID pvVar1;
  int unaff_EBP;
  
  pvVar1 = FUN_00494580();
  *(undefined4 *)((int)pvVar1 + 0x1c) = *(undefined4 *)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  FUN_00484ff0((int *)0x0,(byte *)0x0);
}

