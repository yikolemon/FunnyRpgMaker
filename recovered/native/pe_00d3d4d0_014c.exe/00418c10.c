/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418c10 */

void __fastcall FUN_00418c10(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    iVar1 = FUN_00483c90((HANDLE)*param_1);
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00483bb0(1);
}

