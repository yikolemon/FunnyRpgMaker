/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140105300 */

void FUN_140105300(longlong param_1,longlong param_2)

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
  
  FUN_1400d39b0(local_res18,0);
  lVar5 = DAT_1401d46f8;
  local_res20 = DAT_1401d46f8;
  if (DAT_1401cc4c0 == 0) {
    FUN_1400d39b0(&local_res10,0);
    if (DAT_1401cc4c0 == 0) {
      DAT_1401cc480 = DAT_1401cc480 + 1;
      DAT_1401cc4c0 = (ulonglong)DAT_1401cc480;
    }
    FUN_1400d3a00(&local_res10);
  }
  uVar2 = DAT_1401cc4c0;
  lVar4 = *(longlong *)(param_2 + 8);
  lVar1 = DAT_1401cc4c0 * 8;
  lVar6 = 0;
  if ((DAT_1401cc4c0 < *(ulonglong *)(lVar4 + 0x18)) &&
     (lVar6 = *(longlong *)(lVar1 + *(longlong *)(lVar4 + 0x10)), lVar6 != 0)) goto LAB_14010539d;
  if (*(char *)(lVar4 + 0x24) == '\0') {
LAB_1401053f0:
    if (lVar6 != 0) goto LAB_14010539d;
  }
  else {
    lVar4 = FUN_1400d4110();
    if (uVar2 < *(ulonglong *)(lVar4 + 0x18)) {
      lVar6 = *(longlong *)(lVar1 + *(longlong *)(lVar4 + 0x10));
      goto LAB_1401053f0;
    }
  }
  lVar6 = lVar5;
  if (lVar5 == 0) {
    lVar5 = FUN_1400e0f00(&local_res20,param_2);
    lVar6 = local_res20;
    if (lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_14000b671();
    }
    lVar5 = local_res20;
    local_res10 = local_res20;
    FUN_1400d3ca0(local_res20);
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar6);
    DAT_1401d46f8 = lVar5;
  }
LAB_14010539d:
  FUN_1400d3a00(local_res18);
  cVar3 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar6);
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

