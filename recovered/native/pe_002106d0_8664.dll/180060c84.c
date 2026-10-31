/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180060c84 */

longlong FUN_180060c84(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180060d32();
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_18006160c(param_1 + 0x48,*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 3,
                param_2 + 0x48,param_2 + 0x50,param_1 + 0x48,param_1,uVar1);
  return param_1;
}

