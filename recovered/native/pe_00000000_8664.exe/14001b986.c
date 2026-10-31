/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001b986 */

ulonglong FUN_14001b986(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined1 local_24 [4];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140188dc0(local_24,0);
  uVar1 = FUN_140013ad4(&DAT_140f2a3e0);
  lVar2 = FUN_140013b4e(param_1,uVar1);
  FUN_140188e10(local_24);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar2 != 0) & 0xffffffff;
}

