/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180150bcc */

void FUN_180150bcc(longlong param_1,char param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar5 = 0;
  uVar3 = 0;
  bVar6 = false;
  do {
    sVar1 = *(short *)(param_1 + 0x12 + lVar5 * 2);
    sVar2 = *(short *)(param_1 + 8);
    if (sVar1 == 0) {
      sVar2 = 0;
    }
    if (!bVar6) {
      sVar2 = 0;
    }
    sVar2 = uVar3 + sVar2;
    if (param_2 != '\0') {
      iVar4 = (int)lVar5;
      if (iVar4 == 3) {
        *(short *)(param_1 + 0x10) = sVar2;
      }
      else if (iVar4 == 2) {
        *(short *)(param_1 + 0xe) = sVar2;
      }
      else if (iVar4 == 1) {
        *(short *)(param_1 + 0xc) = sVar2;
      }
    }
    bVar6 = (bool)(bVar6 | sVar1 != 0);
    uVar3 = sVar2 + sVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  *(uint *)(param_1 + 4) = (uint)uVar3;
  return;
}

