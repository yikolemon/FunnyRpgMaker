/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca52e */

int FUN_1801ca52e(undefined8 *param_1,uint *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  if (param_1 == (undefined8 *)0x0) {
    iVar2 = 0x21;
    goto LAB_1801ca624;
  }
  iVar2 = 6;
  if (param_2 == (uint *)0x0) goto LAB_1801ca624;
  uVar1 = *param_1;
  uVar4 = *param_2 & 7;
  if (uVar4 == 4) {
    lVar3 = FUN_1801c9a4b(uVar1,0x48,&local_34);
    iVar2 = local_34;
    if (local_34 != 0) goto LAB_1801ca624;
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    iVar2 = FUN_1801e1a98(lVar3,*(undefined8 *)(param_2 + 6));
    if (iVar2 != 0) {
      FUN_1801c9b65(uVar1,lVar3);
      goto LAB_1801ca624;
    }
  }
  else {
    if (uVar4 == 2) {
      lVar3 = *(longlong *)(param_2 + 8);
      if (lVar3 == 0) goto LAB_1801ca5d1;
    }
    else {
      if (uVar4 != 1) {
LAB_1801ca5d1:
        if (((*param_2 & 2) != 0) && (*(longlong *)(param_2 + 8) != 0)) {
          FUN_1801ca672();
        }
        goto LAB_1801ca624;
      }
      lVar3 = FUN_1801c9a4b(uVar1,0x48,&local_34);
      iVar2 = local_34;
      if (local_34 != 0) goto LAB_1801ca624;
      FUN_1801ca654(lVar3,*(undefined8 *)(param_2 + 2),param_2[4]);
    }
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
  }
  *param_3 = lVar3;
  iVar2 = 0;
LAB_1801ca624:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

