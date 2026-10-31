/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004d17c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_1004d17c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_24;
  local_24[0] = _DAT_1028f720;
  local_24[1] = _UNK_1028f724;
  local_24[2] = _UNK_1028f728;
  local_24[3] = _UNK_1028f72c;
  iVar5 = 0;
  iVar4 = 0;
  do {
    uVar1 = *(undefined4 *)((int)local_24 + iVar4);
    FUN_1004ce60();
    iVar2 = *(int *)(param_1 + 0xc);
    uVar3 = iVar2 - 0x30;
    if (9 < uVar3) {
      if (iVar2 - 0x41U < 6) {
        uVar3 = iVar2 - 0x37;
      }
      else {
        if (5 < iVar2 - 0x61U) {
          iVar5 = -1;
          break;
        }
        uVar3 = iVar2 - 0x57;
      }
    }
    iVar5 = iVar5 + (uVar3 << ((byte)uVar1 & 0x1f));
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0x10);
  if (DAT_10388d00 != (local_14 ^ (uint)local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar5;
}

