/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027ff28 */

undefined4 FUN_18027ff28(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
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
    uVar1 = FUN_180280370();
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = '\0';
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_50 + 0xc) == 0xfde9) {
      if (local_40 != '\0') {
        *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar2 = FUN_180291878();
      if (iVar2 == 0) {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_40 != '\0') {
          *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    iVar2 = FUN_18026f610(param_1,&local_38,local_res8,uVar3);
    if (iVar2 == 0) {
      uVar1 = FUN_180280370(local_28,param_2);
      if (local_10 != '\0') {
        FUN_180290e40(local_28);
      }
    }
    else {
      if (local_10 != '\0') {
        FUN_180290e40(local_28);
      }
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

