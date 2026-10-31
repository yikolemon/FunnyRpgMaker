/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101909fa */

void FUN_101909fa(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_24 [2];
  short local_22 [3];
  ulonglong local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_24;
  local_1c = DAT_10301400 & 0xffffffffffff0000 | (ulonglong)*(ushort *)(param_2 + 0x26);
  if (*(ushort *)(param_2 + 0x26) == 0) {
    iVar3 = 0;
    do {
      sVar1 = *(short *)((int)&local_1c + iVar3);
      if ((sVar1 != 0) && (cVar2 = FUN_10190ad0(sVar1), cVar2 != '\0')) {
        *(short *)(param_2 + 0x26) = sVar1;
        break;
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 != 8);
  }
  local_22[0] = *(short *)(param_3 + 0x36);
  local_22[1] = 0x2026;
  local_22[2] = 0x85;
  if (*(short *)(param_2 + 0x24) == 0) {
    iVar3 = 0;
    do {
      sVar1 = *(short *)((int)local_22 + iVar3);
      if ((sVar1 != 0) && (cVar2 = FUN_10190ad0(sVar1), cVar2 != '\0')) {
        *(short *)(param_2 + 0x24) = sVar1;
        goto LAB_10190a71;
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 != 6);
    if (*(short *)(param_2 + 0x24) == 0) {
      *(undefined2 *)(param_2 + 0x24) = 0x85;
      *(undefined1 *)(param_2 + 0x29) = 1;
    }
  }
LAB_10190a71:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

