/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112e5a */

void FUN_10112e5a(char *param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  if (*(char *)(DAT_1039d74c + 0x2824) == '\0') goto LAB_1011308f;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar5 = (int)*(char *)(DAT_1039d74c + 0x2826);
  if (iVar5 == -1) {
    *(undefined1 *)(DAT_1039d74c + 0x2826) = 0;
    iVar5 = *(int *)(iVar1 + 0x138);
    iVar8 = *(int *)(iVar4 + 0x282c);
    if (iVar8 <= iVar5) {
      if (iVar8 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar8 / 2 + iVar8;
      }
      if (iVar8 <= iVar5 + 1) {
        iVar8 = iVar5 + 1;
      }
      uVar6 = FUN_100fa1fa(iVar8 * 0xc);
      if (*(int *)(iVar4 + 0x2830) != 0) {
        local_20 = uVar6;
        FUN_1025b2d0(uVar6,*(int *)(iVar4 + 0x2830),*(int *)(iVar4 + 0x2828) * 0xc);
        FUN_100fa2cb(*(undefined4 *)(iVar4 + 0x2830));
        uVar6 = local_20;
      }
      *(undefined4 *)(iVar4 + 0x2830) = uVar6;
      *(int *)(iVar4 + 0x282c) = iVar8;
    }
    iVar8 = *(int *)(iVar4 + 0x2828);
    if (iVar8 <= iVar5) {
      iVar9 = (iVar5 - iVar8) + 1;
      iVar8 = iVar8 * 0xc + 8;
      do {
        iVar2 = *(int *)(iVar4 + 0x2830);
        *(undefined4 *)(iVar2 + -4 + iVar8) = 0xff0000;
        *(undefined4 *)(iVar2 + -8 + iVar8) = 0;
        *(undefined4 *)(iVar2 + iVar8) = 0xffffffff;
        iVar8 = iVar8 + 0xc;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(int *)(iVar4 + 0x2828) = iVar5 + 1;
    iVar5 = *(int *)(iVar1 + 0x138);
    if (-1 < iVar5) {
      iVar9 = 0;
      iVar8 = 0;
      do {
        pcVar10 = param_1;
        if (iVar8 < iVar5) {
          pcVar10 = *(char **)(*(int *)(iVar1 + 0x140) + iVar8 * 4);
        }
        *(char **)(*(int *)(iVar4 + 0x2830) + iVar9) = pcVar10;
        iVar5 = *(int *)(iVar1 + 0x138);
        iVar9 = iVar9 + 0xc;
        bVar3 = iVar8 < iVar5;
        iVar8 = iVar8 + 1;
      } while (bVar3);
    }
    goto LAB_1011308f;
  }
  if (*(int *)(iVar1 + 0x138) != iVar5) goto LAB_1011308f;
  iVar1 = *(int *)(DAT_1039d74c + 0x2830) + iVar5 * 0xc;
  if (*(int *)(iVar1 + 8) != -1) goto LAB_10113082;
  local_18 = 0;
  local_1c = 0;
  switch(param_2) {
  case 4:
    pcVar10 = "%d";
    param_1 = param_3;
    break;
  default:
    goto switchD_10112ed9_caseD_5;
  case 0xb:
    if (param_4 == 0) {
      sVar7 = _strlen(param_3);
    }
    else {
      sVar7 = param_4 - (int)param_3;
    }
    FUN_100fa588(&local_18,&local_1c,&DAT_10334092,sVar7,param_3);
    goto switchD_10112ed9_caseD_5;
  case 0xc:
    pcVar10 = "(void*)0x%p";
    param_1 = param_3;
    break;
  case 0xd:
    pcVar10 = "0x%08X [override]";
  }
  FUN_100fa588(&local_18,&local_1c,pcVar10,param_1);
switchD_10112ed9_caseD_5:
  *(uint *)(iVar1 + 8) = *(int *)(iVar4 + 0x2834) + -1 + (uint)(*(int *)(iVar4 + 0x2834) == 0);
  FUN_100fb8e0(local_18,local_1c + 1);
LAB_10113082:
  *(undefined1 *)(iVar1 + 5) = 1;
  if (*(char *)(iVar1 + 6) == -1) {
    *(char *)(iVar1 + 6) = (char)param_2;
  }
LAB_1011308f:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

