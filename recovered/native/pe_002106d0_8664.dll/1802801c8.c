/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802801c8 */

void FUN_1802801c8(LPCWSTR param_1)

{
  undefined4 uVar1;
  short sVar2;
  longlong lVar3;
  undefined4 *puVar4;
  short *psVar5;
  int *piVar6;
  short *psVar7;
  ulonglong uVar8;
  undefined1 auStack_268 [48];
  undefined1 local_238 [528];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_268;
  lVar3 = FUN_180298c50(param_1,&DAT_18038a310);
  psVar7 = (short *)0x0;
  if (lVar3 == 0) goto LAB_180280345;
  puVar4 = (undefined4 *)FUN_18027e66c();
  uVar1 = *puVar4;
  puVar4 = (undefined4 *)FUN_18027e66c();
  *puVar4 = 0;
  psVar5 = (short *)FUN_18029886c(local_238,param_1,0x104);
  if (psVar5 == (short *)0x0) {
    piVar6 = (int *)FUN_18027e66c();
    if (*piVar6 == 0x22) {
      puVar4 = (undefined4 *)FUN_18027e66c();
      *puVar4 = uVar1;
      psVar7 = (short *)FUN_18029886c(0,param_1,0);
      psVar5 = psVar7;
      if (psVar7 != (short *)0x0) goto LAB_18028026e;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_18027e66c();
    *puVar4 = uVar1;
LAB_18028026e:
    uVar8 = 0xffffffffffffffff;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar5[lVar3] != 0);
    if (lVar3 == 3) {
LAB_18028031d:
      GetDriveTypeW(param_1);
      thunk_FUN_180290e40(psVar7);
      goto LAB_180280345;
    }
    do {
      uVar8 = uVar8 + 1;
    } while (psVar5[uVar8] != 0);
    if ((((4 < uVar8) && ((*psVar5 == 0x5c || (*psVar5 == 0x2f)))) &&
        ((psVar5[1] == 0x5c || (psVar5[1] == 0x2f)))) &&
       ((psVar5[2] != 0x5c && (psVar5[2] != 0x2f)))) {
      for (psVar5 = psVar5 + 3;
          ((sVar2 = *psVar5, sVar2 != 0 && (sVar2 != 0x5c)) && (sVar2 != 0x2f)); psVar5 = psVar5 + 1
          ) {
      }
      if (sVar2 != 0) {
        psVar5 = psVar5 + 1;
        sVar2 = *psVar5;
        if (sVar2 != 0) {
          do {
            if ((sVar2 == 0x5c) || (sVar2 == 0x2f)) break;
            psVar5 = psVar5 + 1;
            sVar2 = *psVar5;
          } while (sVar2 != 0);
          if ((sVar2 == 0) || (psVar5[1] == 0)) goto LAB_18028031d;
        }
      }
    }
  }
  thunk_FUN_180290e40(psVar7);
LAB_180280345:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_268);
}

