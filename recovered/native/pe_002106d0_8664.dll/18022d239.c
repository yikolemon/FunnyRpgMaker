/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022d239 */

int FUN_18022d239(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int *local_b0;
  int *local_a0;
  longlong local_98;
  undefined4 local_90;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_d8;
  local_4c = 0;
  lVar3 = param_2 + 0x98;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  iVar7 = 6;
  if (((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) && (iVar7 = 0x13, param_3 < 5)) &&
     (param_3 != 2)) {
    if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
      FUN_1801c9b65(uVar4,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
      puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    cVar5 = FUN_1801ca70d(param_2,param_3,param_4);
    iVar7 = 0x62;
    if (cVar5 != '\0') goto LAB_18022d2e6;
    piVar2 = (int *)(param_2 + 0x68);
    iVar8 = 0;
    if (*piVar2 == 0) {
      iVar9 = 0;
LAB_18022d454:
      *(undefined4 *)(param_2 + 0x60) = 0x62697473;
      goto LAB_18022d31e;
    }
    iVar9 = 0;
    iVar8 = 0;
    if (*(int *)(param_2 + 0x70) == 0) goto LAB_18022d454;
    local_b0 = &local_4c;
    local_b8 = 0;
    iVar8 = 0;
    uVar6 = FUN_1801c9c3f(uVar4,*(int *)(param_2 + 0x70),0);
    *(undefined8 *)(param_2 + 0x78) = uVar6;
    iVar9 = 0;
    if (local_4c == 0) {
      puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
      iVar9 = *(int *)(param_2 + 0x90) * -0x40;
      iVar8 = *(int *)(param_2 + 0x68) << 6;
      if (*(char *)(param_2 + 0x82) == '\x06') {
        iVar8 = iVar8 / 3;
      }
      iVar8 = iVar8 + *(int *)(param_2 + 0x94) * -0x40;
      if (iVar8 != 0 || iVar9 != 0) {
        FUN_1801cb5a0(lVar3,iVar9,iVar8);
      }
      if (param_3 < 2) {
        if ((*(byte *)(param_2 + 0xb8) & 0x40) == 0) {
          local_90 = 1;
          local_a0 = piVar2;
          local_98 = lVar3;
          local_4c = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60));
        }
        else {
          local_4c = FUN_18022e3c5(param_1,lVar3,piVar2);
        }
      }
      else if (param_3 == 3) {
        local_4c = FUN_18022e4fe(param_1,lVar3,piVar2);
      }
      else if (param_3 == 4) {
        local_4c = FUN_18022e6a5(param_1,lVar3,piVar2);
      }
      if (local_4c == 0) goto LAB_18022d454;
    }
  }
  else {
LAB_18022d2e6:
    iVar8 = 0;
    iVar9 = 0;
    local_4c = iVar7;
  }
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    FUN_1801c9b65(uVar4,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
LAB_18022d31e:
  if (iVar9 != 0 || iVar8 != 0) {
    FUN_1801cb5a0(lVar3,-iVar9,-iVar8);
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_d8);
  }
  return local_4c;
}

