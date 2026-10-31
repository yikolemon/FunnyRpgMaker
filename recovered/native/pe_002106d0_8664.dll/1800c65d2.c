/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c65d2 */

longlong * FUN_1800c65d2(longlong *param_1,longlong *param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)*param_1;
  if (*(char *)(param_3 + 0x19) == '\0') {
    uVar2 = *param_4;
    uVar6 = *(uint *)(param_3 + 0x20);
    if (param_3 == *plVar3) {
      if (uVar2 < uVar6) {
LAB_1800c6660:
        *param_2 = param_3;
LAB_1800c6663:
        *(undefined4 *)(param_2 + 1) = 1;
        goto LAB_1800c66fc;
      }
LAB_1800c66a6:
      lVar4 = *param_1;
      lVar5 = *(longlong *)(lVar4 + 8);
      uVar6 = 0;
      lVar1 = lVar5;
      if (*(char *)(lVar5 + 0x19) == '\0') {
        do {
          lVar5 = lVar1;
          uVar6 = *(uint *)(lVar5 + 0x20);
          if (uVar6 >= uVar2) {
            lVar4 = lVar5;
          }
          lVar1 = *(longlong *)(lVar5 + (ulonglong)(uVar6 < uVar2) * 0x10);
        } while (*(char *)(lVar1 + 0x19) == '\0');
        uVar6 = (uint)(uVar2 <= uVar6);
      }
      if ((*(char *)(lVar4 + 0x19) != '\0') || (uVar2 < *(uint *)(lVar4 + 0x20))) {
        *param_2 = lVar5;
        *(uint *)(param_2 + 1) = uVar6;
        goto LAB_1800c66fc;
      }
      *param_2 = lVar4;
      *(undefined4 *)(param_2 + 1) = 2;
    }
    else {
      if (uVar2 < uVar6) {
        local_30 = param_3;
        plVar3 = (longlong *)FUN_180024994();
        lVar4 = *plVar3;
        uVar2 = *param_4;
        if (*(uint *)(lVar4 + 0x20) < uVar2) {
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) != '\0') goto LAB_1800c664d;
          goto LAB_1800c6660;
        }
        goto LAB_1800c66a6;
      }
      if (uVar6 < uVar2) {
        local_30 = param_3;
        plVar3 = (longlong *)FUN_180016c4c();
        lVar4 = *plVar3;
        if ((*(char *)(lVar4 + 0x19) == '\0') &&
           (uVar2 = *param_4, *(uint *)(lVar4 + 0x20) <= uVar2)) goto LAB_1800c66a6;
        if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x19) != '\0') {
          *param_2 = param_3;
          goto LAB_1800c6650;
        }
        *param_2 = lVar4;
        goto LAB_1800c6663;
      }
      *param_2 = param_3;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    lVar4 = plVar3[2];
    if ((*(char *)(plVar3[1] + 0x19) == '\0') &&
       (uVar2 = *param_4, uVar2 <= *(uint *)(lVar4 + 0x20))) goto LAB_1800c66a6;
LAB_1800c664d:
    *param_2 = lVar4;
LAB_1800c6650:
    *(undefined4 *)(param_2 + 1) = 0;
LAB_1800c66fc:
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

