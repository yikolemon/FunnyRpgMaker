/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095115 */

void FUN_140095115(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = DAT_140f2a910;
  uVar1 = *(undefined8 *)(param_1 + 0x418);
  uVar2 = *(undefined8 *)(param_2 + 0x418);
  uVar4 = FUN_1400884e3(uVar1);
  iVar5 = FUN_1400884e3(uVar2);
  if ((int)uVar4 < iVar5) {
    FUN_1401c5180(*(longlong *)(lVar3 + 0x15b0) + (longlong)(int)uVar4 * 8,
                  *(longlong *)(lVar3 + 0x15b0) + (longlong)(int)uVar4 * 8 + 8,
                  (longlong)(int)(~uVar4 + iVar5) << 3);
    *(undefined8 *)(*(longlong *)(lVar3 + 0x15b0) + -8 + (longlong)iVar5 * 8) = uVar1;
  }
  else {
    lVar6 = (longlong)iVar5;
    FUN_1401c5180(*(longlong *)(lVar3 + 0x15b0) + lVar6 * 8 + 8,
                  *(longlong *)(lVar3 + 0x15b0) + lVar6 * 8,(ulonglong)(uVar4 - iVar5) << 3);
    *(undefined8 *)(*(longlong *)(lVar3 + 0x15b0) + lVar6 * 8) = uVar1;
  }
  return;
}

