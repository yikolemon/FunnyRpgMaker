/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ffa84 */

void FUN_1801ffa84(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801ffae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(param_1);
  return;
}

