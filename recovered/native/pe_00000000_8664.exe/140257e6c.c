/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140257e6c */

undefined8 FUN_140257e6c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (-1 < lVar1) {
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1 + 1;
    FUN_1402569ac(param_2,*(undefined8 *)(param_1 + 0x10));
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("isplaySize: %.2f,%.2f");
}

