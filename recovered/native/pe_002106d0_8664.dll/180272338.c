/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180272338 */

undefined4 FUN_180272338(bool param_1)

{
  undefined4 uVar1;
  
  if (param_1 != false) {
    if (DAT_180420d80 != 0) {
      common_flush_all(param_1);
    }
    return 1;
  }
  uVar1 = FUN_1802949d0(&PTR_LAB_18034e6f0,&DAT_18034e7f0);
  return uVar1;
}

