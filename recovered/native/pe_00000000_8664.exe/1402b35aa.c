/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b35aa */

longlong FUN_1402b35aa(longlong param_1,undefined8 param_2)

{
  undefined1 local_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  FUN_140212724(param_1,"o long");
  *(undefined1 *)(local_20 + 0x20) = 0;
  local_38 = local_20 + 0x28;
  FUN_140212724(local_38,"o long");
  local_30 = local_20 + 0x48;
  *(undefined8 *)(local_20 + 0x48) = 0;
  *(undefined8 *)(local_20 + 0x50) = 0;
  *(undefined8 *)(local_20 + 0x58) = 0;
  local_28 = local_20 + 0x60;
  *(undefined8 *)(local_20 + 0x60) = 0;
  *(undefined8 *)(local_20 + 0x68) = 0;
  *(undefined8 *)(local_20 + 0x70) = 0;
  *(undefined8 *)(local_20 + 0x78) = 0;
  FUN_14029cd70(param_2,local_58);
  FUN_1402239f4(local_20,local_58);
  FUN_1402125bc(local_58);
  return local_20;
}

