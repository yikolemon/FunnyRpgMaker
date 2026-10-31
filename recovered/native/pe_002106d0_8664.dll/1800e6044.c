/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e6044 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e6044(void)

{
  double dVar1;
  
  dVar1 = DAT_1802ac578;
  if (DAT_180418b98 != '\0') {
    dVar1 = (double)_DAT_180418b9c;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800e606d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_180418890 + 0x20))(DAT_180418890,dVar1);
  return;
}

