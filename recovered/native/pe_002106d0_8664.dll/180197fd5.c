/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180197fd5 */

void FUN_180197fd5(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  FUN_180199d18(&local_48,param_1);
  FUN_180195d36(param_1);
  FUN_180198fe7(param_1,local_48,local_44);
  FUN_180196b0f(param_1);
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x80);
    lVar3 = (longlong)*(int *)(param_1 + 0x78) * 0xa0;
    do {
      FUN_180196e9e(param_1,lVar5);
      lVar5 = lVar5 + 0xa0;
      lVar3 = lVar3 + -0xa0;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x70);
    plVar1 = plVar4 + *(int *)(param_1 + 0x68);
    do {
      lVar5 = *plVar4;
      iVar2 = *(int *)(lVar5 + 0x20);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(lVar5 + 0x28);
        lVar6 = 0;
        do {
          FUN_180196ef4(param_1,lVar5,*(undefined8 *)(lVar3 + lVar6));
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar2 * 8 != lVar6);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
}

