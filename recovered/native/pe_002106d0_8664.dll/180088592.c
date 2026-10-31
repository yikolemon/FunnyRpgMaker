/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180088592 */

longlong FUN_180088592(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180003216();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return param_1;
}

