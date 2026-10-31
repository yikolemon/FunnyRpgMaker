/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5cd4 */

void FUN_1400a5cd4(int param_1,undefined8 param_2,__crt_locale_pointers *param_3)

{
  int iVar1;
  undefined1 auStackY_88 [32];
  CHAR local_48;
  CHAR local_47;
  undefined1 local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  WORD local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_3);
  if (0x100 < param_1 + 1U) {
    iVar1 = 1;
    if (*(short *)(*local_38[0] + (ulonglong)(param_1 >> 8 & 0xff) * 2) < 0) {
      iVar1 = 2;
      local_46 = 0;
      local_48 = (CHAR)((uint)param_1 >> 8);
      local_47 = (CHAR)param_1;
    }
    else {
      local_47 = '\0';
      local_48 = (CHAR)param_1;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    iVar1 = FUN_1400a2b1c((__crt_locale_pointers *)local_38,1,&local_48,iVar1,local_20,
                          *(UINT *)((longlong)local_38[0] + 0xc),1);
    if (iVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_1400a5db7;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
LAB_1400a5db7:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_88);
}

