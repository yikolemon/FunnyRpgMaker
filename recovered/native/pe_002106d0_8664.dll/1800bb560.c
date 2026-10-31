/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb560 */

void FUN_1800bb560(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  if (param_2 != param_3) {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar1 = FUN_180239630(0x38);
      FUN_1800b0a66(lVar1 + 0x10,param_2 + 2);
      *(longlong *)(param_1 + 0x18) = lVar1;
      *(longlong *)(param_1 + 0x10) = lVar1;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      param_2 = (undefined8 *)*param_2;
    }
    for (; param_2 != param_3; param_2 = (undefined8 *)*param_2) {
      lVar1 = FUN_180239630(0x38);
      FUN_1800b0a66(lVar1 + 0x10,param_2 + 2);
      **(longlong **)(param_1 + 0x10) = lVar1;
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 0x10);
      *(longlong *)(param_1 + 0x10) = lVar1;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    }
  }
  return;
}

