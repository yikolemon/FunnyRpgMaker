/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802013aa */

int FUN_1802013aa(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined2 local_a0;
  undefined2 local_98;
  undefined1 local_88 [72];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_c8;
  lVar1 = param_1[1];
  *(undefined8 **)(param_2 + 0x238) = param_1;
  *(undefined1 *)(param_2 + 0x231) = 0;
  iVar3 = 0;
  if ((*(int *)(param_2 + 0x70) == 0) || (*(int *)(param_2 + 0x74) == 0)) goto LAB_1802014e6;
  FUN_1802a89a0(param_2 + 0xb8,0,0x170);
  *(undefined4 *)(param_2 + 0x184) = 1;
  *(undefined4 *)(param_2 + 0x204) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x20c) = 0xf5c;
  *(undefined8 *)(param_2 + 0x17c) = 0x70027a000;
  *(longlong *)(param_2 + 0x228) = param_2;
  *(undefined4 *)(param_2 + 0x260) = param_3;
  *(undefined8 *)(param_2 + 0x268) = param_4;
  if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
    local_a8 = 0x61;
    uVar4 = 0x2000;
  }
  else {
    local_a8 = *(int *)((longlong)param_1 + 0x694) + 1;
    uVar4 = 0x5000;
  }
  local_a0 = *(undefined2 *)(param_2 + 0xac);
  local_98 = *(undefined2 *)(param_2 + 0xae);
  iVar2 = FUN_1802018cd(local_88,uVar4,param_2 + 0xb8,*param_1);
  iVar3 = 0;
  if (((iVar2 == 0) &&
      (iVar3 = FUN_1801ce63e(lVar1,*(int *)(param_2 + 0x70) + *(int *)(param_1 + 3)), iVar3 == 0))
     && (iVar3 = FUN_1801cec60(lVar1,*(undefined4 *)(param_2 + 0x74)), iVar3 == 0)) {
    iVar3 = FUN_180201988(local_88,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
    FUN_1801ced84(lVar1);
    if (iVar3 == 0) {
      *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) & 0xfe;
      iVar3 = *(int *)(param_2 + 0x210);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
LAB_180201555:
        *(int *)(param_2 + 0x210) = iVar3;
      }
      else if (iVar3 == 0) {
        iVar3 = 0x3ade68b1;
        goto LAB_180201555;
      }
      if (1000 < *(uint *)(param_2 + 0x180)) {
        *(undefined4 *)(param_2 + 0x180) = 7;
      }
      iVar3 = 0;
      if (1000 < *(uint *)(param_2 + 0x184)) {
        *(undefined4 *)(param_2 + 0x184) = 1;
      }
    }
  }
  FUN_180201c4d(param_2);
  FUN_180201c66(local_88);
LAB_1802014e6:
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_c8);
  }
  return iVar3;
}

