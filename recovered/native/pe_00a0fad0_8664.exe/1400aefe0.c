/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aefe0 */

longlong * FUN_1400aefe0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)*param_1;
  if (*(char *)(param_3 + 0x19) == '\0') {
    lVar1 = *plVar4;
    iVar3 = FUN_1400175e8(param_4,param_3 + 0x20);
    if (param_3 == lVar1) {
      if (iVar3 < 0) {
LAB_1400af08e:
        *param_2 = param_3;
LAB_1400af091:
        *(undefined4 *)(param_2 + 1) = 1;
        goto LAB_1400af027;
      }
    }
    else {
      if (-1 < iVar3) {
        iVar3 = FUN_1400175e8(param_3 + 0x20,param_4);
        if (-1 < iVar3) {
          *param_2 = param_3;
          *(undefined4 *)(param_2 + 1) = 0;
          *(undefined1 *)(param_2 + 2) = 1;
          goto LAB_1400af10b;
        }
        local_50 = param_3;
        plVar4 = (longlong *)FUN_14001010a();
        lVar1 = *plVar4;
        if ((*(char *)(lVar1 + 0x19) == '\0') &&
           (iVar3 = FUN_1400175e8(param_4,lVar1 + 0x20), -1 < iVar3)) goto LAB_1400af0be;
        if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x19) != '\0') {
          *param_2 = param_3;
          goto LAB_1400af020;
        }
        *param_2 = lVar1;
        goto LAB_1400af091;
      }
      local_50 = param_3;
      plVar4 = (longlong *)FUN_1400ac132();
      lVar1 = *plVar4;
      iVar3 = FUN_1400175e8(lVar1 + 0x20,param_4);
      if (iVar3 < 0) {
        if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) != '\0') {
          *param_2 = lVar1;
          goto LAB_1400af020;
        }
        goto LAB_1400af08e;
      }
    }
LAB_1400af0be:
    FUN_140017584(param_1,&local_50,param_4);
    if ((*(char *)(local_40 + 0x19) == '\0') &&
       (iVar3 = FUN_1400175e8(param_4,local_40 + 0x20), -1 < iVar3)) {
      *param_2 = local_40;
      *(undefined4 *)(param_2 + 1) = 2;
      uVar2 = 1;
    }
    else {
      *(undefined4 *)param_2 = (undefined4)local_50;
      *(undefined4 *)((longlong)param_2 + 4) = local_50._4_4_;
      *(undefined4 *)(param_2 + 1) = uStack_48;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
      uVar2 = 0;
    }
    *(undefined1 *)(param_2 + 2) = uVar2;
  }
  else {
    if ((*(char *)(plVar4[1] + 0x19) == '\0') &&
       (iVar3 = FUN_1400175e8(plVar4[2] + 0x20,param_4), -1 < iVar3)) goto LAB_1400af0be;
    *param_2 = plVar4[2];
LAB_1400af020:
    *(undefined4 *)(param_2 + 1) = 0;
LAB_1400af027:
    *(undefined1 *)(param_2 + 2) = 0;
  }
LAB_1400af10b:
  if (DAT_1401c9640 != (local_38 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_38 ^ (ulonglong)auStack_78);
  }
  return param_2;
}

