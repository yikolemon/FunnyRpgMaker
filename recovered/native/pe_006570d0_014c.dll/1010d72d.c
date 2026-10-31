/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010d72d */

void __fastcall FUN_1010d72d(int param_1,char param_2,uint param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  byte bVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_1039d74c;
  bVar5 = (param_3 & 0x14000000) != 0x4000000 & (byte)(param_3 >> 0x18);
  if ((bVar5 == 0) && (*(byte *)(param_1 + 0x103) != bVar5 || param_2 != '\0')) {
    iVar6 = *(int *)(DAT_1039d74c + 0x1490);
    if (iVar6 == *(int *)(DAT_1039d74c + 0x1494)) {
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
      iVar4 = FUN_100fa1fa(iVar7 * 4);
      if (*(int *)(iVar2 + 0x1498) != 0) {
        FUN_1025b2d0(iVar4,*(int *)(iVar2 + 0x1498),*(int *)(iVar2 + 0x1490) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x1498));
      }
      *(int *)(iVar2 + 0x1498) = iVar4;
      *(int *)(iVar2 + 0x1494) = iVar7;
      iVar6 = *(int *)(iVar2 + 0x1490);
    }
    else {
      iVar4 = *(int *)(DAT_1039d74c + 0x1498);
    }
    *(int *)(iVar4 + iVar6 * 4) = param_1;
    iVar6 = *(int *)(iVar2 + 0x1490);
    *(int *)(iVar2 + 0x1490) = iVar6 + 1;
    *(short *)(param_1 + 0x110) = (short)iVar6;
  }
  else if ((bVar5 != 0) && ((*(byte *)(param_1 + 0x103) != bVar5 && (param_2 == '\0')))) {
    uVar3 = (uint)*(short *)(param_1 + 0x110);
    iVar6 = uVar3 + 1;
    iVar4 = *(int *)(DAT_1039d74c + 0x1490);
    if (iVar6 < iVar4) {
      do {
        psVar1 = (short *)(*(int *)(*(int *)(iVar2 + 0x1498) + iVar6 * 4) + 0x110);
        *psVar1 = *psVar1 + -1;
        iVar6 = iVar6 + 1;
        iVar4 = *(int *)(iVar2 + 0x1490);
      } while (iVar6 < iVar4);
      uVar3 = (uint)*(short *)(param_1 + 0x110);
    }
    FUN_1025b2d0(*(int *)(iVar2 + 0x1498) + uVar3 * 4,*(int *)(iVar2 + 0x1498) + uVar3 * 4 + 4,
                 (~uVar3 + iVar4) * 4);
    *(int *)(iVar2 + 0x1490) = *(int *)(iVar2 + 0x1490) + -1;
    *(undefined2 *)(param_1 + 0x110) = 0xffff;
  }
  *(byte *)(param_1 + 0x103) = bVar5;
  return;
}

