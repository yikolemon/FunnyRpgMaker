/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140023c6c */

undefined8 FUN_140023c6c(int *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined1 local_43 [11];
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  iVar6 = *param_1;
  if (iVar6 != 0) {
    lVar3 = param_3[1];
    uVar5 = lVar3 + 1;
    if ((ulonglong)param_3[2] < uVar5) {
      (*(code *)param_3[3])(param_3);
      lVar3 = param_3[1];
      uVar5 = lVar3 + 1;
    }
    param_3[1] = uVar5;
    *(char *)(*param_3 + lVar3) = (char)(0x202b2d00 >> ((byte)(iVar6 << 3) & 0x1f));
  }
  iVar1 = param_1[4];
  iVar6 = param_1[3];
  uVar2 = param_1[1];
  if ((char)iVar1 == '\0') {
    FUN_14001a250(local_43,uVar2,iVar6);
    puVar9 = local_43 + iVar6;
  }
  else {
    puVar9 = local_43 + (longlong)iVar6 + 1;
    puVar4 = puVar9;
    if (iVar6 < 3) {
      uVar5 = (ulonglong)uVar2;
    }
    else {
      uVar8 = (iVar6 - 1U >> 1) + 1;
      do {
        uVar5 = (ulonglong)uVar2 / 100;
        *(undefined2 *)(puVar4 + -2) =
             *(undefined2 *)(&DAT_1401c9cf0 + (ulonglong)(uVar2 % 100) * 2);
        puVar4 = puVar4 + -2;
        uVar8 = uVar8 - 1;
        uVar2 = uVar2 / 100;
      } while (1 < uVar8);
    }
    uVar7 = uVar5;
    if ((iVar6 - 1U & 1) != 0) {
      uVar7 = uVar5 / 10;
      puVar4[-1] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
      puVar4 = puVar4 + -1;
    }
    puVar4[-1] = (char)iVar1;
    FUN_14001a250(puVar4 + -2,uVar7,1);
  }
  FUN_14001aea5(&local_50,local_43,puVar9,param_3);
  iVar6 = param_1[5];
  if (0 < iVar6) {
    do {
      lVar3 = local_50[1];
      uVar5 = lVar3 + 1;
      if ((ulonglong)local_50[2] < uVar5) {
        (*(code *)local_50[3])(local_50);
        lVar3 = local_50[1];
        uVar5 = lVar3 + 1;
      }
      local_50[1] = uVar5;
      *(undefined1 *)(*local_50 + lVar3) = 0x30;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = param_1[6];
  lVar3 = local_50[1];
  uVar5 = lVar3 + 1;
  if ((ulonglong)local_50[2] < uVar5) {
    (*(code *)local_50[3])(local_50);
    lVar3 = local_50[1];
    uVar5 = lVar3 + 1;
  }
  local_50[1] = uVar5;
  *(char *)(*local_50 + lVar3) = (char)iVar6;
  FUN_14001ee7c(param_2,param_1[7],local_50);
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
  }
  return param_2;
}

