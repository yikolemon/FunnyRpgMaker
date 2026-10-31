/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180057938 */

void FUN_180057938(undefined8 *param_1,undefined1 *param_2,char param_3,undefined4 param_4,
                  int param_5,uint param_6)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  int local_68;
  uint local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  uVar9 = (ulonglong)param_6;
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  switch(*param_2) {
  case 0:
    plVar3 = (longlong *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 8);
    if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) break;
    pcVar4 = "null";
    goto LAB_1800579ea;
  case 1:
    plVar3 = (longlong *)*param_1;
    puVar10 = (undefined8 *)*plVar3;
    if (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0) {
      if (param_3 == '\0') {
        (*(code *)*puVar10)(plVar3,0x7b);
        local_50 = *(longlong *)**(undefined8 **)(param_2 + 8);
        if ((*(undefined8 **)(param_2 + 8))[1] != 1) {
          uVar9 = 0;
          do {
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
            FUN_180058452(param_1,local_50 + 0x20,param_4);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18036dbad,2);
            local_60 = param_6;
            local_68 = param_5;
            FUN_180057938(param_1,local_50 + 0x40,0,param_4);
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
            uVar9 = uVar9 + 1;
            FUN_180016c4c(&local_50);
          } while (uVar9 < *(longlong *)(*(longlong *)(param_2 + 8) + 8) - 1U);
        }
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        FUN_180058452(param_1,local_50 + 0x20,param_4);
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18036dbad,2);
        local_60 = param_6;
        local_68 = param_5;
        FUN_180057938(param_1,local_50 + 0x40,0,param_4);
      }
      else {
        (*(code *)puVar10[1])(plVar3,&DAT_18037c92c,2);
        param_6 = param_5 + param_6;
        uVar11 = (ulonglong)param_6;
        puVar10 = param_1 + 0x4c;
        local_58 = uVar9;
        if ((ulonglong)param_1[0x4e] < uVar11) {
          FUN_1800037ec(puVar10,param_1[0x4e] * 2,0x20);
        }
        local_50 = *(longlong *)**(undefined8 **)(param_2 + 8);
        if ((*(undefined8 **)(param_2 + 8))[1] != 1) {
          uVar9 = 0;
          do {
            puVar5 = puVar10;
            if (0xf < (ulonglong)param_1[0x4f]) {
              puVar5 = (undefined8 *)param_1[0x4c];
            }
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar11);
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
            FUN_180058452(param_1,local_50 + 0x20,param_4);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18037bcdf,3);
            local_68 = param_5;
            local_60 = param_6;
            FUN_180057938(param_1,local_50 + 0x40,1,param_4);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18038550c,2);
            uVar9 = uVar9 + 1;
            FUN_180016c4c(&local_50);
          } while (uVar9 < *(longlong *)(*(longlong *)(param_2 + 8) + 8) - 1U);
        }
        puVar5 = puVar10;
        if (0xf < (ulonglong)param_1[0x4f]) {
          puVar5 = (undefined8 *)param_1[0x4c];
        }
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar11);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        FUN_180058452(param_1,local_50 + 0x20,param_4);
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18037bcdf,3);
        local_68 = param_5;
        local_60 = param_6;
        FUN_180057938(param_1,local_50 + 0x40,1,param_4);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
        if (0xf < (ulonglong)param_1[0x4f]) {
          puVar10 = (undefined8 *)param_1[0x4c];
        }
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar10,local_58 & 0xffffffff)
        ;
      }
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x7d);
      goto switchD_18005798a_default;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)puVar10[1];
    if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) break;
    pcVar4 = "{}";
    goto LAB_18005802f;
  case 2:
    plVar1 = *(longlong **)(param_2 + 8);
    plVar3 = (longlong *)*param_1;
    puVar10 = (undefined8 *)*plVar3;
    if (*plVar1 != plVar1[1]) {
      if (param_3 == '\0') {
        (*(code *)*puVar10)(plVar3,CONCAT71((int7)((ulonglong)plVar1 >> 8),0x5b));
        plVar3 = *(longlong **)(param_2 + 8);
        for (lVar7 = *plVar3; lVar7 != plVar3[1] + -0x10; lVar7 = lVar7 + 0x10) {
          local_60 = param_6;
          local_68 = param_5;
          FUN_180057938(param_1,lVar7,0,param_4);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          plVar3 = *(longlong **)(param_2 + 8);
        }
        local_60 = param_6;
        local_68 = param_5;
        FUN_180057938(param_1,plVar3[1] + -0x10,0,param_4);
      }
      else {
        (*(code *)puVar10[1])(plVar3,&DAT_18037d594,2);
        param_6 = param_5 + param_6;
        uVar11 = (ulonglong)param_6;
        puVar10 = param_1 + 0x4c;
        local_58 = uVar9;
        if ((ulonglong)param_1[0x4e] < uVar11) {
          FUN_1800037ec(puVar10,param_1[0x4e] * 2,0x20);
        }
        lVar7 = **(longlong **)(param_2 + 8);
        if (lVar7 != (*(longlong **)(param_2 + 8))[1] + -0x10) {
          do {
            puVar5 = puVar10;
            if (0xf < (ulonglong)param_1[0x4f]) {
              puVar5 = (undefined8 *)param_1[0x4c];
            }
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar11);
            local_68 = param_5;
            local_60 = param_6;
            FUN_180057938(param_1,lVar7,1,param_4);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18038550c,2);
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != *(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10);
        }
        puVar5 = puVar10;
        if (0xf < (ulonglong)param_1[0x4f]) {
          puVar5 = (undefined8 *)param_1[0x4c];
        }
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar11);
        local_68 = param_5;
        local_60 = param_6;
        FUN_180057938(param_1,*(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10,1,param_4);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
        if (0xf < (ulonglong)param_1[0x4f]) {
          puVar10 = (undefined8 *)param_1[0x4c];
        }
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar10,local_58 & 0xffffffff)
        ;
      }
      param_1 = (undefined8 *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
      if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
        uVar6 = CONCAT71((int7)((local_48 ^ (ulonglong)auStack_88) >> 8),0x5d);
        goto LAB_18005824b;
      }
      break;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)puVar10[1];
    if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) break;
    pcVar4 = "[]";
LAB_18005802f:
    uVar6 = 2;
    goto LAB_180058289;
  case 3:
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_180058452(param_1,*(undefined8 *)(param_2 + 8),param_4);
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
    if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) break;
    uVar6 = CONCAT71((int7)((local_48 ^ (ulonglong)auStack_88) >> 8),0x22);
    goto LAB_18005824b;
  case 4:
    plVar3 = (longlong *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 8);
    if (param_2[8] != '\x01') {
      if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) break;
      pcVar4 = "false";
LAB_180058283:
      uVar6 = 5;
      goto LAB_180058289;
    }
    if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) break;
    pcVar4 = "true";
LAB_1800579ea:
    uVar6 = 4;
LAB_180058289:
                    /* WARNING: Could not recover jumptable at 0x000180058299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar3,pcVar4,uVar6);
    return;
  case 5:
    if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
      FUN_180058ca8(param_1,*(undefined8 *)(param_2 + 8));
      return;
    }
    break;
  case 6:
    if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
      FUN_180058b9e(param_1,*(undefined8 *)(param_2 + 8));
      return;
    }
    break;
  case 7:
    if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
      FUN_180058e34(param_1,*(undefined8 *)(param_2 + 8));
      return;
    }
    break;
  case 8:
    plVar3 = (longlong *)*param_1;
    if (param_3 == '\0') {
      (**(code **)(*plVar3 + 8))(plVar3,"{\"bytes\":[",10);
      puVar8 = (undefined1 *)**(undefined8 **)(param_2 + 8);
      puVar2 = (undefined1 *)(*(undefined8 **)(param_2 + 8))[1];
      if (puVar8 != puVar2) {
        while( true ) {
          if (puVar8 == puVar2 + -1) break;
          FUN_180058b04(param_1,*puVar8);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
          puVar8 = puVar8 + 1;
          puVar2 = *(undefined1 **)(*(longlong *)(param_2 + 8) + 8);
        }
        FUN_180058b04(param_1,puVar2[-1]);
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18036dba3,0xc);
      if (*(char *)(*(longlong *)(param_2 + 8) + 0x20) != '\x01') {
        plVar3 = (longlong *)*param_1;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 8);
        if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) break;
        pcVar4 = "null}";
        goto LAB_180058283;
      }
      FUN_180058b9e(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18));
    }
    else {
      (**(code **)(*plVar3 + 8))(plVar3,&DAT_18037c92c,2);
      uVar9 = (ulonglong)(param_5 + param_6);
      puVar10 = param_1 + 0x4c;
      if ((ulonglong)param_1[0x4e] < uVar9) {
        FUN_1800037ec(puVar10,param_1[0x4e] * 2,0x20);
      }
      puVar5 = puVar10;
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar5 = (undefined8 *)param_1[0x4c];
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar9);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18036ba62,10);
      puVar8 = (undefined1 *)**(undefined8 **)(param_2 + 8);
      puVar2 = (undefined1 *)(*(undefined8 **)(param_2 + 8))[1];
      if (puVar8 != puVar2) {
        puVar2 = puVar2 + -1;
        if (puVar8 != puVar2) {
          do {
            FUN_180058b04(param_1,*puVar8);
            (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18037bd63,2);
            puVar8 = puVar8 + 1;
            puVar2 = (undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 8) + 8) + -1);
          } while (puVar8 != puVar2);
        }
        FUN_180058b04(param_1,*puVar2);
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18038550b,3);
      puVar5 = puVar10;
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar5 = (undefined8 *)param_1[0x4c];
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar5,uVar9);
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_18037bcd7,0xb);
      if (*(char *)(*(longlong *)(param_2 + 8) + 0x20) == '\x01') {
        FUN_180058b9e(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18));
      }
      else {
        (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,"null",4);
      }
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
      if (0xf < (ulonglong)param_1[0x4f]) {
        puVar10 = (undefined8 *)param_1[0x4c];
      }
      (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar10,param_6);
    }
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
    if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
      uVar6 = CONCAT71((int7)((local_48 ^ (ulonglong)auStack_88) >> 8),0x7d);
LAB_18005824b:
                    /* WARNING: Could not recover jumptable at 0x00018005825b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar6);
      return;
    }
    break;
  case 9:
    plVar3 = (longlong *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 8);
    if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) break;
    pcVar4 = "<discarded>";
    uVar6 = 0xb;
    goto LAB_180058289;
  default:
switchD_18005798a_default:
    if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
}

