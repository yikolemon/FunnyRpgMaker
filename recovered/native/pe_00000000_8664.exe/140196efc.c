/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140196efc */

void FUN_140196efc(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  __crt_locale_pointers *param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  char local_c8;
  undefined8 local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_118;
  if ((param_2 == 0) || (param_4 == 0)) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x16;
    FUN_1401ae640();
  }
  else {
    lVar2 = FUN_1401aaa30(param_2,param_3);
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_e0,param_5);
    local_88 = 0;
    lStack_f0 = lVar2 + param_2;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_30 = 0;
    local_40 = local_d8;
    local_64 = 0;
    uStack_5c = 0;
    local_54 = 0;
    uStack_4c = 0;
    local_7e = 0;
    local_6c = 0;
    local_38 = param_6;
    local_f8 = param_2;
    local_e8 = param_2;
    local_b8 = param_1;
    local_b0 = param_2;
    lStack_a8 = lStack_f0;
    local_a0 = param_2;
    local_98 = param_1;
    local_90 = param_4;
    FUN_140199f78(&local_b8);
    if (local_c8 != '\0') {
      *(uint *)(local_e0 + 0x3a8) = *(uint *)(local_e0 + 0x3a8) & 0xfffffffd;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_118);
}

