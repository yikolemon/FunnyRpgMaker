/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021f881 */

void FUN_18021f881(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_78 [32];
  longlong local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)local_78;
  if ((int)param_1[1] == 0) {
    iVar2 = 6;
    if ((int)param_1[2] == 1) {
      lVar1 = *param_1;
      lVar4 = (longlong)param_1 + (ulonglong)((uint)(param_2 != 0) * 0x30) + 0x18;
      lVar5 = 0;
      do {
        iVar2 = FUN_1801cf464(*(undefined4 *)(param_3 + 4 + lVar5 * 2));
        iVar3 = FUN_1801cf464(*(undefined4 *)(param_3 + lVar5 * 2));
        local_58 = (longlong)&local_4c + lVar5;
        iVar2 = FUN_18021fdc3(lVar4,iVar3 >> 0x10,iVar2 >> 0x10,lVar1);
        if (iVar2 != 0) goto LAB_18021f93c;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      local_58 = lVar1;
      iVar2 = FUN_180220170(lVar4,local_4c,local_48,local_44);
      if (iVar2 == 0) goto LAB_18021f93f;
    }
LAB_18021f93c:
    *(int *)(param_1 + 1) = iVar2;
  }
LAB_18021f93f:
  if (DAT_180402640 == (local_40 ^ (ulonglong)local_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)local_78);
}

