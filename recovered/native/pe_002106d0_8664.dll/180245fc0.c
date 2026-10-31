/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180245fc0 */

void FUN_180245fc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  FUN_18023d240(local_res18,0);
  lVar5 = DAT_180419148;
  local_res20 = DAT_180419148;
  if (DAT_180417ee0 == 0) {
    FUN_18023d240(&local_res10,0);
    if (DAT_180417ee0 == 0) {
      DAT_180417ea0 = DAT_180417ea0 + 1;
      DAT_180417ee0 = (ulonglong)DAT_180417ea0;
    }
    FUN_18023d290(&local_res10);
  }
  uVar2 = DAT_180417ee0;
  lVar4 = *(longlong *)(param_2 + 8);
  lVar1 = DAT_180417ee0 * 8;
  lVar6 = 0;
  if ((DAT_180417ee0 < *(ulonglong *)(lVar4 + 0x18)) &&
     (lVar6 = *(longlong *)(lVar1 + *(longlong *)(lVar4 + 0x10)), lVar6 != 0)) goto LAB_18024605d;
  if (*(char *)(lVar4 + 0x24) == '\0') {
LAB_1802460b0:
    if (lVar6 != 0) goto LAB_18024605d;
  }
  else {
    lVar4 = FUN_18023d160();
    if (uVar2 < *(ulonglong *)(lVar4 + 0x18)) {
      lVar6 = *(longlong *)(lVar1 + *(longlong *)(lVar4 + 0x10));
      goto LAB_1802460b0;
    }
  }
  lVar6 = lVar5;
  if (lVar5 == 0) {
    lVar5 = FUN_180245160(&local_res20,param_2);
    lVar6 = local_res20;
    if (lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_18000cdb9();
    }
    lVar5 = local_res20;
    local_res10 = local_res20;
    FUN_18023ccb0(local_res20);
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar6);
    DAT_180419148 = lVar5;
  }
LAB_18024605d:
  FUN_18023d290(local_res18);
  cVar3 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar6);
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

