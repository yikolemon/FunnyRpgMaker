/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003a574 */

ulonglong FUN_14003a574(undefined8 param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14001679e(local_88,param_1,0);
  FUN_140015bfa(local_88,local_48);
  FUN_1400045b6(param_1,local_68);
  iVar1 = FUN_14003a6c0(local_68);
  FUN_140001056(local_68);
  FUN_140001056(local_48);
  FUN_140001056(local_88);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 == 0) & 0xffffffff;
}

