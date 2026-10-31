/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db254 */

void FUN_1800db254(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [56];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar3 = (longlong)param_2 - (longlong)param_1;
  if (0x100 < (longlong)uVar3) {
    plVar4 = param_2;
    do {
      if ((longlong)param_3 < 1) {
        FUN_1800db3d0(param_1,plVar4);
        lVar5 = (longlong)plVar4 - (longlong)param_1;
        do {
          FUN_1800db4ee(param_1,plVar4);
          plVar4 = plVar4 + -1;
          lVar5 = lVar5 + -8;
        } while (8 < lVar5);
        goto LAB_1800db39e;
      }
      FUN_1800db559(param_1,param_1 + (uVar3 >> 4),plVar4 + -1);
      FUN_1800db6ae(&local_50,param_1,param_1 + (uVar3 >> 4),plVar4);
      plVar7 = local_48;
      param_2 = local_50;
      param_3 = (param_3 >> 2) + (param_3 >> 1);
      if ((longlong)local_50 - (longlong)param_1 < (longlong)plVar4 - (longlong)local_48) {
        FUN_1800db254(param_1,local_50,param_3);
        param_1 = plVar7;
        param_2 = plVar4;
      }
      else {
        FUN_1800db254(local_48,plVar4,param_3);
      }
      uVar3 = (longlong)param_2 - (longlong)param_1;
      plVar4 = param_2;
    } while (0x100 < (longlong)uVar3);
  }
  if ((param_1 != param_2) && (plVar4 = param_1 + 1, plVar4 != param_2)) {
    lVar5 = 8;
    do {
      lVar1 = *plVar4;
      lVar6 = lVar5;
      do {
        lVar2 = *(longlong *)((longlong)param_1 + lVar6 + -8);
        if (lVar2 <= lVar1) {
          plVar7 = (longlong *)(lVar6 + (longlong)param_1);
          break;
        }
        *(longlong *)((longlong)param_1 + lVar6) = lVar2;
        lVar6 = lVar6 + -8;
        plVar7 = param_1;
      } while (lVar6 != 0);
      *plVar7 = lVar1;
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (plVar4 != param_2);
  }
LAB_1800db39e:
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
  }
  return;
}

