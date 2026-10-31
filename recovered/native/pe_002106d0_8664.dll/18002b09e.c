/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002b09e */

undefined8 *
thunk_FUN_18002b0a3(undefined8 *param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong lStack_98;
  ulonglong *puStack_90;
  longlong *plStack_80;
  ulonglong uStack_78;
  undefined4 uStack_70;
  char acStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_180402640 ^ (ulonglong)auStack_b8;
  uVar1 = param_3;
  lVar6 = 0;
  do {
    lVar5 = lVar6;
    uVar1 = uVar1 >> 4;
    lVar6 = lVar5 + 1;
  } while (uVar1 != 0);
  uStack_70 = (undefined4)lVar6;
  uStack_78 = param_3;
  if (param_4 != 0) {
    lStack_98 = lVar5 + 3;
    puStack_90 = &uStack_78;
    FUN_18002b257(param_1,param_2,param_4,lStack_98);
    goto LAB_18002b21f;
  }
  lVar2 = param_2[1];
  uVar1 = param_2[2];
  if (uVar1 < lVar2 + lVar6 + 2U) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar1 = param_2[2];
  }
  uVar4 = lVar2 + 1;
  if (uVar1 < uVar4) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)(*param_2 + lVar2) = 0x30;
  lVar2 = param_2[1];
  uVar1 = lVar2 + 1;
  if ((ulonglong)param_2[2] < uVar1) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar1 = lVar2 + 1;
  }
  param_2[1] = uVar1;
  *(undefined1 *)(*param_2 + lVar2) = 0x78;
  lVar2 = param_2[1];
  uVar1 = lVar2 + lVar6;
  if ((ulonglong)param_2[2] < uVar1) {
    (*(code *)param_2[3])(param_2);
    lVar2 = param_2[1];
    uVar1 = lVar2 + lVar6;
    if (uVar1 <= (ulonglong)param_2[2]) goto LAB_18002b1a2;
LAB_18002b1d7:
    pcVar3 = acStack_68 + lVar5;
    do {
      *pcVar3 = "0123456789abcdef"[(uint)param_3 & 0xf];
      param_3 = param_3 >> 4;
      pcVar3 = pcVar3 + -1;
    } while (param_3 != 0);
    FUN_180025857(&plStack_80,acStack_68,acStack_68 + lVar5 + 1,param_2);
  }
  else {
LAB_18002b1a2:
    param_2[1] = uVar1;
    if (*param_2 == 0) goto LAB_18002b1d7;
    pcVar3 = (char *)(lVar6 + *param_2 + lVar2);
    do {
      pcVar3 = pcVar3 + -1;
      *pcVar3 = "0123456789abcdef"[(uint)param_3 & 0xf];
      param_3 = param_3 >> 4;
      plStack_80 = param_2;
    } while (param_3 != 0);
  }
  *param_1 = plStack_80;
LAB_18002b21f:
  if (DAT_180402640 != (uStack_28 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(uStack_28 ^ (ulonglong)auStack_b8);
  }
  return param_1;
}

