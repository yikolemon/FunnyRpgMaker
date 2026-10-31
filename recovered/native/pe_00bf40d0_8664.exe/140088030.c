/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088030 */

void FUN_140088030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res10;
  int local_res18 [2];
  longlong local_res20;
  
  FUN_140086460(local_res18,0);
  lVar5 = DAT_14013cc98;
  local_res20 = DAT_14013cc98;
  if (DAT_14013cb50 == 0) {
    FUN_140086460((int *)&local_res10,0);
    if (DAT_14013cb50 == 0) {
      DAT_14013cb10 = DAT_14013cb10 + 1;
      DAT_14013cb50 = (ulonglong)DAT_14013cb10;
    }
    FUN_1400864b0((int *)&local_res10);
  }
  uVar2 = DAT_14013cb50;
  lVar4 = *(longlong *)(param_2 + 8);
  lVar1 = DAT_14013cb50 * 8;
  lVar6 = 0;
  if ((DAT_14013cb50 < *(ulonglong *)(lVar4 + 0x18)) &&
     (lVar6 = *(longlong *)(lVar1 + *(longlong *)(lVar4 + 0x10)), lVar6 != 0)) goto LAB_1400880cd;
  if (*(char *)(lVar4 + 0x24) == '\0') {
LAB_140088120:
    if (lVar6 != 0) goto LAB_1400880cd;
  }
  else {
    lVar4 = FUN_140086950();
    if (uVar2 < *(ulonglong *)(lVar4 + 0x18)) {
      lVar6 = *(longlong *)(lVar1 + *(longlong *)(lVar4 + 0x10));
      goto LAB_140088120;
    }
  }
  lVar6 = lVar5;
  if (lVar5 == 0) {
    lVar5 = FUN_140086de0(&local_res20,param_2);
    lVar6 = local_res20;
    if (lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1400052c5();
    }
    lVar5 = local_res20;
    local_res10 = local_res20;
    FUN_140086590(local_res20);
    (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar6);
    DAT_14013cc98 = lVar5;
  }
LAB_1400880cd:
  FUN_1400864b0(local_res18);
  cVar3 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar6);
  if (cVar3 == '\0') {
    *(longlong *)(param_1 + 0x68) = lVar6;
    *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
    *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
    *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
    *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}

