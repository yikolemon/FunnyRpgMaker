/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400abe8a */

longlong * FUN_1400abe8a(longlong *param_1,longlong *param_2,longlong param_3,int *param_4)

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
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)*param_1;
  if (*(char *)(param_3 + 0x19) == '\0') {
    iVar3 = *param_4;
    iVar1 = *(int *)(param_3 + 0x20);
    if (param_3 == *plVar4) {
      if (iVar3 < iVar1) {
LAB_1400abf18:
        *param_2 = param_3;
LAB_1400abf1b:
        *(undefined4 *)(param_2 + 1) = 1;
        goto LAB_1400abfb4;
      }
LAB_1400abf5e:
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
        goto LAB_1400abfb4;
      }
      *param_2 = lVar5;
      *(undefined4 *)(param_2 + 1) = 2;
    }
    else {
      if (iVar3 < iVar1) {
        local_30 = param_3;
        plVar4 = (longlong *)FUN_1400ac132();
        lVar5 = *plVar4;
        iVar3 = *param_4;
        if (*(int *)(lVar5 + 0x20) < iVar3) {
          if (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x19) != '\0') goto LAB_1400abf05;
          goto LAB_1400abf18;
        }
        goto LAB_1400abf5e;
      }
      if (iVar1 < iVar3) {
        local_30 = param_3;
        plVar4 = (longlong *)FUN_14001010a();
        lVar5 = *plVar4;
        if ((*(char *)(lVar5 + 0x19) == '\0') && (iVar3 = *param_4, *(int *)(lVar5 + 0x20) <= iVar3)
           ) goto LAB_1400abf5e;
        if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x19) != '\0') {
          *param_2 = param_3;
          goto LAB_1400abf08;
        }
        *param_2 = lVar5;
        goto LAB_1400abf1b;
      }
      *param_2 = param_3;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    lVar5 = plVar4[2];
    if ((*(char *)(plVar4[1] + 0x19) == '\0') && (iVar3 = *param_4, iVar3 <= *(int *)(lVar5 + 0x20))
       ) goto LAB_1400abf5e;
LAB_1400abf05:
    *param_2 = lVar5;
LAB_1400abf08:
    *(undefined4 *)(param_2 + 1) = 0;
LAB_1400abfb4:
    *(undefined1 *)(param_2 + 2) = 0;
  }
  if (DAT_1401c9640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
  }
  return param_2;
}

