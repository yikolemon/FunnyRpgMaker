/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018798 */

void FUN_140018798(uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14008b1e0(param_1);
  if ((int)uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14008b2a0(5);
  }
  if (param_1[0x13] != 0x7fffffff) {
    return;
  }
  param_1[0x13] = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_14008b2a0(6);
}

