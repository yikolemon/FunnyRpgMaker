/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001a71c */

void FUN_14001a71c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014001a72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,*param_3,param_4);
  return;
}

