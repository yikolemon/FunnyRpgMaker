/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140129db0 */

ulonglong FUN_140129db0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong local_20;
  undefined8 local_18;
  char local_10;
  
  if (DAT_140354b80 == 0) {
    uVar3 = FUN_140133250();
  }
  else {
    local_10 = '\0';
    lVar4 = FUN_140121578();
    local_20 = *(longlong *)(lVar4 + 0x90);
    local_18 = *(undefined8 *)(lVar4 + 0x88);
    __acrt_update_locale_info(lVar4,&local_20);
    FUN_140121b28(lVar4,&local_18);
    if ((*(uint *)(lVar4 + 0x3a8) & 2) == 0) {
      *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) | 2;
      local_10 = '\x01';
    }
    if (param_3 == 0) {
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0;
    }
    else if ((param_1 == 0) || (param_2 == 0)) {
      puVar5 = (undefined4 *)FUN_140113dd4();
      *puVar5 = 0x16;
      FUN_140120ee8();
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = 0x7fffffff;
      if (param_3 < 0x80000000) {
        if (*(longlong *)(local_20 + 0x130) == 0) {
          uVar1 = FUN_1401332e0(param_1,param_2,param_3,&local_20);
          if (local_10 != '\0') {
            *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
          }
          return (ulonglong)uVar1;
        }
        iVar2 = __acrt_CompareStringA
                          (&local_20,*(longlong *)(local_20 + 0x130),0x1001,param_1,(int)param_3,
                           param_2,(int)param_3,*(undefined4 *)(local_20 + 0x14));
        if (iVar2 == 0) {
          puVar5 = (undefined4 *)FUN_140113dd4();
          *puVar5 = 0x16;
        }
        else {
          uVar3 = (ulonglong)(iVar2 - 2);
        }
      }
      else {
        puVar5 = (undefined4 *)FUN_140113dd4();
        *puVar5 = 0x16;
        FUN_140120ee8();
      }
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar3;
}

