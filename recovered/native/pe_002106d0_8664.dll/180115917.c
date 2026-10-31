/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180115917 */

void FUN_180115917(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  lVar5 = DAT_180419160;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  cVar6 = *(char *)(DAT_180419160 + 0x82);
  if (cVar6 == *(char *)(DAT_180419160 + 0x139)) {
    *(undefined4 *)(DAT_180419160 + 0x1fe0) = *(undefined4 *)(param_1 + 0xc4);
    lVar4 = *(longlong *)(param_1 + 0x428);
    local_48 = lVar4;
    if (cVar6 == '\0') {
      fVar1 = *(float *)(lVar5 + 0x1694);
      if (0.0 <= fVar1) {
        fVar2 = *(float *)(lVar4 + 0x70);
        fVar8 = (float)FUN_18011a456();
        fVar3 = *(float *)(lVar5 + 0x1698);
        if (((fVar3 < fVar8) && (0.0 <= fVar3)) && (fVar1 < fVar2)) goto LAB_18011596f;
      }
    }
    else {
LAB_18011596f:
      cVar6 = FUN_18011c8b1(0xe5);
      if (cVar6 != '\0') {
        FUN_18011cb49("_IMWINDOW",&local_48,8,0);
        FUN_18011cb14();
        if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_68)) {
          FUN_18012223d(lVar4);
          return;
        }
        goto LAB_180115a70;
      }
    }
  }
  else if (((cVar6 != '\0') && (DAT_1802ac570 <= *(float *)(DAT_180419160 + 0x269c))) &&
          (*(int *)(DAT_180419160 + 0x167c) != 0)) {
    pcVar7 = "*Missing Text*";
    if (*(char **)(DAT_180419160 + 0x2a30) != (char *)0x0) {
      pcVar7 = *(char **)(DAT_180419160 + 0x2a30);
    }
    FUN_180107bf7("%s",pcVar7);
  }
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
LAB_180115a70:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
}

