/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484f10 */

void FUN_00484f10(void)

{
  int iVar1;
  
  iVar1 = FUN_0048f2a0((uint *)0x0,0x10000,0x30000);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00484a80();
}

