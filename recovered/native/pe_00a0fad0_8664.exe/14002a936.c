/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002a936 */

longlong * FUN_14002a936(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  FUN_14001010a();
  plVar4 = (longlong *)*param_2;
  plVar7 = (longlong *)param_2[2];
  if (((*(char *)((longlong)plVar4 + 0x19) == '\0') &&
      (plVar7 = plVar4, *(char *)(param_2[2] + 0x19) == '\0')) &&
     (plVar7 = (longlong *)local_30[2], local_30 != param_2)) {
    plVar4[1] = (longlong)local_30;
    *local_30 = *param_2;
    plVar4 = local_30;
    if (local_30 != (longlong *)param_2[2]) {
      plVar4 = (longlong *)local_30[1];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar7[1] = (longlong)plVar4;
      }
      *plVar4 = (longlong)plVar7;
      lVar2 = param_2[2];
      local_30[2] = lVar2;
      *(longlong **)(lVar2 + 8) = local_30;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = local_30;
    }
    else {
      puVar6 = (undefined8 *)param_2[1];
      if ((longlong *)*puVar6 == param_2) {
        *puVar6 = local_30;
      }
      else {
        puVar6[2] = local_30;
      }
    }
    local_30[1] = param_2[1];
    lVar2 = local_30[3];
    *(char *)(local_30 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar4 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7[1] = (longlong)plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar7;
    }
    else if ((longlong *)*plVar4 == param_2) {
      *plVar4 = (longlong)plVar7;
    }
    else {
      plVar4[2] = (longlong)plVar7;
    }
    puVar6 = (undefined8 *)*param_1;
    if ((longlong *)*puVar6 == param_2) {
      cVar1 = *(char *)((longlong)plVar7 + 0x19);
      plVar5 = plVar4;
      plVar3 = plVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
      }
      *puVar6 = plVar5;
      puVar6 = (undefined8 *)*param_1;
    }
    if ((longlong *)puVar6[2] == param_2) {
      cVar1 = *(char *)((longlong)plVar7 + 0x19);
      plVar5 = plVar4;
      plVar3 = plVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(plVar3[2] + 0x19);
        plVar5 = plVar3;
        plVar3 = (longlong *)plVar3[2];
      }
      puVar6[2] = plVar5;
    }
  }
  if ((char)param_2[3] != '\x01') {
LAB_14002ab90:
    if (param_1[1] != 0) {
      param_1[1] = param_1[1] + -1;
    }
    if (DAT_1401c9640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
      FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
    }
    return param_2;
  }
LAB_14002aa76:
  plVar5 = plVar4;
  if ((plVar7 == *(longlong **)(*param_1 + 8)) || ((char)plVar7[3] != '\x01')) goto LAB_14002ab8c;
  plVar4 = (longlong *)*plVar5;
  if (plVar7 == plVar4) {
    plVar4 = (longlong *)plVar5[2];
    if ((char)plVar4[3] == '\0') {
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 0;
      FUN_14000fe96(param_1,plVar5);
      plVar4 = (longlong *)plVar5[2];
    }
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      if (*(char *)(*plVar4 + 0x18) == '\x01') {
        if (*(char *)(plVar4[2] + 0x18) == '\x01') goto LAB_14002ab10;
      }
      else if (*(char *)(plVar4[2] + 0x18) == '\x01') {
        *(undefined1 *)(*plVar4 + 0x18) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        FUN_14000feda(param_1);
        plVar4 = (longlong *)plVar5[2];
      }
      *(char *)(plVar4 + 3) = (char)plVar5[3];
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(plVar4[2] + 0x18) = 1;
      FUN_14000fe96(param_1,plVar5);
      goto LAB_14002ab8c;
    }
  }
  else {
    if ((char)plVar4[3] == '\0') {
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 0;
      FUN_14000feda(param_1,plVar5);
      plVar4 = (longlong *)*plVar5;
    }
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      if (*(char *)(plVar4[2] + 0x18) == '\x01') {
        if (*(char *)(*plVar4 + 0x18) == '\x01') {
LAB_14002ab10:
          *(undefined1 *)(plVar4 + 3) = 0;
          goto LAB_14002ab14;
        }
      }
      else if (*(char *)(*plVar4 + 0x18) == '\x01') {
        *(undefined1 *)(plVar4[2] + 0x18) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        FUN_14000fe96(param_1);
        plVar4 = (longlong *)*plVar5;
      }
      *(char *)(plVar4 + 3) = (char)plVar5[3];
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(*plVar4 + 0x18) = 1;
      FUN_14000feda(param_1,plVar5);
LAB_14002ab8c:
      *(undefined1 *)(plVar7 + 3) = 1;
      goto LAB_14002ab90;
    }
  }
LAB_14002ab14:
  plVar4 = (longlong *)plVar5[1];
  plVar7 = plVar5;
  goto LAB_14002aa76;
}

