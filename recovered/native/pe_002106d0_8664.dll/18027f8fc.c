/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f8fc */

ulonglong FUN_18027f8fc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  longlong local_58;
  longlong local_50;
  char local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  char local_10;
  
  if (param_1 == 0) {
    uVar3 = FUN_180298748();
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,(__crt_locale_pointers *)0x0);
    uVar4 = 0xfde9;
    if (*(int *)(local_50 + 0xc) == 0xfde9) {
      if (local_40 != '\0') {
        *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar1 = FUN_180291878();
      if (iVar1 == 0) {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVar4 = 1;
      }
      else {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVar4 = 0;
      }
    }
    iVar1 = FUN_18026f610(param_1,&local_38,local_res8,uVar4);
    if (iVar1 == 0) {
      uVar2 = FUN_180298748(local_28);
      uVar3 = (ulonglong)uVar2;
    }
    else {
      uVar3 = 0xffffffff;
    }
    if (local_10 != '\0') {
      FUN_180290e40(local_28);
    }
  }
  return uVar3;
}

