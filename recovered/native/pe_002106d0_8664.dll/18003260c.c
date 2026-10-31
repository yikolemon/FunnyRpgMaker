/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003260c */

undefined8 * FUN_18003260c(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)*param_1;
  if (iVar2 != 0) {
    lVar4 = param_3[1];
    uVar5 = lVar4 + 1;
    if ((ulonglong)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3);
      lVar4 = param_3[1];
      uVar5 = lVar4 + 1;
    }
    param_3[1] = uVar5;
    *(char *)(*param_3 + lVar4) = (char)(0x202b2d00 >> ((byte)(iVar2 << 3) & 0x1f));
  }
  local_40 = param_1[3];
  local_48 = *(undefined4 *)((undefined8 *)param_1[1] + 1);
  FUN_180032728(&local_38,param_3,*(undefined8 *)param_1[1],*(undefined4 *)param_1[2]);
  plVar3 = (longlong *)CONCAT71(uStack_37,local_38);
  if ((*(byte *)(param_1[4] + 1) & 0x20) != 0) {
    uVar1 = *(undefined1 *)param_1[5];
    lVar4 = plVar3[1];
    uVar5 = lVar4 + 1;
    if ((ulonglong)plVar3[2] < uVar5) {
      (*(code *)plVar3[3])(plVar3);
      lVar4 = plVar3[1];
      uVar5 = lVar4 + 1;
    }
    plVar3[1] = uVar5;
    *(undefined1 *)(*plVar3 + lVar4) = uVar1;
    if (0 < *(int *)param_1[6]) {
      local_38 = 0x30;
      FUN_18002982f(param_2,plVar3);
      goto LAB_1800326f8;
    }
  }
  *param_2 = plVar3;
LAB_1800326f8:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

