/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008ec2f */

void FUN_14008ec2f(longlong param_1)

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
  
  lVar5 = DAT_140f2a910;
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  cVar6 = *(char *)(DAT_140f2a910 + 0x82);
  if (cVar6 == *(char *)(DAT_140f2a910 + 0x139)) {
    *(undefined4 *)(DAT_140f2a910 + 0x1fe0) = *(undefined4 *)(param_1 + 0xc4);
    lVar4 = *(longlong *)(param_1 + 0x428);
    local_48 = lVar4;
    if (cVar6 == '\0') {
      fVar1 = *(float *)(lVar5 + 0x1694);
      if (0.0 <= fVar1) {
        fVar2 = *(float *)(lVar4 + 0x70);
        fVar8 = (float)FUN_14009376e();
        fVar3 = *(float *)(lVar5 + 0x1698);
        if (((fVar3 < fVar8) && (0.0 <= fVar3)) && (fVar1 < fVar2)) goto LAB_14008ec87;
      }
    }
    else {
LAB_14008ec87:
      cVar6 = FUN_140095b6d(0xe5);
      if (cVar6 != '\0') {
        FUN_140095e05("_IMWINDOW",&local_48,8,0);
        FUN_140095dd0();
        if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
          FUN_14009b16c(lVar4);
          return;
        }
        goto LAB_14008ed88;
      }
    }
  }
  else if (((cVar6 != '\0') && (DAT_1401c86c8 <= *(float *)(DAT_140f2a910 + 0x269c))) &&
          (*(int *)(DAT_140f2a910 + 0x167c) != 0)) {
    pcVar7 = "*Missing Text*";
    if (*(char **)(DAT_140f2a910 + 0x2a30) != (char *)0x0) {
      pcVar7 = *(char **)(DAT_140f2a910 + 0x2a30);
    }
    FUN_140080f0f("%s",pcVar7);
  }
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
    return;
  }
LAB_14008ed88:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_68);
}

