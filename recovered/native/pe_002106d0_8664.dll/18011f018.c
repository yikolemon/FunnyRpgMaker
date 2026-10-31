/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011f018 */

void FUN_18011f018(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong unaff_RBP;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  uVar1 = DAT_1802bb8e0;
  local_50 = DAT_180402640 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_3 + 8);
  if (iVar3 == 1) {
    pcVar5 = "*Missing Text*";
    if (*(char **)(DAT_180419160 + 0x2a28) != (char *)0x0) {
      pcVar5 = *(char **)(DAT_180419160 + 0x2a28);
    }
    cVar2 = FUN_1801377a6(pcVar5,0,*(uint *)(param_2 + 0x10) >> 0xd & 1,1);
    if (cVar2 != '\0') {
      *(byte *)(param_2 + 0xd5) = *(byte *)(param_2 + 0xd5) | 4;
    }
  }
  else if (0 < iVar3) {
    lVar8 = 0;
    lVar6 = 0;
    do {
      if ((*(byte *)(*(longlong *)(param_3 + 0x10) + 6 + lVar8) & 0x20) == 0) {
        piVar7 = (int *)(*(longlong *)(param_3 + 0x10) + lVar8);
        local_58 = 0;
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*piVar7 == *(int *)(param_3 + 0x20));
        uVar4 = FUN_180153860(param_3,piVar7);
        cVar2 = FUN_1801391f6(uVar4,unaff_RBP & 0xffffffff,0,&local_58);
        if (cVar2 != '\0') {
          FUN_180153a45(param_3,piVar7);
        }
        FUN_180119893(0,uVar1);
        FUN_1801330a5(&DAT_18037bda9);
        iVar3 = *(int *)(param_3 + 8);
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar6 < iVar3);
  }
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_78);
}

