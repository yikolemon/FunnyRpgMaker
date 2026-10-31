/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802077c6 */

void FUN_1802077c6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  lVar4 = *(longlong *)(param_2 + 0x90);
  local_2c = 0;
  uVar2 = (**(code **)(param_2 + 0x48))(param_2);
  if (-1 < (int)uVar2) {
    uVar6 = *(uint *)(lVar4 + 8) / 100;
    if (uVar2 < uVar6) {
      uVar6 = uVar2;
    }
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      local_40 = &local_2c;
      local_48 = 0;
      uVar3 = FUN_1801c9c3f(uVar3,0xfc,0,uVar6);
      *(undefined8 *)(param_1 + 0x1b8) = uVar3;
      if ((local_2c == 0) && (*(uint *)(param_1 + 0x1b0) = uVar6, uVar6 != 0)) {
        lVar4 = 0xb4;
        uVar5 = 0;
        do {
          lVar1 = *(longlong *)(param_1 + 0x1b8);
          *(undefined4 *)(lVar1 + -0x40 + lVar4) = 1;
          *(undefined4 *)(lVar1 + -0xb0 + lVar4) = 4;
          *(undefined4 *)(lVar1 + lVar4) = 0xf5c;
          *(undefined8 *)(lVar1 + -0x48 + lVar4) = 0x70027a000;
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0xfc;
        } while (uVar5 < *(uint *)(param_1 + 0x1b0));
      }
    }
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

