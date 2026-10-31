/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef16b */

void FUN_1801ef16b(longlong param_1,uint *param_2)

{
  if (*param_2 < *(uint *)(param_1 + 0x1f8)) {
                    /* WARNING: Could not recover jumptable at 0x0001801ef183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x310))(param_1,*param_2,param_2[1],*(code **)(param_1 + 0x310));
    return;
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

