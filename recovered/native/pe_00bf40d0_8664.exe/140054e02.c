/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140054e02 */

void FUN_140054e02(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStackY_68 [32];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  lVar3 = *(longlong *)(param_1 + 0x98);
  lVar1 = *(longlong *)(param_2 + 0x90);
  local_2c = 0;
  uVar2 = (**(code **)(param_2 + 0x48))(param_2);
  if (-1 < (int)uVar2) {
    uVar5 = *(uint *)(lVar1 + 8) / 100;
    if (uVar2 < uVar5) {
      uVar5 = uVar2;
    }
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      lVar3 = FUN_14001c617(lVar3,0xfc,0,uVar5,0,&local_2c);
      *(longlong *)(param_1 + 0x1b8) = lVar3;
      if ((local_2c == 0) && (*(uint *)(param_1 + 0x1b0) = uVar5, uVar5 != 0)) {
        lVar3 = 0xb4;
        uVar4 = 0;
        do {
          lVar1 = *(longlong *)(param_1 + 0x1b8);
          *(undefined4 *)(lVar1 + -0x40 + lVar3) = 1;
          *(undefined4 *)(lVar1 + -0xb0 + lVar3) = 4;
          *(undefined4 *)(lVar1 + lVar3) = 0xf5c;
          *(undefined8 *)(lVar1 + -0x48 + lVar3) = 0x70027a000;
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0xfc;
        } while (uVar4 < *(uint *)(param_1 + 0x1b0));
      }
    }
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStackY_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStackY_68);
}

