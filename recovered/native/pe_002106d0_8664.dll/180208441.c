/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180208441 */

void FUN_180208441(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_180208a68(param_1 + 0x178,uVar1);
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

