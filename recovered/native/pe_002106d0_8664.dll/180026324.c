/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180026324 */

ulonglong FUN_180026324(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined1 local_24 [4];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18023d240(local_24,0);
  uVar1 = FUN_18000cbd0(&DAT_1804174a8);
  lVar2 = FUN_18000cc4a(param_1,uVar1);
  FUN_18023d290(local_24);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar2 != 0) & 0xffffffff;
}

