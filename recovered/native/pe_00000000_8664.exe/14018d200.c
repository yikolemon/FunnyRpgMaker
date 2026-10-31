/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018d200 */

void FUN_14018d200(longlong param_1,longlong param_2)

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
  
  FUN_140188dc0(local_res18,0);
  lVar5 = DAT_140f2b128;
  local_res20 = DAT_140f2b128;
  if (DAT_140f2abf0 == 0) {
    FUN_140188dc0(&local_res10,0);
    if (DAT_140f2abf0 == 0) {
      DAT_140f2abb0 = DAT_140f2abb0 + 1;
      DAT_140f2abf0 = (ulonglong)DAT_140f2abb0;
    }
    FUN_140188e10(&local_res10);
  }
  uVar2 = DAT_140f2abf0;
  lVar4 = *(longlong *)(param_2 + 8);
  lVar1 = DAT_140f2abf0 * 8;
  lVar6 = 0;
  if ((DAT_140f2abf0 < *(ulonglong *)(lVar4 + 0x18)) &&
     (lVar6 = *(longlong *)(lVar1 + *(longlong *)(lVar4 + 0x10)), lVar6 != 0)) goto LAB_14018d29d;
  if (*(char *)(lVar4 + 0x24) == '\0') {
LAB_14018d2f0:
    if (lVar6 != 0) goto LAB_14018d29d;
  }
  else {
    lVar4 = FUN_1401893f0();
    if (uVar2 < *(ulonglong *)(lVar4 + 0x18)) {
      lVar6 = *(longlong *)(lVar1 + *(longlong *)(lVar4 + 0x10));
      goto LAB_14018d2f0;
    }
  }
  lVar6 = lVar5;
  if (lVar5 == 0) {
    lVar5 = FUN_14018c030(&local_res20,param_2);
    lVar6 = local_res20;
    if (lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_140013caf();
    }
    lVar5 = local_res20;
    local_res10 = local_res20;
    FUN_140189070(local_res20);
    (*(code *)PTR__guard_dispatch_icall_140ee15d0)(lVar6);
    DAT_140f2b128 = lVar5;
  }
LAB_14018d29d:
  FUN_140188e10(local_res18);
  cVar3 = (*(code *)PTR__guard_dispatch_icall_140ee15d0)(lVar6);
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

