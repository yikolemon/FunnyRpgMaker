/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf3b8 */

ulonglong FUN_1801cf3b8(ulonglong *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (param_1 == (ulonglong *)0x0) {
    uVar4 = 0;
  }
  else {
    local_20 = *param_1;
    if ((int)local_20 == 0) {
      uVar3 = -(int)(local_20 >> 0x20);
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = local_20 >> 0x20;
      }
    }
    else if (local_20 >> 0x20 == 0) {
      uVar3 = -(int)local_20;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = local_20 & 0xffffffff;
      }
    }
    else {
      iVar1 = FUN_1801cf26d(&local_20);
      FUN_1801cf2c2(&local_20);
      iVar2 = FUN_1801cf393(local_20 & 0xffffffff);
      bVar5 = (byte)iVar1;
      if (iVar1 < 1) {
        uVar4 = (ulonglong)(uint)(iVar2 << (-bVar5 & 0x1f));
      }
      else {
        uVar4 = (ulonglong)(uint)(iVar2 + (1 << (bVar5 - 1 & 0x1f)) >> (bVar5 & 0x1f));
      }
    }
  }
  if (DAT_180402640 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
  }
  return uVar4;
}

