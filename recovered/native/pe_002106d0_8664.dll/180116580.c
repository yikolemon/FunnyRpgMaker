/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116580 */

void FUN_180116580(byte param_1)

{
  float *pfVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = DAT_180419160;
  uVar3 = *(uint *)(DAT_180419160 + 0x1fa0);
  if ((param_1 != 0) && ((uVar3 & 0x40) == 0)) {
    pfVar1 = (float *)(DAT_180419160 + 0xdb4);
    *(float *)(DAT_180419160 + 0x2860) = *pfVar1;
    *(float *)(lVar2 + 0xdb4) = *pfVar1 * *(float *)(lVar2 + 0xdb8);
  }
  if ((~param_1 & (uVar3 & 0x40) == 0) == 0) {
    uVar3 = uVar3 | 0x40;
    *(uint *)(lVar2 + 0x1fa0) = uVar3;
  }
  iVar6 = *(int *)(lVar2 + 0x2128);
  if (iVar6 == *(int *)(lVar2 + 0x212c)) {
    if (iVar6 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar6 / 2 + iVar6;
    }
    iVar7 = iVar6 + 1;
    if (iVar6 + 1 < iVar4) {
      iVar7 = iVar4;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar7 << 2);
    if (*(longlong *)(lVar2 + 0x2130) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(lVar2 + 0x2130),(longlong)*(int *)(lVar2 + 0x2128) << 2);
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2130));
    }
    *(longlong *)(lVar2 + 0x2130) = lVar5;
    *(int *)(lVar2 + 0x212c) = iVar7;
    uVar3 = *(uint *)(lVar2 + 0x1fa0);
    iVar6 = *(int *)(lVar2 + 0x2128);
  }
  else {
    lVar5 = *(longlong *)(lVar2 + 0x2130);
  }
  *(uint *)(lVar5 + (longlong)iVar6 * 4) = uVar3;
  *(int *)(lVar2 + 0x2128) = *(int *)(lVar2 + 0x2128) + 1;
  *(short *)(lVar2 + 0x2864) = *(short *)(lVar2 + 0x2864) + 1;
  return;
}

