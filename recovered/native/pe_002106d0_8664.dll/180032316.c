/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180032316 */

undefined8 FUN_180032316(int *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  iVar6 = *param_1;
  if (iVar6 != 0) {
    lVar2 = param_3[1];
    uVar7 = lVar2 + 1;
    if ((ulonglong)param_3[2] < uVar7) {
      (*(code *)param_3[3])(param_3);
      lVar2 = param_3[1];
      uVar7 = lVar2 + 1;
    }
    param_3[1] = uVar7;
    *(char *)(*param_3 + lVar2) = (char)(0x202b2d00 >> ((byte)(iVar6 << 3) & 0x1f));
  }
  iVar1 = param_1[7];
  iVar6 = param_1[6];
  uVar7 = *(ulonglong *)(param_1 + 2);
  if ((char)iVar1 == '\0') {
    FUN_180025acd(local_58,uVar7,iVar6);
    puVar8 = local_58 + iVar6;
  }
  else {
    puVar8 = local_58 + (longlong)iVar6 + 1;
    puVar3 = puVar8;
    if (2 < iVar6) {
      uVar5 = (iVar6 - 1U >> 1) + 1;
      uVar4 = uVar7;
      do {
        uVar7 = uVar4 / 100;
        *(undefined2 *)(puVar3 + -2) = *(undefined2 *)(&DAT_1802b1ce0 + (uVar4 % 100) * 2);
        puVar3 = puVar3 + -2;
        uVar5 = uVar5 - 1;
        uVar4 = uVar7;
      } while (1 < uVar5);
    }
    uVar4 = uVar7;
    if ((iVar6 - 1U & 1) != 0) {
      uVar4 = uVar7 / 10;
      puVar3[-1] = (char)uVar7 + (char)uVar4 * -10 | 0x30;
      puVar3 = puVar3 + -1;
    }
    puVar3[-1] = (char)iVar1;
    FUN_180025acd(puVar3 + -2,uVar4,1);
  }
  FUN_180025857(&local_60,local_58,puVar8,param_3);
  iVar6 = param_1[8];
  if (0 < iVar6) {
    do {
      lVar2 = local_60[1];
      uVar7 = lVar2 + 1;
      if ((ulonglong)local_60[2] < uVar7) {
        (*(code *)local_60[3])(local_60);
        lVar2 = local_60[1];
        uVar7 = lVar2 + 1;
      }
      local_60[1] = uVar7;
      *(undefined1 *)(*local_60 + lVar2) = 0x30;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = param_1[9];
  lVar2 = local_60[1];
  uVar7 = lVar2 + 1;
  if ((ulonglong)local_60[2] < uVar7) {
    (*(code *)local_60[3])(local_60);
    lVar2 = local_60[1];
    uVar7 = lVar2 + 1;
  }
  local_60[1] = uVar7;
  *(char *)(*local_60 + lVar2) = (char)iVar6;
  FUN_180029346(param_2,param_1[10],local_60);
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
  }
  return param_2;
}

