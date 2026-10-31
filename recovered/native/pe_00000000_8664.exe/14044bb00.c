/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044bb00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14044bb00(ulonglong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int local_res8 [8];
  int local_48;
  int iStack_44;
  
  if (((int)param_1 == 0xfde9) || ((int)param_1 == 0xd698)) {
    local_48 = (*(code *)s_LoadLibraryW_14059e282._6_8_)
                         (param_1,0x80,param_2,param_3,param_4,param_5,0,0);
  }
  else {
    local_res8[0] = 0;
    local_48 = (*(code *)s_LoadLibraryW_14059e282._6_8_)
                         (param_1,0x400,param_2,param_3,param_4,param_5,0,local_res8);
    if (local_res8[0] != 0) {
      return 0x45900000000;
    }
  }
  if (local_48 == 0) {
    iStack_44 = (*_DAT_14059df60)();
    if (iStack_44 != 0x3ec) goto LAB_14044bc01;
    local_48 = (*(code *)s_LoadLibraryW_14059e282._6_8_)
                         (param_1 & 0xffffffff,0,param_2,param_3,param_4,param_5,0,0);
    if (local_48 == 0) {
      iStack_44 = (*_DAT_14059df60)();
      goto LAB_14044bc01;
    }
  }
  iStack_44 = 0;
LAB_14044bc01:
  return CONCAT44(iStack_44,local_48);
}

