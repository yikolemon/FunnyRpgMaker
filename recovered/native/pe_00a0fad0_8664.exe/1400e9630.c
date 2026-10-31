/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e9630 */

longlong FUN_1400e9630(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  FUN_1400d39b0(local_res10,0);
  lVar4 = DAT_1401d4700;
  local_res18 = DAT_1401d4700;
  if (DAT_1401cc4a8 == 0) {
    FUN_1400d39b0(&local_res8,0);
    if (DAT_1401cc4a8 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401cc4a8 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00();
  }
  uVar2 = DAT_1401cc4a8;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = DAT_1401cc4a8 * 8;
  if (DAT_1401cc4a8 < *(ulonglong *)(lVar3 + 0x18)) {
    lVar5 = *(longlong *)(lVar1 + *(longlong *)(lVar3 + 0x10));
    if (lVar5 != 0) goto LAB_1400e96c3;
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_1400e96f8:
    if (lVar5 != 0) goto LAB_1400e96c3;
  }
  else {
    lVar3 = FUN_1400d4110();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      lVar5 = *(longlong *)(lVar1 + *(longlong *)(lVar3 + 0x10));
      goto LAB_1400e96f8;
    }
  }
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_1400e1660(&local_res18,param_1);
    lVar5 = local_res18;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b671();
    }
    lVar4 = local_res18;
    local_res8 = local_res18;
    FUN_1400d3ca0(local_res18);
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar5);
    DAT_1401d4700 = lVar4;
  }
LAB_1400e96c3:
  FUN_1400d3a00(local_res10);
  return lVar5;
}

