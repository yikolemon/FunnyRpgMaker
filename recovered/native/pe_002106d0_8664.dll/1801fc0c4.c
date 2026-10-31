/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fc0c4 */

undefined4 FUN_1801fc0c4(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x2e0);
  if (lVar4 == 0) {
    uVar3 = 6;
  }
  else {
    uVar1 = *(uint *)(lVar4 + 4);
    FUN_1801fc506(*(undefined8 *)(lVar4 + 0x108),local_48,(ulonglong)uVar1);
    if (uVar1 < param_2) {
      FUN_1802a89a0(param_3 + (ulonglong)uVar1 * 4,0,(ulonglong)(param_2 - uVar1) << 2);
      param_2 = *(uint *)(lVar4 + 4);
    }
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      lVar4 = lVar4 + 0xa8;
      uVar3 = 0;
      uVar5 = 0;
      do {
        uVar2 = FUN_1801fc5c9(lVar4,local_48[uVar5]);
        *(undefined4 *)(param_3 + uVar5 * 4) = uVar2;
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (param_2 != uVar5);
    }
  }
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
  }
  return uVar3;
}

