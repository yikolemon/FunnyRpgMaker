/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012ec80 */

void FUN_14012ec80(int param_1,undefined8 param_2,__crt_locale_pointers *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_3);
  if (0x100 < param_1 + 1U) {
    if (*(short *)(*local_38[0] + (ulonglong)(param_1 >> 8 & 0xff) * 2) < 0) {
      uVar2 = 2;
      local_46 = 0;
      local_48 = (char)((uint)param_1 >> 8);
      local_47 = (char)param_1;
    }
    else {
      uVar2 = 1;
      local_47 = 0;
      local_48 = (char)param_1;
    }
    local_58 = 1;
    local_20 = 0;
    local_1c = 0;
    local_60 = *(undefined4 *)((longlong)local_38[0] + 0xc);
    local_68 = &local_20;
    iVar1 = FUN_1401233cc(local_38,1,&local_48,uVar2);
    if (iVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_14012ed63;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
LAB_14012ed63:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_88);
}

