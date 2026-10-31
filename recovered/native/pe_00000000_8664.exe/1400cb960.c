/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cb960 */

void FUN_1400cb960(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  
  lVar2 = DAT_140f2a910;
  lVar4 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (*(char *)(lVar4 + 0x10e) == '\0') {
    lVar1 = *(longlong *)(DAT_140f2a910 + 0x2560);
    if (lVar1 == 0) {
      FUN_14007a954("Mismatched BeginTabBar()/EndTabBar()!");
      return;
    }
    if (*(char *)(lVar1 + 0x83) == '\x01') {
      FUN_1400cba69(lVar1);
    }
    if (((*(char *)(lVar1 + 0x84) == '\0') && (*(int *)(lVar1 + 0x2c) != 0)) &&
       (*(int *)(lVar2 + 4) <= *(int *)(lVar1 + 0x34) + 1)) {
      fVar6 = *(float *)(lVar1 + 0x44) + *(float *)(lVar1 + 0x50);
    }
    else {
      fVar6 = (float)FUN_14007b71f(*(float *)(lVar4 + 0x15c) - *(float *)(lVar1 + 0x44),
                                   *(undefined4 *)(lVar1 + 0x4c));
      *(float *)(lVar1 + 0x4c) = fVar6;
      fVar6 = fVar6 + *(float *)(lVar1 + 0x44);
    }
    *(float *)(lVar4 + 0x15c) = fVar6;
    if ('\x01' < *(char *)(lVar1 + 0x82)) {
      *(undefined8 *)(lVar4 + 0x158) = *(undefined8 *)(lVar1 + 0x98);
    }
    *(undefined2 *)(lVar1 + 0x8a) = 0xffff;
    if ((*(byte *)(lVar1 + 0x1a) & 0x10) == 0) {
      FUN_140091667();
    }
    lVar4 = (longlong)*(int *)(lVar2 + 0x2590) + -1;
    iVar3 = (int)lVar4;
    *(int *)(lVar2 + 0x2590) = iVar3;
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1400cc70c(*(longlong *)(lVar2 + 0x2598) + lVar4 * 0x10 + -0x10);
    }
    *(undefined8 *)(lVar2 + 0x2560) = uVar5;
  }
  return;
}

