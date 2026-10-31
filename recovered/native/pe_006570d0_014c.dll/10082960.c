/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10082960 */

undefined4 __fastcall FUN_10082960(int param_1)

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
LAB_10082ada:
      iVar2 = FUN_10082c38();
      if ((iVar2 == 0x65) || (iVar2 == 0x45)) goto LAB_100829c6;
      if (iVar2 != 0x2e) goto LAB_10082b52;
      goto LAB_10082afb;
    }
    if (iVar2 == 0x2d) {
      FUN_10003d9a(0x2d);
    }
    iVar2 = FUN_10082c38();
    if (iVar2 - 0x31U < 9) {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar6 = 6;
      goto LAB_1008298c;
    }
    if (iVar2 == 0x30) {
      FUN_10003d9a((int)*(char *)(param_1 + 0xc));
      iVar6 = 6;
      goto LAB_10082ada;
    }
    *(char **)(param_1 + 0x44) = "invalid number; expected digit after \'-\'";
LAB_10082c10:
    uVar4 = 0xe;
    goto LAB_10082c15;
  }
LAB_1008298c:
  cVar1 = (char)iVar2;
  while( true ) {
    FUN_10003d9a((int)cVar1);
    iVar2 = FUN_10082c38();
    if (9 < iVar2 - 0x30U) break;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (iVar2 == 0x2e) {
LAB_10082afb:
    FUN_10003d9a((int)*(char *)(param_1 + 0x60));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x3c) + -1;
    iVar2 = FUN_10082c38();
    if (9 < iVar2 - 0x30U) {
      *(char **)(param_1 + 0x44) = "invalid number; expected digit after \'.\'";
      goto LAB_10082c10;
    }
    do {
      FUN_10003d9a((int)*(char *)(param_1 + 0xc));
      iVar2 = FUN_10082c38();
    } while (iVar2 - 0x30U < 10);
    if ((iVar2 == 0x65) || (iVar2 == 0x45)) goto LAB_100829c6;
LAB_10082a21:
    FUN_1004cf0a();
    local_14 = 0;
    puVar3 = (undefined4 *)FUN_10268ffd();
    *puVar3 = 0;
  }
  else {
    if ((iVar2 == 0x45) || (iVar2 == 0x65)) {
LAB_100829c6:
      FUN_10003d9a((int)*(char *)(param_1 + 0xc));
      iVar2 = FUN_10082c38();
      if (9 < iVar2 - 0x30U) {
        if ((iVar2 == 0x2d) || (iVar2 == 0x2b)) {
          FUN_10003d9a((int)*(char *)(param_1 + 0xc));
          iVar2 = FUN_10082c38();
          if (iVar2 - 0x30U < 10) goto LAB_100829e8;
          *(char **)(param_1 + 0x44) = "invalid number; expected digit after exponent sign";
        }
        else {
          *(char **)(param_1 + 0x44) =
               "invalid number; expected \'+\', \'-\', or digit after exponent";
        }
        goto LAB_10082c10;
      }
LAB_100829e8:
      FUN_10003d9a((int)*(char *)(param_1 + 0xc));
      iVar2 = FUN_10082c38();
      while (iVar2 - 0x30U < 10) {
        FUN_10003d9a((int)*(char *)(param_1 + 0xc));
        iVar2 = FUN_10082c38();
      }
      goto LAB_10082a21;
    }
LAB_10082b52:
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
        goto LAB_10082c15;
      }
    }
    else {
      uVar8 = FUN_10270b06(iVar2,&local_14,10);
      piVar5 = (int *)FUN_10268ffd();
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x48) = uVar8;
        uVar4 = 6;
        goto LAB_10082c15;
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
LAB_10082c15:
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

