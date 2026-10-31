/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bda70 */

ulonglong FUN_1401bda70(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_20;
  undefined8 local_18;
  char local_10;
  
  if (DAT_140f32750 == 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_14019e8cc();
      *puVar3 = 0x16;
      FUN_1401ae640();
      return 0x7fffffff;
    }
    if (param_3 < 0x80000000) {
      uVar4 = FUN_1401c2640();
      return uVar4;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_14019e8cc();
      *puVar3 = 0x16;
      FUN_1401ae640();
      return 0x7fffffff;
    }
    uVar4 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_10 = '\0';
      lVar5 = FUN_1401aecc8();
      local_20 = *(longlong *)(lVar5 + 0x90);
      local_18 = *(undefined8 *)(lVar5 + 0x88);
      __acrt_update_locale_info(lVar5,&local_20);
      FUN_1401af278(lVar5,&local_18);
      if ((*(uint *)(lVar5 + 0x3a8) & 2) == 0) {
        *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) | 2;
        local_10 = '\x01';
      }
      if (*(longlong *)(local_20 + 0x130) == 0) {
        uVar1 = FUN_1401c2640(param_1,param_2,param_3);
        if (local_10 != '\0') {
          *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
        }
        return (ulonglong)uVar1;
      }
      iVar2 = __acrt_CompareStringW
                        (*(longlong *)(local_20 + 0x130),0x1001,param_1,param_3 & 0xffffffff,param_2
                         ,(int)param_3);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)FUN_14019e8cc();
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
  puVar3 = (undefined4 *)FUN_14019e8cc();
  *puVar3 = 0x16;
  FUN_1401ae640();
  return 0x7fffffff;
}

