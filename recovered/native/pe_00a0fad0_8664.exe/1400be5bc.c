/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400be5bc */

byte * FUN_1400be5bc(longlong param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  iVar2 = 0;
  iVar1 = 0;
  if (*(char *)(param_1 + 100) == '\x01') {
    if (((*(uint *)(param_1 + 0x10) >> 10 & 1) == 0) ||
       ((*(int *)(param_1 + 0x14) != -0x5ffffff4 && (*(int *)(param_1 + 0x14) != -0x5ffffffd)))) {
      bVar3 = (byte)((*(uint *)(param_1 + 0x10) & 0x10) >> 4);
      goto LAB_1400be65b;
    }
    iVar2 = 0;
    bVar3 = 0;
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) goto LAB_1400be65b;
    if (*(ulonglong *)(param_1 + 0x38) < 8) {
      lVar4 = param_1 + 0x20;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x20);
    }
    iVar2 = FUN_1400dcbb0(lVar4,local_38,3);
    bVar3 = 0;
    if (iVar2 < 0x7b) {
      uVar5 = iVar2 - 2;
      if (0x3e < uVar5) {
LAB_1400be6a6:
        if (iVar2 == 0) {
          bVar3 = (local_28 & 0x10) >> 4;
          iVar2 = 0;
        }
        goto LAB_1400be65b;
      }
      if ((0x4008000000000003U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0) {
        if ((ulonglong)uVar5 != 3) goto LAB_1400be6a6;
        if ((*(byte *)(param_1 + 0x60) & 2) == 0) {
          iVar1 = 5;
          goto LAB_1400be659;
        }
      }
    }
    else if (((iVar2 != 0x7b) && (iVar2 != 0xa1)) && (iVar2 != 0x10b)) goto LAB_1400be65b;
    iVar1 = 0;
  }
LAB_1400be659:
  iVar2 = iVar1;
  bVar3 = 0;
LAB_1400be65b:
  *param_2 = bVar3;
  *(int *)(param_2 + 4) = iVar2;
  if (DAT_1401c9640 != (local_18 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

