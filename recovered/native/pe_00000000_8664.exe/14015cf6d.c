/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015cf6d */

void FUN_14015cf6d(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_14015db5e();
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

