/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044b190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14044b190(longlong *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_24 = param_4 & 0xffff;
  local_20 = param_4 & 0xffff0000;
  local_1c = 0;
  local_28 = 0x20;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = (*(code *)s_GetCurrentThread_14059dd7e._10_8_)(param_2,param_3,7,3,&local_28);
  *param_1 = lVar1;
  if (lVar1 != -1) {
    return 0;
  }
  uVar2 = (*_DAT_14059df60)();
  return uVar2;
}

