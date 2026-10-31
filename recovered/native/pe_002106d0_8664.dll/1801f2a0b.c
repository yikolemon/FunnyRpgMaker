/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f2a0b */

ulonglong FUN_1801f2a0b(longlong param_1,longlong param_2)

{
  int *piVar1;
  short sVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int *piVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  uint *local_40;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  local_2c = (**(code **)(param_1 + 0x2a0))(param_1,0x63767420,param_2,&local_30);
  if (local_2c == 0) {
    *(uint *)(param_1 + 0x3d0) = local_30 >> 1;
    local_40 = &local_2c;
    local_48 = 0;
    uVar3 = FUN_1801cc8d6(uVar3,4,0);
    *(undefined8 *)(param_1 + 0x3d8) = uVar3;
    uVar4 = (ulonglong)local_2c;
    if (local_2c == 0) {
      uVar4 = FUN_1801cec60(param_2,*(int *)(param_1 + 0x3d0) * 2);
      local_2c = (uint)uVar4;
      if (local_2c == 0) {
        if ((ulonglong)*(uint *)(param_1 + 0x3d0) != 0) {
          piVar5 = *(int **)(param_1 + 0x3d8);
          piVar1 = piVar5 + *(uint *)(param_1 + 0x3d0);
          do {
            sVar2 = FUN_1801cedcb(param_2);
            *piVar5 = (int)sVar2 << 6;
            piVar5 = piVar5 + 1;
          } while (piVar5 < piVar1);
        }
        FUN_1801ced84(param_2);
        if (*(char *)(param_1 + 0x401) == '\0') {
          uVar4 = (ulonglong)local_2c;
        }
        else {
          uVar4 = FUN_1801f2b37(param_1,param_2);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    uVar4 = 0;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

