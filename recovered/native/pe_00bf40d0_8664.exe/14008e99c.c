/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008e99c */

undefined8 FUN_14008e99c(bool param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (param_1) {
    if (DAT_140142be0 != 0) {
      iVar1 = common_flush_all(true);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_1400a3f38(0x14010b7b0,0x14010b8b0);
  return uVar2;
}

