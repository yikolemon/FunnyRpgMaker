/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011648a */

void FUN_18011648a(uint param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = DAT_180419160;
  uVar1 = *(uint *)(DAT_180419160 + 0x1fa0) | param_1;
  if (param_2 == '\0') {
    uVar1 = ~param_1 & *(uint *)(DAT_180419160 + 0x1fa0);
  }
  iVar3 = *(int *)(DAT_180419160 + 0x2128);
  *(uint *)(DAT_180419160 + 0x1fa0) = uVar1;
  if (iVar3 == *(int *)(lVar2 + 0x212c)) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar6 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar4 = FUN_1800fe7f8((longlong)iVar6 << 2);
    if (*(longlong *)(lVar2 + 0x2130) != 0) {
      FUN_1802a82f0(lVar4,*(longlong *)(lVar2 + 0x2130),(longlong)*(int *)(lVar2 + 0x2128) << 2);
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2130));
    }
    *(longlong *)(lVar2 + 0x2130) = lVar4;
    *(int *)(lVar2 + 0x212c) = iVar6;
    iVar3 = *(int *)(lVar2 + 0x2128);
  }
  else {
    lVar4 = *(longlong *)(lVar2 + 0x2130);
  }
  *(uint *)(lVar4 + (longlong)iVar3 * 4) = uVar1;
  *(int *)(lVar2 + 0x2128) = *(int *)(lVar2 + 0x2128) + 1;
  return;
}

