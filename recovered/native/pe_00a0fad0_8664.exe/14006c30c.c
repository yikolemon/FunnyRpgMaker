/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006c30c */

longlong FUN_14006c30c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140006874();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return param_1;
}

