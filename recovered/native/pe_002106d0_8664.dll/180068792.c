/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180068792 */

longlong FUN_180068792(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                      undefined8 *param_5)

{
  longlong lVar1;
  
  FUN_180067410();
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x20) = *param_4;
  *(undefined8 *)(lVar1 + 0x28) = *param_5;
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

