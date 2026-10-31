/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140274b1e */

void FUN_140274b1e(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2 + 1;
  *param_2 = uVar1;
  if (uVar1 >> 0x3e == 0) {
    FUN_1402128b0(uVar1 * 4);
    *param_2 = *param_2 - 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

