/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003c79f */

void FUN_14003c79f(longlong param_1,uint *param_2)

{
  if (*param_2 < *(uint *)(param_1 + 0x1f8)) {
                    /* WARNING: Could not recover jumptable at 0x00014003c7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x310))(param_1,*param_2,param_2[1],*(code **)(param_1 + 0x310));
    return;
  }
  if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

