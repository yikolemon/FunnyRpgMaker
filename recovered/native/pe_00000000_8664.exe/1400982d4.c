/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400982d4 */

void FUN_1400982d4(undefined8 param_1,longlong param_2,longlong param_3)

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
  
  uVar1 = DAT_1401c86a4;
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_3 + 8);
  if (iVar3 == 1) {
    pcVar5 = "*Missing Text*";
    if (*(char **)(DAT_140f2a910 + 0x2a28) != (char *)0x0) {
      pcVar5 = *(char **)(DAT_140f2a910 + 0x2a28);
    }
    cVar2 = FUN_1400b06d6(pcVar5,0,*(uint *)(param_2 + 0x10) >> 0xd & 1,1);
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
        uVar4 = FUN_1400cc790(param_3,piVar7);
        cVar2 = FUN_1400b2126(uVar4,unaff_RBP & 0xffffffff,0,&local_58);
        if (cVar2 != '\0') {
          FUN_1400cc975(param_3,piVar7);
        }
        FUN_140092bab(0,uVar1);
        FUN_1400abfd5(&DAT_140edaece);
        iVar3 = *(int *)(param_3 + 8);
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar6 < iVar3);
  }
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_78);
}

