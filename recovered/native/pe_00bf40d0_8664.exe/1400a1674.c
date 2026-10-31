/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1674 */

void FUN_1400a1674(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_1400a1290(param_1);
  }
  return;
}

