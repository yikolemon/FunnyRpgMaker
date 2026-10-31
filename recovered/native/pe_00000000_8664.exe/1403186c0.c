/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403186c0 */

void FUN_1403186c0(int param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  lVar1 = DAT_14062a630;
  iVar4 = *(int *)(DAT_14062a630 + 0x167c);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    *(int *)(DAT_14062a630 + 0x16ac) = iVar4;
    *(uint *)(lVar1 + 0x16b0) = (uint)(*(int *)(lVar1 + 0x1fe0) != iVar4) + *(int *)(lVar1 + 4);
    *(undefined1 *)(lVar1 + 0x16b4) = *(undefined1 *)(lVar1 + 0x168c);
    *(bool *)(lVar1 + 0x16b5) = *(int *)(lVar1 + 0x1680) == iVar4;
    if (*(int *)(lVar1 + 0x26bc) == iVar4) {
      FUN_1403588ba(iVar4);
      iVar4 = *(int *)(lVar1 + 0x167c);
    }
    if ((*(longlong *)(lVar1 + 0x1628) != 0) &&
       (iVar4 == *(int *)(*(longlong *)(lVar1 + 0x1628) + 0xc4))) {
      if ((*(byte *)(lVar1 + 0x2acc) & 2) != 0) {
        FUN_14030f4ba("s][Data]\n");
      }
      FUN_1403188ad();
      iVar4 = *(int *)(lVar1 + 0x167c);
    }
  }
  *(bool *)(lVar1 + 0x1688) = iVar4 != param_1;
  if (iVar4 != param_1) {
    if ((*(byte *)(lVar1 + 0x2acc) & 2) != 0) {
      if (*(longlong *)(lVar1 + 0x16a0) == 0) {
        pwVar6 = L"pNonPic";
      }
      else {
        pwVar6 = *(wchar_t **)(*(longlong *)(lVar1 + 0x16a0) + 8);
      }
      if (param_2 == 0) {
        uVar2 = FUN_1403118b9(0,0x14);
        pwVar5 = L"pNonPic";
      }
      else {
        sVar3 = strlen(*(char **)(param_2 + 8));
        uVar2 = FUN_1403118b9(0,0x14 - (int)sVar3);
        pwVar5 = *(wchar_t **)(param_2 + 8);
      }
      FUN_14030f4ba((longlong)L"LoopTimes" + 3,param_1,pwVar5,uVar2,L"pNonPic",iVar4,pwVar6);
    }
    *(undefined4 *)(lVar1 + 0x1684) = 0;
    *(undefined2 *)(lVar1 + 0x168b) = 0;
    *(undefined1 *)(lVar1 + 0x168f) = 0xff;
    if (param_1 != 0) {
      *(int *)(lVar1 + 0x16c0) = param_1;
      *(undefined4 *)(lVar1 + 0x16c4) = 0;
    }
  }
  *(int *)(lVar1 + 0x167c) = param_1;
  *(undefined2 *)(lVar1 + 0x1689) = 0;
  *(longlong *)(lVar1 + 0x16a0) = param_2;
  *(undefined2 *)(lVar1 + 0x168d) = 0;
  *(undefined4 *)(lVar1 + 0x1690) = 0;
  if (param_1 != 0) {
    *(int *)(lVar1 + 0x1680) = param_1;
    if ((*(int *)(lVar1 + 0x2214) == param_1) || (uVar2 = 1, *(int *)(lVar1 + 0x23cc) == param_1)) {
      uVar2 = *(undefined4 *)(lVar1 + 0x2250);
    }
    *(undefined4 *)(lVar1 + 0x169c) = uVar2;
  }
  *(undefined4 *)(lVar1 + 0x1f90) = 0;
  *(undefined1 *)(lVar1 + 0x1f94) = 0;
  return;
}

