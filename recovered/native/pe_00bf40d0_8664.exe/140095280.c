/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140095280 */

void FUN_140095280(undefined1 (*param_1) [32],ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0 [2];
  longlong local_90 [3];
  longlong local_78 [3];
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_c8;
  FUN_1400b3c00(param_1,0,0x1ca);
  uVar8 = 0;
  plVar5 = local_a0;
  uVar7 = uVar8;
  uVar9 = uVar8;
  do {
    while( true ) {
      do {
        uVar6 = uVar7;
        if (3 < uVar6) goto LAB_140095454;
        if ((int)uVar9 == 2) {
          lVar3 = -1;
          do {
            lVar3 = lVar3 + 1;
          } while (param_2[lVar3] != 0);
        }
        else {
          lVar3 = FUN_1400a70b0(param_2,(ushort *)&DAT_14011fdb0);
        }
        plVar5[-1] = (longlong)param_2;
        uVar7 = uVar6 + 1;
        *plVar5 = lVar3;
        uVar1 = param_2[lVar3];
        param_2 = param_2 + lVar3 + 1;
        *(int *)(plVar5 + 1) = (int)uVar9;
        plVar5 = plVar5 + 3;
        if (uVar1 == 0) goto LAB_140095332;
        uVar9 = uVar8;
      } while (uVar1 == 0x2d);
      if (uVar1 != 0x2e) break;
      uVar9 = 2;
    }
  } while (uVar1 == 0x5f);
LAB_140095332:
  if (uVar6 == 0) {
    FUN_140095028((short *)param_1,&local_a8);
  }
  else {
    if (uVar6 == 1) {
      uVar7 = FUN_140095028((short *)param_1,&local_a8);
      if ((((char)uVar7 == '\0') ||
          (uVar4 = FUN_1400950b4((longlong)param_1,local_90), (char)uVar4 != '\0')) ||
         (uVar4 = FUN_140095144((longlong)param_1,local_90), (char)uVar4 != '\0'))
      goto LAB_140095454;
      plVar5 = local_90;
    }
    else if (uVar6 == 2) {
      uVar7 = FUN_140095028((short *)param_1,&local_a8);
      if (((char)uVar7 == '\0') ||
         (((uVar4 = FUN_1400950b4((longlong)param_1,local_90), (char)uVar4 != '\0' &&
           ((uVar4 = FUN_140095144((longlong)param_1,local_78), (char)uVar4 != '\0' ||
            (uVar2 = FUN_140095238((longlong)param_1,local_78), (char)uVar2 != '\0')))) ||
          (uVar4 = FUN_140095144((longlong)param_1,local_90), (char)uVar4 == '\0'))))
      goto LAB_140095454;
      plVar5 = local_78;
    }
    else {
      if (((uVar6 != 3) || (uVar7 = FUN_140095028((short *)param_1,&local_a8), (char)uVar7 == '\0'))
         || ((uVar4 = FUN_1400950b4((longlong)param_1,local_90), (char)uVar4 == '\0' ||
             (uVar4 = FUN_140095144((longlong)param_1,local_78), (char)uVar4 == '\0'))))
      goto LAB_140095454;
      plVar5 = local_60;
    }
    FUN_140095238((longlong)param_1,plVar5);
  }
LAB_140095454:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_c8);
}

