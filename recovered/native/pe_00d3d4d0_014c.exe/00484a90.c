/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484a90 */

undefined4 FUN_00484a90(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (((*piVar3 == -0x1f928c9d) && (piVar3[4] == 3)) &&
     ((iVar1 = piVar3[5], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    piVar2 = (int *)FUN_00485630();
    *piVar2 = (int)piVar3;
    iVar1 = param_1[1];
    piVar3 = (int *)FUN_00485640();
    *piVar3 = iVar1;
                    /* WARNING: Subroutine does not return */
    FUN_00493bd8();
  }
  return 0;
}

