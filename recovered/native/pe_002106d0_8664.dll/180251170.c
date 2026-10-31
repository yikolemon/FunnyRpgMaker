/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180251170 */

longlong FUN_180251170(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  FUN_18023d240(local_res10,0);
  lVar4 = DAT_18041eff8;
  local_res18 = DAT_18041eff8;
  if (DAT_18041ef68 == 0) {
    FUN_18023d240(&local_res8,0);
    if (DAT_18041ef68 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_18041ef68 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290();
  }
  uVar2 = DAT_18041ef68;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = DAT_18041ef68 * 8;
  if (DAT_18041ef68 < *(ulonglong *)(lVar3 + 0x18)) {
    lVar5 = *(longlong *)(lVar1 + *(longlong *)(lVar3 + 0x10));
    if (lVar5 != 0) goto LAB_180251203;
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_180251238:
    if (lVar5 != 0) goto LAB_180251203;
  }
  else {
    lVar3 = FUN_18023d160();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      lVar5 = *(longlong *)(lVar1 + *(longlong *)(lVar3 + 0x10));
      goto LAB_180251238;
    }
  }
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_180250fb0(&local_res18,param_1);
    lVar5 = local_res18;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_18000cdb9();
    }
    lVar4 = local_res18;
    local_res8 = local_res18;
    FUN_18023ccb0(local_res18);
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar5);
    DAT_18041eff8 = lVar4;
  }
LAB_180251203:
  FUN_18023d290(local_res10);
  return lVar5;
}

