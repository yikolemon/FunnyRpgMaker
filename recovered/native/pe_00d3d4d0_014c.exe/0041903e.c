/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041903e */

void __fastcall FUN_0041903e(uint *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004839f0(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00483bb0(5);
  }
  if (param_1[0xb] != 0x7fffffff) {
    return;
  }
  param_1[0xb] = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_00483bb0(6);
}

