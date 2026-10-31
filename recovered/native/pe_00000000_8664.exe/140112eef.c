/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112eef */

void FUN_140112eef(int param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  short sVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  param_3 = (*(byte *)(lVar1 + 7) & 4) >> 2 & param_3;
  if (param_3 == 1) {
    if (*(int *)(lVar1 + 0x6c) < 1) {
      sVar2 = 1;
    }
    else {
      lVar5 = 0x5e;
      lVar6 = 0;
      uVar3 = 0;
      do {
        uVar3 = FUN_140112ff5(uVar3,*(undefined2 *)(*(longlong *)(lVar1 + 0x18) + lVar5));
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x74;
      } while (lVar6 < *(int *)(lVar1 + 0x6c));
      sVar2 = (short)uVar3 + 1;
    }
  }
  else {
    sVar2 = 0;
  }
  lVar6 = *(longlong *)(lVar1 + 0x18);
  lVar4 = (longlong)param_1 * 0x74;
  lVar5 = lVar6 + lVar4;
  *(byte *)(lVar6 + 0x71 + lVar4) = *(byte *)(lVar6 + 0x71 + lVar4) & 0xfc | param_2 & 3;
  if ((param_2 & 3) == 0) {
    sVar2 = -1;
  }
  else if ((param_3 & *(short *)(lVar5 + 0x5e) != -1) != 0) goto LAB_140112f9d;
  *(short *)(lVar5 + 0x5e) = sVar2;
LAB_140112f9d:
  if (0 < *(int *)(lVar1 + 0x6c)) {
    lVar6 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + 0x18) + lVar6 != lVar5 && param_3 == 0) {
        *(undefined2 *)(*(longlong *)(lVar1 + 0x18) + 0x5e + lVar6) = 0xffff;
      }
      FUN_140112e67(lVar1);
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x74;
    } while (lVar4 < *(int *)(lVar1 + 0x6c));
  }
  *(undefined1 *)(lVar1 + 0x241) = 1;
  *(undefined1 *)(lVar1 + 0x23c) = 1;
  return;
}

