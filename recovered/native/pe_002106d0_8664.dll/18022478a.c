/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022478a */

void FUN_18022478a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  if (*(short *)(param_1 + 0x35a) != 0) {
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined2 *)(param_1 + 0x35a) = 0;
  }
  if (*(short *)(param_1 + 0x35c) != 0) {
    FUN_1801c9b65(uVar1,*(undefined8 *)(param_1 + 0x368));
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined2 *)(param_1 + 0x35c) = 0;
  }
  *(undefined1 *)(param_1 + 0x358) = 0;
  return;
}

