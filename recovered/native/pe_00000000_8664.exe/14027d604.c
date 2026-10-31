/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027d604 */

longlong FUN_14027d604(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14027d6b4();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  FUN_1402239f4(param_1 + 0x20,param_2);
  FUN_14027d716(param_1,param_2 + 0x28);
  return param_1;
}

