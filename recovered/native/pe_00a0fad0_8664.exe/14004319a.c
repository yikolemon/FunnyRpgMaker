/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004319a */

longlong FUN_14004319a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14004324a();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  FUN_14000ff1e(param_1 + 0x20,param_2);
  FUN_1400432ac(param_1,param_2 + 0x28);
  return param_1;
}

