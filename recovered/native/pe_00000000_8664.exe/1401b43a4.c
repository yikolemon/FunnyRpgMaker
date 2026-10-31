/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b43a4 */

void FUN_1401b43a4(int param_1,undefined8 param_2,__crt_locale_pointers *param_3)

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
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_88;
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
    iVar1 = FUN_1401b112c(local_38,1,&local_48,uVar2);
    if (iVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_1401b4487;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
LAB_1401b4487:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_88);
}

