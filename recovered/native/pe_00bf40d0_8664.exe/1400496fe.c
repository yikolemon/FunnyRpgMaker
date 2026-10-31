/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400496fe */

undefined4 FUN_1400496fe(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  int local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x2e0);
  if (lVar2 == 0) {
    uVar4 = 6;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 4);
    FUN_140049b40(*(longlong *)(lVar2 + 0x108),local_48,uVar1);
    if (uVar1 < param_2) {
      FUN_1400b3c00((undefined1 (*) [32])(param_3 + (ulonglong)uVar1 * 4),0,
                    (ulonglong)(param_2 - uVar1) << 2);
      param_2 = *(uint *)(lVar2 + 4);
    }
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      pbVar5 = (byte *)(lVar2 + 0xa8);
      uVar4 = 0;
      uVar6 = 0;
      do {
        iVar3 = FUN_140049c03(pbVar5,local_48[uVar6]);
        *(int *)(param_3 + uVar6 * 4) = iVar3;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x18;
      } while (param_2 != uVar6);
    }
  }
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_68);
  }
  return uVar4;
}

