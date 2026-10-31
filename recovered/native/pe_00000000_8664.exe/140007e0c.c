/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140007e0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140007e0c(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_38[0] = _DAT_1401c8550;
  local_38[1] = _UNK_1401c8554;
  local_38[2] = _UNK_1401c8558;
  local_38[3] = _UNK_1401c855c;
  iVar4 = 0;
  lVar5 = 0;
  do {
    uVar1 = *(undefined4 *)((longlong)local_38 + lVar5);
    FUN_140007a46(param_1);
    iVar2 = *(int *)(param_1 + 0x14);
    uVar3 = iVar2 - 0x30;
    if (9 < uVar3) {
      if (iVar2 - 0x41U < 6) {
        uVar3 = iVar2 - 0x37;
      }
      else {
        if (5 < iVar2 - 0x61U) {
          iVar4 = -1;
          break;
        }
        uVar3 = iVar2 - 0x57;
      }
    }
    iVar4 = iVar4 + (uVar3 << ((byte)uVar1 & 0x1f));
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x10);
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
  }
  return iVar4;
}

