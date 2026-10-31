/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ad840 */

int FUN_1400ad840(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_20;
  longlong local_18;
  char local_10;
  
  if (DAT_140142c48 == 0) {
    if ((param_1 == (undefined1 (*) [32])0x0) || (param_2 == (undefined1 (*) [32])0x0)) {
      p_Var2 = FUN_140095e5c();
      *(undefined4 *)p_Var2 = 0x16;
      FUN_1400a0ea0();
      return 0x7fffffff;
    }
    if (param_3 < 0x80000000) {
      iVar1 = FUN_1400b2040((ushort *)param_1,(ushort *)param_2,param_3);
      return iVar1;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1 == (undefined1 (*) [32])0x0) || (param_2 == (undefined1 (*) [32])0x0)) {
      p_Var2 = FUN_140095e5c();
      *(undefined4 *)p_Var2 = 0x16;
      FUN_1400a0ea0();
      return 0x7fffffff;
    }
    iVar1 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_10 = '\0';
      lVar3 = FUN_1400a1528();
      local_20 = *(longlong *)(lVar3 + 0x90);
      local_18 = *(longlong *)(lVar3 + 0x88);
      __acrt_update_locale_info(lVar3,&local_20);
      FUN_1400a1ad8(lVar3,&local_18);
      if ((*(uint *)(lVar3 + 0x3a8) & 2) == 0) {
        *(uint *)(lVar3 + 0x3a8) = *(uint *)(lVar3 + 0x3a8) | 2;
        local_10 = '\x01';
      }
      if (*(ushort **)(local_20 + 0x130) == (ushort *)0x0) {
        iVar1 = FUN_1400b2040((ushort *)param_1,(ushort *)param_2,param_3);
        if (local_10 == '\0') {
          return iVar1;
        }
        *(uint *)(lVar3 + 0x3a8) = *(uint *)(lVar3 + 0x3a8) & 0xfffffffd;
        return iVar1;
      }
      uVar4 = __acrt_CompareStringW
                        (*(ushort **)(local_20 + 0x130),0x1001,param_1,(uint)param_3,param_2,
                         (uint)param_3);
      if ((int)uVar4 == 0) {
        p_Var2 = FUN_140095e5c();
        *(undefined4 *)p_Var2 = 0x16;
      }
      else {
        iVar1 = (int)uVar4 + -2;
      }
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(lVar3 + 0x3a8) = *(uint *)(lVar3 + 0x3a8) & 0xfffffffd;
      return iVar1;
    }
  }
  p_Var2 = FUN_140095e5c();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1400a0ea0();
  return 0x7fffffff;
}

