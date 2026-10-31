/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cacaa */

ulonglong FUN_1801cacaa(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1[1] + 0x90);
  lVar5 = plVar1[2];
  lVar2 = plVar1[3];
  *param_1 = plVar1[1];
  lVar3 = FUN_1801c9a4b(lVar5,0x38,&local_34);
  uVar4 = (ulonglong)local_34;
  if (local_34 != 0) goto LAB_1801cad5e;
  param_1[0x1e] = lVar3;
  if ((*(byte *)(*plVar1 + 1) & 2) == 0) {
    uVar4 = FUN_1801c99e4(lVar5);
    if ((int)uVar4 == 0) goto LAB_1801cad1b;
  }
  else {
LAB_1801cad1b:
    if (*(code **)(lVar2 + 0x68) == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(lVar2 + 0x68))(param_1);
    }
  }
  if ((*(byte *)(param_1[1] + 10) & 1) != 0) {
    lVar5 = FUN_1801c9a4b(lVar5,0x48,&local_34);
    uVar4 = (ulonglong)local_34;
    if (local_34 == 0) {
      param_1[0x1d] = lVar5;
      uVar4 = 0;
    }
  }
LAB_1801cad5e:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

