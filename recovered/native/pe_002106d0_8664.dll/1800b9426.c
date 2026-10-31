/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b9426 */

void FUN_1800b9426(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_98 [40];
  int *local_70;
  undefined8 local_68;
  int local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 4) != 0) {
    piVar9 = param_2;
    if (3 < *(ulonglong *)(param_2 + 6)) {
      piVar9 = *(int **)param_2;
    }
    piVar6 = piVar9 + *(longlong *)(param_2 + 4);
    lVar7 = 0;
    local_70 = param_2;
    local_68 = param_3;
    do {
      local_5c = *piVar9;
      lVar5 = *param_1;
      lVar8 = lVar7 * 0x60;
      uVar3 = FUN_1800611df(&local_5c);
      lVar7 = *(longlong *)(lVar5 + 8 + lVar8);
      lVar1 = *(longlong *)(lVar5 + 0x18 + lVar8);
      lVar4 = (uVar3 & *(ulonglong *)(lVar5 + 0x30 + lVar8)) * 0x10;
      lVar5 = *(longlong *)(lVar1 + 8 + lVar4);
      if (lVar5 == lVar7) {
LAB_1800b94db:
        lVar5 = 0;
      }
      else if (local_5c != *(int *)(lVar5 + 0x10)) {
        do {
          if (lVar5 == *(longlong *)(lVar1 + lVar4)) goto LAB_1800b94db;
          lVar5 = *(longlong *)(lVar5 + 8);
        } while (local_5c != *(int *)(lVar5 + 0x10));
      }
      if (lVar5 != 0) {
        lVar7 = lVar5;
      }
      if (lVar7 == *(longlong *)(*param_1 + 8 + lVar8)) {
        lVar7 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
        FUN_1800605b0(param_1);
        FUN_1800bb75a(lVar8 + *param_1,local_58,&local_5c);
        *(longlong *)(local_58[0] + 0x18) = lVar7;
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0x18);
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar6);
    local_58[0] = *(longlong *)(local_70 + 4);
    FUN_1800bb968(param_1 + 3,local_58,local_68);
    lVar5 = *param_1;
    lVar7 = lVar7 * 0x60;
    local_58[0] = (param_1[4] - param_1[3] >> 3) * -0x3333333333333333 + -1;
    plVar2 = *(longlong **)(lVar5 + 0x50 + lVar7);
    if (plVar2 == *(longlong **)(lVar5 + 0x58 + lVar7)) {
      FUN_180052bde(lVar5 + lVar7 + 0x48,plVar2,local_58);
    }
    else {
      *plVar2 = local_58[0];
      plVar2 = (longlong *)(lVar5 + lVar7 + 0x50);
      *plVar2 = *plVar2 + 8;
    }
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

