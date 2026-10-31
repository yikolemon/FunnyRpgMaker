/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402eae */

void __cdecl FUN_00402eae(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + 1;
  *param_2 = iVar1;
  if (-1 < iVar1) {
    FUN_004027ed(iVar1 * 2);
    *param_2 = *param_2 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00402834();
}

