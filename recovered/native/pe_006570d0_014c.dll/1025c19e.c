/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025c19e */

undefined4
FUN_1025c19e(undefined1 *param_1,int param_2,char *param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *local_48;
  int local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char local_1c;
  int local_18;
  int local_14;
  char local_c;
  uint local_8;
  
  FUN_1025be8b(param_6);
  uVar4 = 0;
  local_8 = *(uint *)(local_14 + 0x14);
  if ((((param_1 == (undefined1 *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (char *)0x0))
     || (param_4 == 0)) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
  }
  else {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = '\0';
    iVar2 = __acrt_mbs_to_wcs_cp<__crt_win32_buffer_internal_dynamic_resizing>
                      (param_3,(__crt_win32_buffer<wchar_t,__crt_win32_buffer_internal_dynamic_resizing>
                                *)&local_30,local_8);
    if (iVar2 == 0) {
      iVar2 = FUN_10274170(param_2 * 2);
      if (iVar2 != 0) {
        iVar3 = FUN_1025c543(iVar2,param_2,local_28,param_4,param_5,param_6);
        if (iVar3 != 0) {
          local_48 = param_1;
          local_40 = param_1;
          local_44 = param_2;
          local_3c = param_2;
          local_38 = 0;
          local_34 = 0;
          iVar3 = FUN_1025c34b(iVar2,&local_48,local_8);
          uVar4 = local_38;
          if (iVar3 != 0) {
            uVar4 = 0;
          }
        }
      }
      FUN_10274120(iVar2);
    }
    if (local_1c != '\0') {
      FUN_10274120(local_28);
    }
  }
  if (local_c != '\0') {
    *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
  }
  return uVar4;
}

