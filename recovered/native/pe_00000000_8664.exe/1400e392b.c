/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e392b */

void FUN_1400e392b(undefined8 param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [34];
  short local_36 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_30 = DAT_140e8c770 & 0xffffffffffff0000 | (ulonglong)*(ushort *)(param_2 + 0x32);
  if (*(ushort *)(param_2 + 0x32) == 0) {
    lVar3 = 0;
    do {
      sVar1 = *(short *)((longlong)&local_30 + lVar3);
      if ((sVar1 != 0) && (cVar2 = FUN_1400e3a12(param_2,sVar1), cVar2 != '\0')) {
        *(short *)(param_2 + 0x32) = sVar1;
        break;
      }
      lVar3 = lVar3 + 2;
    } while (lVar3 != 8);
  }
  local_36[0] = *(short *)(param_3 + 0x3a);
  local_36[1] = 0x2026;
  local_36[2] = 0x85;
  if (*(short *)(param_2 + 0x30) == 0) {
    lVar3 = 0;
    do {
      sVar1 = *(short *)((longlong)local_36 + lVar3);
      if ((sVar1 != 0) && (cVar2 = FUN_1400e3a12(param_2,sVar1), cVar2 != '\0')) {
        *(short *)(param_2 + 0x30) = sVar1;
        goto LAB_1400e39a9;
      }
      lVar3 = lVar3 + 2;
    } while (lVar3 != 6);
    if (*(short *)(param_2 + 0x30) == 0) {
      *(undefined2 *)(param_2 + 0x30) = 0x85;
      *(undefined1 *)(param_2 + 0x35) = 1;
    }
  }
LAB_1400e39a9:
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
  }
  return;
}

