/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ea8d8 */

void FUN_1800ea8d8(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0x222222222222223) {
    lVar1 = FUN_1800013e0(param_2 * 0x78);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x78;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

