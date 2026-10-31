/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016ef6d */

void FUN_14016ef6d(longlong *param_1,int param_2,longlong param_3)

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
  
  local_40 = DAT_140f17b40 ^ (ulonglong)local_78;
  if ((int)param_1[1] == 0) {
    iVar2 = 6;
    if ((int)param_1[2] == 1) {
      lVar1 = *param_1;
      lVar4 = (longlong)param_1 + (ulonglong)((uint)(param_2 != 0) * 0x30) + 0x18;
      lVar5 = 0;
      do {
        iVar2 = FUN_14012e438(*(undefined4 *)(param_3 + 4 + lVar5 * 2));
        iVar3 = FUN_14012e438(*(undefined4 *)(param_3 + lVar5 * 2));
        local_58 = (longlong)&local_4c + lVar5;
        iVar2 = FUN_14016f4af(lVar4,iVar3 >> 0x10,iVar2 >> 0x10,lVar1);
        if (iVar2 != 0) goto LAB_14016f028;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      local_58 = lVar1;
      iVar2 = FUN_14016f85c(lVar4,local_4c,local_48,local_44);
      if (iVar2 == 0) goto LAB_14016f02b;
    }
LAB_14016f028:
    *(int *)(param_1 + 1) = iVar2;
  }
LAB_14016f02b:
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)local_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)local_78);
}

