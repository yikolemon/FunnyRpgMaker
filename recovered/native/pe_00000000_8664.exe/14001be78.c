/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001be78 */

ulonglong FUN_14001be78(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_98 = param_2;
  local_90 = param_4;
  FUN_14000372c(local_88,param_1 + 0x10);
  FUN_14000372c(local_68,param_1 + 0x30);
  FUN_14000372c(local_48,param_1 + 0x50);
  uVar1 = FUN_14001c4fa(param_3,&local_98);
  FUN_14000109c(local_48);
  FUN_14000109c(local_68);
  FUN_14000109c(local_88);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}

