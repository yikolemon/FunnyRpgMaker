/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016db4e */

undefined8 FUN_14016db4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x18;
  FUN_14016e90d(lVar1,*(undefined8 *)(param_1 + 0x10));
  FUN_14016e930(param_1 + 0x90);
  FUN_14016e951(param_1 + 0xa8);
  *(longlong *)(param_1 + 0xa8) = lVar1;
  FUN_14016e99b(param_1 + 0xe0);
  *(longlong *)(param_1 + 0xe0) = lVar1;
  return 0;
}

