/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116676 */

void FUN_180116676(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = DAT_180419160;
  if (0 < *(short *)(DAT_180419160 + 0x2864)) {
    *(short *)(DAT_180419160 + 0x2864) = *(short *)(DAT_180419160 + 0x2864) + -1;
    iVar2 = *(int *)(lVar4 + 0x2128);
    *(int *)(lVar4 + 0x2128) = iVar2 + -1;
    uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x2130) + -8 + (longlong)iVar2 * 4);
    bVar1 = *(byte *)(lVar4 + 0x1fa0);
    *(uint *)(lVar4 + 0x1fa0) = uVar3;
    if (((bVar1 & 0x40) != 0) && ((uVar3 & 0x40) == 0)) {
      *(undefined4 *)(lVar4 + 0xdb4) = *(undefined4 *)(lVar4 + 0x2860);
    }
    return;
  }
  FUN_180101698("Calling EndDisabled() too many times!");
  return;
}

