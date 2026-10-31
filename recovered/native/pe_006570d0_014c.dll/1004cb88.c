/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004cb88 */

undefined4 __fastcall FUN_1004cb88(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  undefined8 uVar8;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  FUN_1004d100();
  iVar2 = *(int *)(param_1 + 0xc);
  iVar6 = 5;
  if (8 < iVar2 - 0x31U) {
    if (iVar2 == 0x30) {
      FUN_10003d9a(0x30);
      iVar6 = 5;
LAB_1004cd02:
      iVar2 = FUN_1004ce60();
      if ((iVar2 == 0x65) || (iVar2 == 0x45)) goto LAB_1004cbee;
      if (iVar2 != 0x2e) goto LAB_1004cd7a;
      goto LAB_1004cd23;
    }
    if (iVar2 == 0x2d) {
      FUN_10003d9a(0x2d);
    }
    iVar2 = FUN_1004ce60();
    if (iVar2 - 0x31U < 9) {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar6 = 6;
      goto LAB_1004cbb4;
    }
    if (iVar2 == 0x30) {
      FUN_10003d9a((int)*(char *)(param_1 + 0xc));
      iVar6 = 6;
      goto LAB_1004cd02;
    }
    *(char **)(param_1 + 0x44) = "invalid number; expected digit after \'-\'";
LAB_1004ce38:
    uVar4 = 0xe;
    goto LAB_1004ce3d;
  }
LAB_1004cbb4:
  cVar1 = (char)iVar2;
  while( true ) {
    FUN_10003d9a((int)cVar1);
    iVar2 = FUN_1004ce60();
    if (9 < iVar2 - 0x30U) break;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (iVar2 == 0x2e) {
LAB_1004cd23:
    FUN_10003d9a((int)*(char *)(param_1 + 0x60));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x3c) + -1;
    iVar2 = FUN_1004ce60();
    if (9 < iVar2 - 0x30U) {
      *(char **)(param_1 + 0x44) = "invalid number; expected digit after \'.\'";
      goto LAB_1004ce38;
    }
    do {
      FUN_10003d9a((int)*(char *)(param_1 + 0xc));
      iVar2 = FUN_1004ce60();
    } while (iVar2 - 0x30U < 10);
    if ((iVar2 == 0x65) || (iVar2 == 0x45)) goto LAB_1004cbee;
LAB_1004cc49:
    FUN_1004cf0a();
    local_14 = 0;
    puVar3 = (undefined4 *)FUN_10268ffd();
    *puVar3 = 0;
  }
  else {
    if ((iVar2 == 0x45) || (iVar2 == 0x65)) {
LAB_1004cbee:
      FUN_10003d9a((int)*(char *)(param_1 + 0xc));
      iVar2 = FUN_1004ce60();
      if (9 < iVar2 - 0x30U) {
        if ((iVar2 == 0x2d) || (iVar2 == 0x2b)) {
          FUN_10003d9a((int)*(char *)(param_1 + 0xc));
          iVar2 = FUN_1004ce60();
          if (iVar2 - 0x30U < 10) goto LAB_1004cc10;
          *(char **)(param_1 + 0x44) = "invalid number; expected digit after exponent sign";
        }
        else {
          *(char **)(param_1 + 0x44) =
               "invalid number; expected \'+\', \'-\', or digit after exponent";
        }
        goto LAB_1004ce38;
      }
LAB_1004cc10:
      FUN_10003d9a((int)*(char *)(param_1 + 0xc));
      iVar2 = FUN_1004ce60();
      while (iVar2 - 0x30U < 10) {
        FUN_10003d9a((int)*(char *)(param_1 + 0xc));
        iVar2 = FUN_1004ce60();
      }
      goto LAB_1004cc49;
    }
LAB_1004cd7a:
    FUN_1004cf0a();
    local_14 = 0;
    puVar3 = (undefined4 *)FUN_10268ffd();
    *puVar3 = 0;
    if (*(uint *)(param_1 + 0x40) < 0x10) {
      iVar2 = param_1 + 0x2c;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    if (iVar6 == 5) {
      uVar8 = FUN_10270b52(iVar2,&local_14,10);
      piVar5 = (int *)FUN_10268ffd();
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x50) = uVar8;
        uVar4 = 5;
        goto LAB_1004ce3d;
      }
    }
    else {
      uVar8 = FUN_10270b06(iVar2,&local_14,10);
      piVar5 = (int *)FUN_10268ffd();
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x48) = uVar8;
        uVar4 = 6;
        goto LAB_1004ce3d;
      }
    }
  }
  if (*(uint *)(param_1 + 0x40) < 0x10) {
    iVar2 = param_1 + 0x2c;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c);
  }
  fVar7 = (float10)FUN_1027093b(iVar2,&local_14);
  *(double *)(param_1 + 0x58) = (double)fVar7;
  uVar4 = 7;
LAB_1004ce3d:
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

