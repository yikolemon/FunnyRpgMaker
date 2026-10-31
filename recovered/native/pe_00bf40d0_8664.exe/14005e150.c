/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005e150 */

void FUN_14005e150(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    FUN_14005eac5(*(longlong **)(param_1 + 0xe8));
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}

