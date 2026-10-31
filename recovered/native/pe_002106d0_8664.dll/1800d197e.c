/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d197e */

longlong FUN_1800d197e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                      undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_18006d52a();
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x20) = *param_4;
  uVar2 = param_5[1];
  *(undefined8 *)(lVar1 + 0x28) = *param_5;
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = param_5[2];
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

