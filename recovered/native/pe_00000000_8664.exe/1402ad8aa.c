/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402ad8aa */

ulonglong FUN_1402ad8aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 unaff_RBX;
  void *local_48 [3];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_2[1] - *param_2;
  FUN_1402889dc(param_1,local_48);
  iVar1 = memcmp((void *)*param_2,local_48[0],param_2[1] - *param_2);
  FUN_1402161ba(local_48);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 == 0) & 0xffffffff;
}

