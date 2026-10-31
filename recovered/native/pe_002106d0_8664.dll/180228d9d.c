/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180228d9d */

ulonglong FUN_180228d9d(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  iVar1 = *(int *)(param_1 + 0x270);
  uVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,uVar2,&local_30);
  if (((int)uVar4 == 0) && (0x21 < local_30)) {
    uVar4 = FUN_1801ce690(uVar2,0x20);
    local_2c = (uint)uVar4;
    if (local_2c == 0) {
      uVar3 = FUN_1801ce6a2(uVar2,&local_2c);
      uVar4 = (ulonglong)local_2c;
      if ((local_2c == 0) && (uVar4 = 0, (ushort)((short)uVar3 - 1U) < *(ushort *)(param_1 + 0x174))
         ) {
        if (iVar1 == 0x25000) {
          uVar4 = FUN_1802290c8(param_1 + 0x358,uVar2,uVar3,local_30 - 0x22);
        }
        else if (iVar1 == 0x20000) {
          uVar4 = FUN_180228e97(param_1 + 0x358,uVar2,uVar3,local_30 - 0x22);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x358) = 1;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

