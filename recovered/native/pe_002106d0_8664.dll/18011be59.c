/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011be59 */

void FUN_18011be59(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = DAT_180419160;
  uVar1 = *(undefined8 *)(param_1 + 0x418);
  uVar2 = *(undefined8 *)(param_2 + 0x418);
  uVar4 = FUN_18010f1cb(uVar1);
  iVar5 = FUN_18010f1cb(uVar2);
  if ((int)uVar4 < iVar5) {
    FUN_1802a82f0(*(longlong *)(lVar3 + 0x15b0) + (longlong)(int)uVar4 * 8,
                  *(longlong *)(lVar3 + 0x15b0) + (longlong)(int)uVar4 * 8 + 8,
                  (longlong)(int)(~uVar4 + iVar5) << 3);
    *(undefined8 *)(*(longlong *)(lVar3 + 0x15b0) + -8 + (longlong)iVar5 * 8) = uVar1;
  }
  else {
    lVar6 = (longlong)iVar5;
    FUN_1802a82f0(*(longlong *)(lVar3 + 0x15b0) + lVar6 * 8 + 8,
                  *(longlong *)(lVar3 + 0x15b0) + lVar6 * 8,(ulonglong)(uVar4 - iVar5) << 3);
    *(undefined8 *)(*(longlong *)(lVar3 + 0x15b0) + lVar6 * 8) = uVar1;
  }
  return;
}

