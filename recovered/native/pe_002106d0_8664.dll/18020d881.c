/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020d881 */

void FUN_18020d881(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_18020e472();
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

