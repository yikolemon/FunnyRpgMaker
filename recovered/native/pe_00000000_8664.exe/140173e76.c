/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140173e76 */

void FUN_140173e76(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (*(short *)(param_1 + 0x35a) != 0) {
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined2 *)(param_1 + 0x35a) = 0;
  }
  if (*(short *)(param_1 + 0x35c) != 0) {
    FUN_140128b39(uVar1,*(undefined8 *)(param_1 + 0x368));
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined2 *)(param_1 + 0x35c) = 0;
  }
  *(undefined1 *)(param_1 + 0x358) = 0;
  return;
}

