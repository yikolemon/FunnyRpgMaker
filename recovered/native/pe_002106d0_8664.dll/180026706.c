/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180026706 */

ulonglong FUN_180026706(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_180003216(local_88,param_1 + 0x10);
  FUN_180003216(local_68,param_1 + 0x30);
  FUN_180003216(local_48,param_1 + 0x50);
  uVar1 = FUN_1800269c4(param_3,&local_98);
  FUN_180001ef2(local_48);
  FUN_180001ef2(local_68);
  FUN_180001ef2(local_88);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}

