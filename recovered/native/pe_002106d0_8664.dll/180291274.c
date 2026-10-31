/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291274 */

void FUN_180291274(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_180290e40(param_1);
  }
  return;
}

