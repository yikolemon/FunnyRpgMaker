/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b370a */

longlong FUN_1402b370a(longlong param_1,undefined8 param_2)

{
  undefined1 local_50 [32];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  FUN_140212724(param_1,"o long");
  local_30 = local_20 + 0x20;
  *(undefined8 *)(local_20 + 0x20) = 0;
  *(undefined8 *)(local_20 + 0x28) = 0;
  *(undefined8 *)(local_20 + 0x30) = 0;
  local_28 = local_20 + 0x38;
  *(undefined8 *)(local_20 + 0x38) = 0;
  *(undefined8 *)(local_20 + 0x40) = 0;
  *(undefined8 *)(local_20 + 0x48) = 0;
  *(undefined8 *)(local_20 + 0x50) = 0;
  FUN_14029cd70(param_2,local_50);
  FUN_1402239f4(local_20,local_50);
  FUN_1402125bc(local_50);
  return local_20;
}

