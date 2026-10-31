/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000deba */

longlong FUN_14000deba(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_14000372c();
  FUN_14000d704(param_1 + 0x20,param_2 + 0x20,param_3,param_4,param_1 + 0x20,param_1,uVar1);
  return param_1;
}

