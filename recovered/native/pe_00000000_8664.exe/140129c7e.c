/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129c7e */

ulonglong FUN_140129c7e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1[1] + 0x90);
  lVar5 = plVar1[2];
  lVar2 = plVar1[3];
  *param_1 = plVar1[1];
  lVar3 = FUN_140128a1f(lVar5,0x38,&local_34);
  uVar4 = (ulonglong)local_34;
  if (local_34 != 0) goto LAB_140129d32;
  param_1[0x1e] = lVar3;
  if ((*(byte *)(*plVar1 + 1) & 2) == 0) {
    uVar4 = FUN_1401289b8(lVar5);
    if ((int)uVar4 == 0) goto LAB_140129cef;
  }
  else {
LAB_140129cef:
    if (*(code **)(lVar2 + 0x68) == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(lVar2 + 0x68))(param_1);
    }
  }
  if ((*(byte *)(param_1[1] + 10) & 1) != 0) {
    lVar5 = FUN_140128a1f(lVar5,0x48,&local_34);
    uVar4 = (ulonglong)local_34;
    if (local_34 == 0) {
      param_1[0x1d] = lVar5;
      uVar4 = 0;
    }
  }
LAB_140129d32:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

