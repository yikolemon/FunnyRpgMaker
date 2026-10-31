/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140011442 */

undefined8 FUN_140011442(undefined8 param_1,longlong param_2)

{
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14000d637(local_68,*(undefined8 *)(param_2 + 8));
  FUN_14000d637(local_48,*(longlong *)(param_2 + 0x10) + 1);
  FUN_14001156d(param_1," at line ",local_48,", column ",local_68);
  FUN_14000109c(local_48);
  FUN_14000109c(local_68);
  return param_1;
}

