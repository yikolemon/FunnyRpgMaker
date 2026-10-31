/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044bc20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14044bc20(ulonglong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = (*(code *)s_LoadLibraryW_14059e282._6_8_)
                       (param_1,0x400,param_2,param_3,param_4,param_5,0,0);
  if (local_48 == 0) {
    uStack_44 = (*_DAT_14059df60)();
    if (uStack_44 != 0x3ec) goto LAB_14044bcbe;
    local_48 = (*(code *)s_LoadLibraryW_14059e282._6_8_)
                         (param_1 & 0xffffffff,0,param_2,param_3,param_4,param_5,0,0);
    if (local_48 == 0) {
      uStack_44 = (*_DAT_14059df60)();
      goto LAB_14044bcbe;
    }
  }
  uStack_44 = 0;
LAB_14044bcbe:
  return CONCAT44(uStack_44,local_48);
}

