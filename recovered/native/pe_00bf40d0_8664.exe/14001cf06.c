/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001cf06 */

int FUN_14001cf06(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 (*pauVar3) [32];
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  if (param_1 == (longlong *)0x0) {
    iVar2 = 0x21;
    goto LAB_14001cffc;
  }
  iVar2 = 6;
  if (param_2 == (uint *)0x0) goto LAB_14001cffc;
  lVar1 = *param_1;
  uVar5 = *param_2 & 7;
  if (uVar5 == 4) {
    pauVar3 = FUN_14001c423(lVar1,0x48,&local_34);
    iVar2 = local_34;
    if (local_34 != 0) goto LAB_14001cffc;
    *(longlong *)(pauVar3[1] + 0x10) = lVar1;
    uVar4 = FUN_14002f0cc((longlong *)pauVar3,*(LPCSTR *)(param_2 + 6));
    iVar2 = (int)uVar4;
    if (iVar2 != 0) {
      FUN_14001c53d(lVar1,(longlong)pauVar3);
      goto LAB_14001cffc;
    }
  }
  else {
    if (uVar5 == 2) {
      pauVar3 = *(undefined1 (**) [32])(param_2 + 8);
      if (pauVar3 == (undefined1 (*) [32])0x0) goto LAB_14001cfa9;
    }
    else {
      if (uVar5 != 1) {
LAB_14001cfa9:
        if (((*param_2 & 2) != 0) && (*(longlong *)(param_2 + 8) != 0)) {
          FUN_14001d04a(*(longlong *)(param_2 + 8));
        }
        goto LAB_14001cffc;
      }
      pauVar3 = FUN_14001c423(lVar1,0x48,&local_34);
      iVar2 = local_34;
      if (local_34 != 0) goto LAB_14001cffc;
      FUN_14001d02c((undefined8 *)pauVar3,*(undefined8 *)(param_2 + 2),param_2[4]);
    }
    *(longlong *)(pauVar3[1] + 0x10) = lVar1;
  }
  *param_3 = pauVar3;
  iVar2 = 0;
LAB_14001cffc:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

