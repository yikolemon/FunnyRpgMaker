/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800559aa */

undefined8 FUN_1800559aa(undefined8 param_1,longlong param_2)

{
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_180052e03(local_68,*(undefined8 *)(param_2 + 8));
  FUN_180052e03(local_48,*(longlong *)(param_2 + 0x10) + 1);
  FUN_180055ad5(param_1," at line ",local_48,", column ",local_68);
  FUN_180001ef2(local_48);
  FUN_180001ef2(local_68);
  return param_1;
}

