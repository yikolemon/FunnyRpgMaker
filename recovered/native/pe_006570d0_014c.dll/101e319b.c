/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e319b */

void __fastcall FUN_101e319b(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  if (*param_2 == 1) {
    piVar3 = (int *)(param_1 + 0x84);
    uVar5 = 0;
    if (4 < *(ushort *)(param_1 + 0x7c)) {
      uVar5 = *(ushort *)(param_1 + 0x7c) - 4;
    }
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_1 + 0x1ce) != '\0') {
        *(undefined4 *)(param_1 + 0x10) = 0x86;
      }
      goto LAB_101e325f;
    }
    piVar3 = (int *)(param_1 + 0xa0);
    uVar5 = (uint)*(ushort *)(param_1 + 0x98);
  }
  iVar1 = *piVar3;
  cVar2 = FUN_101eccf6(&local_20,iVar1,&local_18);
  if (cVar2 == '\0') {
    if (((local_1c != 0) && (*(int *)(param_1 + 0x204) == 0)) && (uVar5 != 0)) {
      uVar4 = 0;
      do {
        if (local_18 != uVar4) {
          piVar3 = (int *)(iVar1 + uVar4 * 8);
          *piVar3 = *piVar3 + local_1c;
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
    if (((local_20 != 0) && (*(int *)(param_1 + 0x204) != 7)) && (uVar5 != 0)) {
      uVar4 = 0;
      do {
        if (local_18 != uVar4) {
          piVar3 = (int *)(iVar1 + 4 + uVar4 * 8);
          *piVar3 = *piVar3 + local_20;
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
LAB_101e325f:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

