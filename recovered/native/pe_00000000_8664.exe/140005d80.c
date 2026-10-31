/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005d80 */

undefined8 FUN_140005d80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_50 [39];
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140005f56(local_50,param_3);
  local_29 = 0x2e;
  FUN_140005e10(param_1,"[json.exception.",param_2,&local_29,local_50,&DAT_140edaccd);
  FUN_14000109c(local_50);
  return param_1;
}

