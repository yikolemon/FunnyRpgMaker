/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180238a3d */

undefined8 FUN_180238a3d(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar6 = (ulonglong)uVar2;
  uVar5 = 0x200;
  if (uVar6 != 0) {
    uVar5 = (uVar2 >> 2) + uVar2;
  }
  local_48 = *(undefined8 *)(param_1 + 0x58);
  local_40 = &local_2c;
  lVar3 = FUN_1801c9c3f(*(undefined8 *)(param_1 + 0xd0),3,uVar2,uVar5);
  *(longlong *)(param_1 + 0x58) = lVar3;
  uVar4 = 0xffffffff;
  if (local_2c == 0) {
    lVar1 = lVar3 + (ulonglong)uVar5 * 2;
    *(longlong *)(param_1 + 0x60) = lVar1;
    FUN_1802a82f0(lVar1,lVar3 + uVar6 * 2,uVar6);
    *(uint *)(param_1 + 0x68) = uVar5;
    uVar4 = 0;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

