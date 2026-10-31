/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402d793c */

longlong FUN_1402d793c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1402788e0();
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = param_4[1];
  *(undefined8 *)(lVar1 + 0x20) = *param_4;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

