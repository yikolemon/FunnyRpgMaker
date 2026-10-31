/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100011d0 */

undefined4 FUN_100011d0(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_100cef52();
    DisableThreadLibraryCalls(param_1);
    FUN_100011f4();
  }
  return 1;
}

