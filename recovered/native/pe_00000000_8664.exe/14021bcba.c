/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021bcba */

undefined8 FUN_14021bcba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (-1 < lVar1) {
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1 + 1;
    FUN_140217a46(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("isplaySize: %.2f,%.2f");
}

