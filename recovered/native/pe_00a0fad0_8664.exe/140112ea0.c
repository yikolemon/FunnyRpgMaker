/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140112ea0 */

void FUN_140112ea0(undefined8 param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_c8;
  FUN_1401366a0(param_1,0,0x1ca);
  uVar8 = 0;
  plVar7 = local_a0;
  uVar6 = uVar8;
  uVar9 = uVar8;
  do {
    while( true ) {
      do {
        uVar5 = uVar6;
        if (3 < uVar5) goto LAB_140113074;
        if ((int)uVar9 == 2) {
          lVar3 = -1;
          do {
            lVar3 = lVar3 + 1;
          } while (param_2[lVar3] != 0);
        }
        else {
          lVar3 = FUN_140127730(param_2,&DAT_140177f48);
        }
        plVar7[-1] = (longlong)param_2;
        uVar6 = uVar5 + 1;
        *plVar7 = lVar3;
        sVar1 = param_2[lVar3];
        param_2 = param_2 + lVar3 + 1;
        *(int *)(plVar7 + 1) = (int)uVar9;
        plVar7 = plVar7 + 3;
        if (sVar1 == 0) goto LAB_140112f52;
        uVar9 = uVar8;
      } while (sVar1 == 0x2d);
      if (sVar1 != 0x2e) break;
      uVar9 = 2;
    }
  } while (sVar1 == 0x5f);
LAB_140112f52:
  if (uVar5 == 0) {
    FUN_140112c48(param_1,local_a8);
  }
  else {
    if (uVar5 == 1) {
      cVar2 = FUN_140112c48(param_1,local_a8);
      if (((cVar2 == '\0') || (cVar2 = FUN_140112cd4(param_1,local_90), cVar2 != '\0')) ||
         (cVar2 = FUN_140112d64(param_1,local_90), cVar2 != '\0')) goto LAB_140113074;
      puVar4 = local_90;
    }
    else if (uVar5 == 2) {
      cVar2 = FUN_140112c48(param_1,local_a8);
      if ((cVar2 == '\0') ||
         (((cVar2 = FUN_140112cd4(param_1,local_90), cVar2 != '\0' &&
           ((cVar2 = FUN_140112d64(param_1,local_78), cVar2 != '\0' ||
            (cVar2 = FUN_140112e58(param_1,local_78), cVar2 != '\0')))) ||
          (cVar2 = FUN_140112d64(param_1,local_90), cVar2 == '\0')))) goto LAB_140113074;
      puVar4 = local_78;
    }
    else {
      if (((uVar5 != 3) || (cVar2 = FUN_140112c48(param_1,local_a8), cVar2 == '\0')) ||
         ((cVar2 = FUN_140112cd4(param_1,local_90), cVar2 == '\0' ||
          (cVar2 = FUN_140112d64(param_1,local_78), cVar2 == '\0')))) goto LAB_140113074;
      puVar4 = local_60;
    }
    FUN_140112e58(param_1,puVar4);
  }
LAB_140113074:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_c8);
}

