/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004b408 */

int FUN_14004b408(longlong *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  ushort local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar2 = FUN_140020a41((longlong)param_1,0);
  iVar1 = (int)uVar2;
  if ((iVar1 == 0) && (iVar1 = FUN_14004b4c0(param_1,&local_2a,&local_30), iVar1 == 0)) {
    if (local_2a != 0x8001) {
      uVar2 = FUN_140020a41((longlong)param_1,0);
      iVar1 = (int)uVar2;
      if (iVar1 != 0) goto LAB_14004b470;
    }
    iVar1 = FUN_140021063(param_1,(uint)param_3);
    if (iVar1 == 0) {
      iVar1 = memcmp((void *)param_1[7],param_2,param_3);
      iVar1 = (uint)(iVar1 != 0) * 2;
      FUN_140021187(param_1);
    }
  }
LAB_14004b470:
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return iVar1;
}

