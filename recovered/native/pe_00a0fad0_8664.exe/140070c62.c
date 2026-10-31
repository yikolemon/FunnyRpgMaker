/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140070c62 */

longlong FUN_140070c62(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_140006874();
  FUN_140070828(param_1 + 0x20,param_2 + 0x20,param_3,param_4,param_1 + 0x20,param_1,uVar1);
  return param_1;
}

