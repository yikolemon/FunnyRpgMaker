/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004d0be */

void FUN_14004d0be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014004d11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1);
  return;
}

