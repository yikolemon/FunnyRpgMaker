/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002947c */

undefined4 * FUN_1002947c(undefined4 *param_1,int *param_2,double param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uStack_5c;
  int *piStack_54;
  uint local_50;
  uint local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined3 uStack_27;
  undefined4 local_24;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_10268ff0(param_3);
  uVar5 = (uint)(iVar1 != 0);
  uStack_5c = (uint)((ulonglong)param_3 >> 0x20);
  if (0x7fefffff < (uStack_5c & 0x7fffffff)) {
    local_40 = 0x8000;
    uStack_3c = 0x20;
    uStack_38 = 0;
    uStack_34 = 0xffffffff;
    FUN_10028621(param_1,param_2,NAN(param_3),0x8000,0x20,0,0xffffffff,uVar5);
    goto LAB_100295c2;
  }
  FUN_1002984f(&local_50,param_3);
  uVar14 = CONCAT44(local_4c,local_50);
  if (local_4c == 0) {
    uVar2 = 0x1f;
    if ((local_50 | 1) != 0) {
      for (; (local_50 | 1) >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    uVar2 = uVar2 ^ 0x1f | 0x20;
  }
  else {
    uVar2 = 0x1f;
    if (local_4c != 0) {
      for (; local_4c >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    uVar2 = uVar2 ^ 0x1f;
  }
  uVar2 = (uint)(byte)(&DAT_10290499)[uVar2 ^ 0x3f];
  iVar11 = uVar2 - (local_4c < *(uint *)(&DAT_102904e4 + uVar2 * 8) ||
                   local_4c - *(uint *)(&DAT_102904e4 + uVar2 * 8) <
                   (uint)(local_50 < *(uint *)(&DAT_102904e0 + uVar2 * 8)));
  if (iVar11 + local_48 + 3U < 0x14) {
    local_30 = 0x8000;
    local_2c = 0x20;
    local_2b = 0;
    uStack_27 = 0;
    local_24 = 0xffffffff;
    FUN_10029ebc(param_1,param_2,&local_50,iVar11,0x2e,&local_30,uVar5,0);
    goto LAB_100295c2;
  }
  iVar13 = iVar11 + local_48;
  uVar3 = (local_48 + iVar11) - 1;
  uVar2 = 1 - iVar13;
  if (0 < iVar13) {
    uVar2 = uVar3;
  }
  iVar4 = (uint)(iVar11 != 1) + uVar5 + iVar11;
  iVar12 = (uint)(99 < (int)uVar2) + iVar4 + 4;
  iVar7 = param_2[1];
  uVar5 = iVar4 + (uint)(99 < (int)uVar2) + iVar7 + 4;
  uVar9 = param_2[2];
  if (uVar9 < uVar5) {
    (*(code *)param_2[3])(param_2,uVar5);
    iVar7 = param_2[1];
    uVar9 = param_2[2];
    uVar5 = iVar7 + iVar12;
    if (uVar5 <= uVar9) goto LAB_1002964f;
LAB_100296a0:
    (*(code *)param_2[3])(param_2,uVar5);
  }
  else {
LAB_1002964f:
    param_2[1] = uVar5;
    if (*param_2 != 0) {
      pcVar10 = (char *)(*param_2 + iVar7);
      if (iVar1 != 0) {
        *pcVar10 = '-';
        pcVar10 = pcVar10 + 1;
      }
      if (iVar11 == 1) {
        cVar6 = (char)local_50 + '0';
        pcVar8 = pcVar10;
      }
      else {
        FUN_100255fd(pcVar10,local_50,local_4c,iVar11 + 1);
        cVar6 = pcVar10[1];
        pcVar10[1] = '.';
        pcVar8 = pcVar10 + iVar11;
      }
      *pcVar10 = cVar6;
      *(ushort *)(pcVar8 + 1) = (ushort)(iVar13 < 1) * 0x200 + 0x2b65;
      if ((int)uVar2 < 100) {
        pcVar8 = pcVar8 + 3;
      }
      else {
        pcVar8[3] = (char)(uVar2 / 100) + '0';
        pcVar8 = pcVar8 + 4;
        uVar2 = uVar2 % 100;
      }
      *(undefined2 *)pcVar8 = *(undefined2 *)(&DAT_102903d0 + uVar2 * 2);
      FUN_10024a28(param_1,pcVar8 + 2,param_2);
      goto LAB_100295c2;
    }
    uVar5 = uVar5 + iVar12;
    if (uVar9 < uVar5) goto LAB_100296a0;
  }
  if (iVar1 != 0) {
    iVar1 = param_2[1];
    uVar5 = iVar1 + 1;
    if ((uint)param_2[2] < uVar5) {
      (*(code *)param_2[3])(param_2,uVar5);
      iVar1 = param_2[1];
      uVar5 = iVar1 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)(*param_2 + iVar1) = 0x2d;
  }
  if (iVar11 == 1) {
    FUN_100255fd(&local_30,local_50,local_4c,1);
    iVar1 = (int)&local_30 + 1;
  }
  else {
    iVar1 = (int)&local_30 + iVar11 + 1;
    iVar13 = iVar1;
    if (2 < iVar11) {
      uVar5 = (iVar11 - 1U >> 1) + 1;
      iVar7 = iVar1;
      do {
        iVar4 = (int)uVar14;
        uVar14 = __aulldiv(uVar14,100,0);
        iVar13 = iVar7 + -2;
        *(undefined2 *)(iVar7 + -2) =
             *(undefined2 *)(&DAT_102903d0 + ((int)uVar14 * -100 + iVar4) * 2);
        uVar5 = uVar5 - 1;
        iVar7 = iVar13;
      } while (1 < uVar5);
    }
    uVar15 = uVar14;
    if ((iVar11 - 1U & 1) != 0) {
      uVar15 = __aulldiv(uVar14,10,0);
      *(byte *)(iVar13 + -1) = (char)uVar15 * -10 + (char)uVar14 | 0x30;
      iVar13 = iVar13 + -1;
    }
    *(undefined1 *)(iVar13 + -1) = 0x2e;
    FUN_100255fd(iVar13 + -2,uVar15,1);
  }
  FUN_100253ad(&piStack_54,&local_30,iVar1,param_2);
  iVar1 = piStack_54[1];
  uVar5 = iVar1 + 1;
  if ((uint)piStack_54[2] < uVar5) {
    (*(code *)piStack_54[3])(piStack_54,uVar5);
    iVar1 = piStack_54[1];
    uVar5 = iVar1 + 1;
  }
  piStack_54[1] = uVar5;
  *(undefined1 *)(*piStack_54 + iVar1) = 0x65;
  FUN_10028c00(&local_30,uVar3,piStack_54);
  *param_1 = local_30;
LAB_100295c2:
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

