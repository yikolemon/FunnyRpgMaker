/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404934f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404934f4(undefined8 param_1,short *param_2)

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
  
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_c8;
  FUN_1404b9e70(param_1,0,0x1ca);
  uVar8 = 0;
  plVar7 = local_a0;
  uVar6 = uVar8;
  uVar9 = uVar8;
  do {
    while( true ) {
      do {
        uVar5 = uVar6;
        if (3 < uVar5) goto LAB_1404936c8;
        if ((int)uVar9 == 2) {
          lVar3 = -1;
          do {
            lVar3 = lVar3 + 1;
          } while (param_2[lVar3] != 0);
        }
        else {
          lVar3 = FUN_1404abba0(param_2,L"l1-1-0");
        }
        plVar7[-1] = (longlong)param_2;
        uVar6 = uVar5 + 1;
        *plVar7 = lVar3;
        sVar1 = param_2[lVar3];
        param_2 = param_2 + lVar3 + 1;
        *(int *)(plVar7 + 1) = (int)uVar9;
        plVar7 = plVar7 + 3;
        if (sVar1 == 0) goto LAB_1404935a6;
        uVar9 = uVar8;
      } while (sVar1 == 0x2d);
      if (sVar1 != 0x2e) break;
      uVar9 = 2;
    }
  } while (sVar1 == 0x5f);
LAB_1404935a6:
  if (uVar5 == 0) {
    FUN_14049329c(param_1,local_a8);
  }
  else {
    if (uVar5 == 1) {
      cVar2 = FUN_14049329c(param_1,local_a8);
      if (((cVar2 == '\0') || (cVar2 = FUN_140493328(param_1,local_90), cVar2 != '\0')) ||
         (cVar2 = FUN_1404933b8(param_1,local_90), cVar2 != '\0')) goto LAB_1404936c8;
      puVar4 = local_90;
    }
    else if (uVar5 == 2) {
      cVar2 = FUN_14049329c(param_1,local_a8);
      if ((cVar2 == '\0') ||
         (((cVar2 = FUN_140493328(param_1,local_90), cVar2 != '\0' &&
           ((cVar2 = FUN_1404933b8(param_1,local_78), cVar2 != '\0' ||
            (cVar2 = FUN_1404934ac(param_1,local_78), cVar2 != '\0')))) ||
          (cVar2 = FUN_1404933b8(param_1,local_90), cVar2 == '\0')))) goto LAB_1404936c8;
      puVar4 = local_78;
    }
    else {
      if (((uVar5 != 3) || (cVar2 = FUN_14049329c(param_1,local_a8), cVar2 == '\0')) ||
         ((cVar2 = FUN_140493328(param_1,local_90), cVar2 == '\0' ||
          (cVar2 = FUN_1404933b8(param_1,local_78), cVar2 == '\0')))) goto LAB_1404936c8;
      puVar4 = local_60;
    }
    FUN_1404934ac(param_1,puVar4);
  }
LAB_1404936c8:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_48 ^ (ulonglong)auStack_c8);
}

