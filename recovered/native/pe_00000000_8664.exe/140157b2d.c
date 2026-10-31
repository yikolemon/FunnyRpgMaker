/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140157b2d */

void FUN_140157b2d(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_140158154(param_1 + 0x178,uVar1);
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

