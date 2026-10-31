/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044b670 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14044b670(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*param_2 != -1) {
    iVar1 = (*(code *)s_GetExitCodeThread_14059de14._4_8_)();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  lVar2 = (*ram0x00014059de20)(param_1,1,param_3,0,0,0);
  *param_2 = lVar2;
  if (lVar2 != -1) {
    return 0;
  }
  uVar3 = (*_DAT_14059df60)();
  return uVar3;
}

