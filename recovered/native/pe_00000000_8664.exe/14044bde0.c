/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044bde0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14044bde0(undefined8 param_1)

{
  int iVar1;
  uint local_res10;
  undefined1 local_28 [16];
  byte local_18;
  
  iVar1 = (*(code *)s_GetCurrentThread_14059dd7e._2_8_)(param_1,0);
  if (iVar1 != 0) {
    local_res10 = CONCAT31(local_res10._1_3_,1);
    return (ulonglong)local_res10;
  }
  iVar1 = (*_DAT_14059df60)();
  if (iVar1 == 0xb7) {
    iVar1 = FUN_14044b720(param_1,local_28,3,0xffffffff);
    if ((iVar1 == 0) && ((local_18 & 0x10) == 0)) {
      iVar1 = 0xb7;
    }
  }
  return (ulonglong)CONCAT43(iVar1,local_res10._1_3_) << 8;
}

