/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009cda4 */

void FUN_14009cda4(WCHAR param_1,ulonglong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  int local_28 [2];
  undefined2 local_20;
  uint local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  iVar2 = FUN_1400a5bb4((longlong)param_2);
  if ((iVar2 == -1) || (iVar2 = FUN_1400a5bb4((longlong)param_2), iVar2 == -2)) {
    puVar4 = &DAT_14013bf10;
  }
  else {
    iVar2 = FUN_1400a5bb4((longlong)param_2);
    uVar3 = FUN_1400a5bb4((longlong)param_2);
    puVar4 = (undefined *)
             ((&DAT_1401433a0)[(longlong)iVar2 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
  }
  local_28[0] = 0;
  local_18 = 0;
  local_14 = 0;
  if (puVar4[0x39] == '\0') {
    iVar2 = FUN_1400a52b8(local_28,(undefined1 (*) [32])&local_18,5,param_1);
    if (iVar2 != 0) goto LAB_14009cec5;
  }
  else {
    local_28[0] = 2;
    local_18 = (uint)CONCAT11(local_20._1_1_,(char)param_1);
  }
  if (*param_2 < param_2[1] + (longlong)local_28[0]) {
    if (((int)param_2[2] != 0) || ((int)param_2[4] < local_28[0])) goto LAB_14009cec5;
    *param_2 = param_2[1] + (longlong)local_28[0];
  }
  lVar5 = (longlong)(local_28[0] + -1);
  if (-1 < local_28[0] + -1) {
    do {
      *param_2 = *param_2 - 1;
      puVar1 = (undefined1 *)((longlong)&local_18 + lVar5);
      lVar5 = lVar5 + -1;
      *(undefined1 *)*param_2 = *puVar1;
    } while (-1 < lVar5);
  }
  *(int *)(param_2 + 2) = (int)param_2[2] + local_28[0];
  LOCK();
  *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
  UNLOCK();
  LOCK();
  *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 1;
  UNLOCK();
LAB_14009cec5:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_48);
}

