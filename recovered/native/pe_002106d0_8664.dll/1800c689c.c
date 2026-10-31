/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c689c */

longlong * FUN_1800c689c(longlong *param_1,longlong *param_2,longlong param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)*param_1;
  if (*(char *)(param_3 + 0x19) == '\0') {
    iVar3 = *param_4;
    iVar1 = *(int *)(param_3 + 0x20);
    if (param_3 == *plVar4) {
      if (iVar3 < iVar1) {
LAB_1800c692a:
        *param_2 = param_3;
LAB_1800c692d:
        *(undefined4 *)(param_2 + 1) = 1;
        goto LAB_1800c69c6;
      }
LAB_1800c6970:
      lVar5 = *param_1;
      lVar6 = *(longlong *)(lVar5 + 8);
      uVar7 = 0;
      lVar2 = lVar6;
      if (*(char *)(lVar6 + 0x19) == '\0') {
        do {
          lVar6 = lVar2;
          iVar1 = *(int *)(lVar6 + 0x20);
          if (iVar3 <= iVar1) {
            lVar5 = lVar6;
          }
          lVar2 = *(longlong *)(lVar6 + (ulonglong)(iVar1 < iVar3) * 0x10);
        } while (*(char *)(lVar2 + 0x19) == '\0');
        uVar7 = (uint)(iVar3 <= iVar1);
      }
      if ((*(char *)(lVar5 + 0x19) != '\0') || (iVar3 < *(int *)(lVar5 + 0x20))) {
        *param_2 = lVar6;
        *(uint *)(param_2 + 1) = uVar7;
        goto LAB_1800c69c6;
      }
      *param_2 = lVar5;
      *(undefined4 *)(param_2 + 1) = 2;
    }
    else {
      if (iVar3 < iVar1) {
        local_30 = param_3;
        plVar4 = (longlong *)FUN_180024994();
        lVar5 = *plVar4;
        iVar3 = *param_4;
        if (*(int *)(lVar5 + 0x20) < iVar3) {
          if (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x19) != '\0') goto LAB_1800c6917;
          goto LAB_1800c692a;
        }
        goto LAB_1800c6970;
      }
      if (iVar1 < iVar3) {
        local_30 = param_3;
        plVar4 = (longlong *)FUN_180016c4c();
        lVar5 = *plVar4;
        if ((*(char *)(lVar5 + 0x19) == '\0') && (iVar3 = *param_4, *(int *)(lVar5 + 0x20) <= iVar3)
           ) goto LAB_1800c6970;
        if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x19) != '\0') {
          *param_2 = param_3;
          goto LAB_1800c691a;
        }
        *param_2 = lVar5;
        goto LAB_1800c692d;
      }
      *param_2 = param_3;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    lVar5 = plVar4[2];
    if ((*(char *)(plVar4[1] + 0x19) == '\0') && (iVar3 = *param_4, iVar3 <= *(int *)(lVar5 + 0x20))
       ) goto LAB_1800c6970;
LAB_1800c6917:
    *param_2 = lVar5;
LAB_1800c691a:
    *(undefined4 *)(param_2 + 1) = 0;
LAB_1800c69c6:
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

