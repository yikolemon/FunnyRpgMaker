/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a1f88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a1f88(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStackX_8 [8];
  undefined1 auStack_608 [32];
  undefined1 *local_5e8;
  undefined8 *local_5e0;
  undefined8 *local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined4 *local_5b0;
  undefined1 *local_5a8;
  undefined4 local_598;
  undefined4 local_594;
  undefined1 local_4f8 [152];
  undefined1 *local_460;
  undefined8 local_400;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_608;
  if (param_1 != -1) {
    FUN_140457f00();
  }
  FUN_1404b9e70(&local_598,0,0x98);
  FUN_1404b9e70(local_4f8,0,0x4d0);
  local_5c0 = 0;
  local_5b0 = &local_598;
  local_5c8 = 0;
  local_5b8 = 0;
  local_5a8 = local_4f8;
  (*(code *)s_InitializeCriticalSectionEx_14059e14e._18_8_)(local_4f8);
  lVar3 = (*ram0x00014059e168)(local_400,&local_5c8,0);
  if (lVar3 != 0) {
    local_5d0 = 0;
    local_5d8 = &local_5c0;
    local_5e0 = &local_5b8;
    local_5e8 = local_4f8;
    (*(code *)s_InterlockedFlushSList_14059e182._6_8_)(0,local_5c8,local_400,lVar3);
  }
  local_460 = auStackX_8;
  local_598 = param_2;
  local_594 = param_3;
  iVar1 = (*(code *)s_GetTimeFormatW_14059e088._0_8_)();
  (*(code *)s_IsValidCodePage_14059e1dc._4_8_)(0);
  iVar2 = (*(code *)s_K32GetMappedFileNameW_14059e210._8_8_)(&local_5b0);
  if (((iVar2 == 0) && (iVar1 == 0)) && (param_1 != -1)) {
    FUN_140457f00(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_608);
}

