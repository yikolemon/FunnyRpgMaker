/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140134594 */

LPCWSTR FUN_140134594(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCWSTR pWVar4;
  LPCWSTR pWVar5;
  undefined1 local_res18 [8];
  longlong local_98;
  longlong local_90;
  char local_80;
  undefined8 local_78;
  undefined8 local_70;
  LPCWSTR local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  LPCWSTR local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_20;
  
  pWVar4 = (LPCWSTR)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (LPCWSTR)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = (LPCWSTR)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
  uVar3 = 0xfde9;
  if (*(int *)(local_90 + 0xc) == 0xfde9) {
    if (local_80 != '\0') {
      *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
    }
    pWVar5 = (LPCWSTR)0xfde9;
  }
  else {
    iVar1 = FUN_140121cc8();
    if (iVar1 == 0) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
      pWVar5 = (LPCWSTR)0x1;
    }
    else {
      pWVar5 = pWVar4;
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  iVar1 = FUN_140108574(param_1,&local_48,local_res18,pWVar5);
  pWVar5 = pWVar4;
  if (iVar1 == 0) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_90 + 0xc) == 0xfde9) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar1 = FUN_140121cc8();
      if (iVar1 == 0) {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    iVar1 = FUN_140108574(param_2,&local_78,local_res18,uVar3);
    pWVar5 = local_68;
    if (iVar1 == 0) {
      uVar2 = SetEnvironmentVariableW(local_38,local_68);
      pWVar4 = (LPCWSTR)(ulonglong)uVar2;
    }
  }
  if (local_50 != '\0') {
    FUN_1401212e0(pWVar5);
  }
  if (local_20 != '\0') {
    FUN_1401212e0(local_38);
  }
  return pWVar4;
}

