/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140129c10 */

ulonglong FUN_140129c10(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_20;
  undefined8 local_18;
  char local_10;
  
  if (DAT_140354b80 == 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_140113dd4();
      *puVar3 = 0x16;
      FUN_140120ee8();
      return 0x7fffffff;
    }
    if (param_3 < 0x80000000) {
      uVar4 = FUN_140132830();
      return uVar4;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_140113dd4();
      *puVar3 = 0x16;
      FUN_140120ee8();
      return 0x7fffffff;
    }
    uVar4 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_10 = '\0';
      lVar5 = FUN_140121578();
      local_20 = *(longlong *)(lVar5 + 0x90);
      local_18 = *(undefined8 *)(lVar5 + 0x88);
      __acrt_update_locale_info(lVar5,&local_20);
      FUN_140121b28(lVar5,&local_18);
      if ((*(uint *)(lVar5 + 0x3a8) & 2) == 0) {
        *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) | 2;
        local_10 = '\x01';
      }
      if (*(longlong *)(local_20 + 0x130) == 0) {
        uVar1 = FUN_140132830(param_1,param_2,param_3);
        if (local_10 != '\0') {
          *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
        }
        return (ulonglong)uVar1;
      }
      iVar2 = __acrt_CompareStringW
                        (*(longlong *)(local_20 + 0x130),0x1001,param_1,param_3 & 0xffffffff,param_2
                         ,(int)param_3);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)FUN_140113dd4();
        *puVar3 = 0x16;
      }
      else {
        uVar4 = (ulonglong)(iVar2 - 2);
      }
      if (local_10 == '\0') {
        return uVar4;
      }
      *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
      return uVar4;
    }
  }
  puVar3 = (undefined4 *)FUN_140113dd4();
  *puVar3 = 0x16;
  FUN_140120ee8();
  return 0x7fffffff;
}

