/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008020c */

void FUN_18008020c(undefined8 *param_1,undefined1 *param_2,char param_3,undefined4 param_4,
                  int param_5,int param_6)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  switch(*param_2) {
  case 0:
    plVar3 = (longlong *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 8);
    pcVar4 = "null";
    break;
  case 1:
    plVar1 = *(longlong **)(param_2 + 8);
    plVar3 = (longlong *)*param_1;
    puVar6 = (undefined8 *)*plVar3;
    if (*plVar1 == plVar1[1]) {
      UNRECOVERED_JUMPTABLE_00 = (code *)puVar6[1];
      pcVar4 = "{}";
      goto LAB_1800807e8;
    }
    if (param_3 != '\0') {
      (*(code *)puVar6[1])(plVar3,&DAT_18037c92c,2);
      uVar12 = param_5 + param_6;
      uVar11 = (ulonglong)uVar12;
      puVar6 = param_1 + 0x4c;
      if ((ulonglong)param_1[0x4e] < uVar11) {
        FUN_1800037ec(puVar6,param_1[0x4e] * 2,0x20);
      }
      lVar8 = **(longlong **)(param_2 + 8);
      if ((*(longlong **)(param_2 + 8))[1] - lVar8 != 0x30) {
        uVar10 = 0;
        do {
          puVar5 = puVar6;
          if (0xf < (ulonglong)param_1[0x4f]) {
            puVar5 = (undefined8 *)param_1[0x4c];
          }
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar11);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
          FUN_180058452(param_1,lVar8,param_4);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18037bcdf,3);
          FUN_18008020c(param_1,lVar8 + 0x20,1,param_4,param_5,uVar12);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18038550c,2);
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 0x30;
        } while (uVar10 < ((*(longlong **)(param_2 + 8))[1] - **(longlong **)(param_2 + 8) >> 4) *
                          -0x5555555555555555 - 1U);
      }
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar6 = (undefined8 *)param_1[0x4c];
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,uVar11);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
      FUN_180058452(param_1,lVar8,param_4);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18037bcdf,3);
      FUN_18008020c(param_1,lVar8 + 0x20,1,param_4,param_5,uVar12);
      goto LAB_180080968;
    }
    (*(code *)*puVar6)(plVar3,CONCAT71((int7)((ulonglong)plVar1 >> 8),0x7b));
    lVar8 = **(longlong **)(param_2 + 8);
    if ((*(longlong **)(param_2 + 8))[1] - lVar8 != 0x30) {
      uVar11 = 0;
      do {
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        FUN_180058452(param_1,lVar8,param_4);
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18036dbad,2);
        FUN_18008020c(param_1,lVar8 + 0x20,0,param_4,param_5,param_6);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x30;
      } while (uVar11 < ((*(longlong **)(param_2 + 8))[1] - **(longlong **)(param_2 + 8) >> 4) *
                        -0x5555555555555555 - 1U);
    }
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_180058452(param_1,lVar8,param_4);
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18036dbad,2);
    FUN_18008020c(param_1,lVar8 + 0x20,0,param_4,param_5,param_6);
    goto LAB_180080992;
  case 2:
    plVar1 = *(longlong **)(param_2 + 8);
    plVar3 = (longlong *)*param_1;
    puVar6 = (undefined8 *)*plVar3;
    if (*plVar1 != plVar1[1]) {
      if (param_3 == '\0') {
        (*(code *)*puVar6)(plVar3,CONCAT71((int7)((ulonglong)plVar1 >> 8),0x5b));
        plVar3 = *(longlong **)(param_2 + 8);
        for (lVar8 = *plVar3; lVar8 != plVar3[1] + -0x10; lVar8 = lVar8 + 0x10) {
          FUN_18008020c(param_1,lVar8,0,param_4,param_5,param_6);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          plVar3 = *(longlong **)(param_2 + 8);
        }
        FUN_18008020c(param_1,plVar3[1] + -0x10,0,param_4,param_5,param_6);
      }
      else {
        (*(code *)puVar6[1])(plVar3,&DAT_18037d594,2);
        uVar12 = param_5 + param_6;
        uVar11 = (ulonglong)uVar12;
        puVar6 = param_1 + 0x4c;
        if ((ulonglong)param_1[0x4e] < uVar11) {
          FUN_1800037ec(puVar6,param_1[0x4e] * 2,0x20);
        }
        lVar8 = **(longlong **)(param_2 + 8);
        if (lVar8 != (*(longlong **)(param_2 + 8))[1] + -0x10) {
          do {
            puVar5 = puVar6;
            if (0xf < (ulonglong)param_1[0x4f]) {
              puVar5 = (undefined8 *)param_1[0x4c];
            }
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar11);
            FUN_18008020c(param_1,lVar8,1,param_4,param_5,uVar12);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18038550c,2);
            lVar8 = lVar8 + 0x10;
          } while (lVar8 != *(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10);
        }
        puVar5 = puVar6;
        if (0xf < (ulonglong)param_1[0x4f]) {
          puVar5 = (undefined8 *)param_1[0x4c];
        }
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar11);
        FUN_18008020c(param_1,*(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10,1,param_4,
                      param_5,uVar12);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
        if (0xf < (ulonglong)param_1[0x4f]) {
          puVar6 = (undefined8 *)param_1[0x4c];
        }
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,param_6);
      }
      param_1 = (undefined8 *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
      uVar7 = 0x5d;
      goto LAB_18008099d;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)puVar6[1];
    pcVar4 = "[]";
LAB_1800807e8:
    uVar7 = 2;
    goto LAB_1800809c7;
  case 3:
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_180058452(param_1,*(undefined8 *)(param_2 + 8),param_4);
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
    uVar7 = 0x22;
    goto LAB_18008099d;
  case 4:
    plVar3 = (longlong *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 8);
    if (param_2[8] != '\x01') {
      pcVar4 = "false";
LAB_1800809c1:
      uVar7 = 5;
      goto LAB_1800809c7;
    }
    pcVar4 = "true";
    break;
  case 5:
    FUN_180058ca8(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 6:
    FUN_180058b9e(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 7:
    FUN_180058e34(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 8:
    plVar3 = (longlong *)*param_1;
    if (param_3 == '\0') {
      (**(code **)(*plVar3 + 8))(plVar3,"{\"bytes\":[",10);
      puVar9 = (undefined1 *)**(undefined8 **)(param_2 + 8);
      puVar2 = (undefined1 *)(*(undefined8 **)(param_2 + 8))[1];
      if (puVar9 != puVar2) {
        while( true ) {
          if (puVar9 == puVar2 + -1) break;
          FUN_180058b04(param_1,*puVar9);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          puVar9 = puVar9 + 1;
          puVar2 = *(undefined1 **)(*(longlong *)(param_2 + 8) + 8);
        }
        FUN_180058b04(param_1,puVar2[-1]);
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18036dba3,0xc);
      if (*(char *)(*(longlong *)(param_2 + 8) + 0x20) == '\x01') {
        FUN_180058b9e(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18));
        goto LAB_180080992;
      }
      plVar3 = (longlong *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 8);
      pcVar4 = "null}";
      goto LAB_1800809c1;
    }
    (**(code **)(*plVar3 + 8))(plVar3,&DAT_18037c92c,2);
    uVar11 = (ulonglong)(uint)(param_5 + param_6);
    puVar6 = param_1 + 0x4c;
    if ((ulonglong)param_1[0x4e] < uVar11) {
      FUN_1800037ec(puVar6,param_1[0x4e] * 2,0x20);
    }
    puVar5 = puVar6;
    if (0xf < (ulonglong)param_1[0x4f]) {
      puVar5 = (undefined8 *)param_1[0x4c];
    }
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar11);
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18036ba62,10);
    puVar9 = (undefined1 *)**(undefined8 **)(param_2 + 8);
    puVar2 = (undefined1 *)(*(undefined8 **)(param_2 + 8))[1];
    if (puVar9 != puVar2) {
      puVar2 = puVar2 + -1;
      if (puVar9 != puVar2) {
        do {
          FUN_180058b04(param_1,*puVar9);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18037bd63,2);
          puVar9 = puVar9 + 1;
          puVar2 = (undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 8) + 8) + -1);
        } while (puVar9 != puVar2);
      }
      FUN_180058b04(param_1,*puVar2);
    }
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18038550b,3);
    if (0xf < (ulonglong)param_1[0x4f]) {
      puVar6 = (undefined8 *)param_1[0x4c];
    }
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,uVar11);
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18037bcd7,0xb);
    if (*(char *)(*(longlong *)(param_2 + 8) + 0x20) == '\x01') {
      FUN_180058b9e(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18));
    }
    else {
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"null",4);
    }
LAB_180080968:
    puVar6 = param_1 + 0x4c;
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
    if (0xf < (ulonglong)param_1[0x4f]) {
      puVar6 = (undefined8 *)param_1[0x4c];
    }
    (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,param_6);
LAB_180080992:
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
    uVar7 = 0x7d;
LAB_18008099d:
                    /* WARNING: Could not recover jumptable at 0x0001800809ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar7);
    return;
  case 9:
    plVar3 = (longlong *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 8);
    pcVar4 = "<discarded>";
    uVar7 = 0xb;
    goto LAB_1800809c7;
  default:
    return;
  }
  uVar7 = 4;
LAB_1800809c7:
                    /* WARNING: Could not recover jumptable at 0x0001800809d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar3,pcVar4,uVar7);
  return;
}

