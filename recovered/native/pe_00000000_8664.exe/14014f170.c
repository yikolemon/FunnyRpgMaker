/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014f170 */

void FUN_14014f170(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014014f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1);
  return;
}

