/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c134 */

longlong FUN_18006c134(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_18006c1e4();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  FUN_180012524(param_1 + 0x20,param_2);
  FUN_18006c246(param_1,param_2 + 0x28);
  return param_1;
}

