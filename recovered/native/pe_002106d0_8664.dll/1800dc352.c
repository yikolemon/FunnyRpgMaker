/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dc352 */

undefined8 FUN_1800dc352(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar2 = FUN_1800dbb7b(param_2);
  FUN_1800db986(param_1,local_38,param_2,uVar2);
  if (local_30 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar5 = (uVar2 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
    if (*(longlong **)(lVar1 + 8 + lVar5) == local_30) {
      if (*(longlong **)(lVar1 + lVar5) == local_30) {
        lVar4 = *(longlong *)(param_1 + 8);
        *(longlong *)(lVar1 + lVar5) = lVar4;
      }
      else {
        lVar4 = local_30[1];
      }
      *(longlong *)(lVar1 + 8 + lVar5) = lVar4;
    }
    else if (*(longlong **)(lVar1 + lVar5) == local_30) {
      *(longlong *)(lVar1 + lVar5) = *local_30;
    }
    lVar1 = *local_30;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    *(longlong *)local_30[1] = lVar1;
    *(longlong *)(lVar1 + 8) = local_30[1];
    thunk_FUN_1802464a0(local_30,0x18);
    uVar3 = 1;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

