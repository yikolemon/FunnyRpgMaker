/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014c766 */

void __thiscall FUN_1014c766(int param_1,char param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  
  sVar2 = 0;
  iVar4 = 0;
  bVar3 = false;
  do {
    sVar1 = *(short *)(param_1 + 0x12 + iVar4 * 2);
    sVar5 = *(short *)(param_1 + 8);
    if (sVar1 == 0) {
      sVar5 = 0;
    }
    if (!bVar3) {
      sVar5 = 0;
    }
    sVar5 = sVar2 + sVar5;
    if (param_2 != '\0') {
      if (iVar4 == 1) {
        *(short *)(param_1 + 0xc) = sVar5;
      }
      else if (iVar4 == 2) {
        *(short *)(param_1 + 0xe) = sVar5;
      }
      else if (iVar4 == 3) {
        *(short *)(param_1 + 0x10) = sVar5;
        break;
      }
    }
    bVar3 = (bool)(bVar3 | sVar1 != 0);
    sVar2 = sVar5 + sVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  *(uint *)(param_1 + 4) = (uint)(ushort)(sVar5 + sVar1);
  return;
}

