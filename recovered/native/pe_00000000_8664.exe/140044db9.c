/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140044db9 */

ulonglong FUN_140044db9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  undefined1 local_130 [136];
  longlong local_a8;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140042226(local_130,param_1,0x20,0x40,1);
  if (local_a8 != 0) {
    FUN_14004227e(local_130,param_2,param_3);
  }
  FUN_1400423ae();
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_a8 != 0) & 0xffffffff;
}

