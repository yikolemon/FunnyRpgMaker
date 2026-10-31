/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401910c4 */

longlong FUN_1401910c4(short *param_1,longlong param_2,short *param_3,longlong param_4,
                      longlong param_5,__crt_locale_pointers *param_6)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_res8;
  short *local_58;
  longlong local_50;
  longlong local_48 [2];
  char local_38;
  
  lVar5 = 0;
  if (((param_1 == (short *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (short *)0x0)) {
    puVar4 = (undefined4 *)FUN_14019e8cc();
    *puVar4 = 0x16;
    FUN_1401ae640();
    lVar5 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_6);
    local_res8 = param_2;
    local_58 = param_1;
    if (param_5 == 0) {
      param_5 = *(longlong *)(local_48[0] + 0x120);
    }
    do {
      sVar1 = *param_3;
      if (sVar1 == 0) break;
      if (sVar1 == 0x25) {
        if (param_4 == 0) goto LAB_1401911f7;
        sVar1 = param_3[1];
        bVar6 = sVar1 == 0x23;
        psVar2 = param_3 + 1;
        if (bVar6) {
          sVar1 = param_3[2];
          psVar2 = param_3 + 2;
        }
        param_3 = psVar2;
        if ((sVar1 == 0x45) || (sVar1 == 0x4f)) {
          param_3 = param_3 + 1;
          sVar1 = *param_3;
        }
        cVar3 = FUN_140191498(local_48,sVar1,param_4,&local_58,&local_res8,param_5,bVar6);
        if (cVar3 == '\0') {
          if (local_res8 == 0) goto LAB_140191237;
          *param_1 = 0;
          goto LAB_1401911f7;
        }
      }
      else {
        *local_58 = sVar1;
        local_58 = local_58 + 1;
        local_res8 = local_res8 + -1;
      }
      param_3 = param_3 + 1;
    } while (local_res8 != 0);
    if (local_res8 == 0) {
LAB_140191237:
      *param_1 = 0;
      if (local_res8 == 0) {
        puVar4 = (undefined4 *)FUN_14019e8cc();
        *puVar4 = 0x22;
      }
      else {
LAB_1401911f7:
        puVar4 = (undefined4 *)FUN_14019e8cc();
        *puVar4 = 0x16;
        FUN_1401ae640();
      }
    }
    else {
      *local_58 = 0;
      lVar5 = param_2 - local_res8;
    }
    if (local_38 != '\0') {
      *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
    }
  }
  return lVar5;
}

