/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404645a0 */

longlong FUN_1404645a0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  FUN_14044e710(local_res10,0);
  lVar4 = DAT_1406304e0;
  local_res18 = DAT_1406304e0;
  if (DAT_140629398 == 0) {
    FUN_14044e710(&local_res8,0);
    if (DAT_140629398 == 0) {
      DAT_140629370 = DAT_140629370 + 1;
      DAT_140629398 = (ulonglong)DAT_140629370;
    }
    FUN_14044e760();
  }
  uVar2 = DAT_140629398;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = DAT_140629398 * 8;
  if (DAT_140629398 < *(ulonglong *)(lVar3 + 0x18)) {
    lVar5 = *(longlong *)(lVar1 + *(longlong *)(lVar3 + 0x10));
    if (lVar5 != 0) goto LAB_140464633;
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_140464668:
    if (lVar5 != 0) goto LAB_140464633;
  }
  else {
    lVar3 = FUN_14044e630();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      lVar5 = *(longlong *)(lVar1 + *(longlong *)(lVar3 + 0x10));
      goto LAB_140464668;
    }
  }
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_14045c5d0(&local_res18,param_1);
    lVar5 = local_res18;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_14021e289();
    }
    lVar4 = local_res18;
    local_res8 = local_res18;
    FUN_14044e180(local_res18);
    (*DAT_14059d150)(lVar5);
    DAT_1406304e0 = lVar4;
  }
LAB_140464633:
  FUN_14044e760(local_res10);
  return lVar5;
}

