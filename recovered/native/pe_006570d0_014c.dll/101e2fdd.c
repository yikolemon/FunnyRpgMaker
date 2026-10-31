/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2fdd */

void __fastcall FUN_101e2fdd(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar1 = *(int *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x24) < iVar1) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar1;
    cVar2 = FUN_101eccf6(&local_1c,0,0);
    if (cVar2 != '\0') goto LAB_101e303a;
    if (iVar1 != 0) {
      local_20 = local_1c;
      local_24 = local_18;
      iVar3 = 0;
      do {
        if (*(uint *)(param_2 + -4 + iVar3 * 4) < (uint)*(ushort *)(param_1 + 0x60)) {
          FUN_101ecdbb(local_24,local_20);
        }
        else if (*(char *)(param_1 + 0x1ce) != '\0') {
          *(undefined4 *)(param_1 + 0x10) = 0x86;
          goto LAB_101e303a;
        }
        iVar3 = iVar3 + -1;
      } while (-iVar3 != iVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
LAB_101e303a:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

