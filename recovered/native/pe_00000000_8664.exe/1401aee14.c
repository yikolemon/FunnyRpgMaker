/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aee14 */

void FUN_1401aee14(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_1401aea30(param_1);
  }
  return;
}

