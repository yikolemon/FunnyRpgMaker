/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140278448 */

longlong FUN_140278448(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  FUN_140278572();
  FUN_1402785e0(*(longlong *)(param_1 + 8) + 0x20,param_4,param_5);
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

