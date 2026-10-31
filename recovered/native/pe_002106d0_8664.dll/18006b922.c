/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006b922 */

void FUN_18006b922(undefined8 *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  int local_68 [2];
  int local_60;
  longlong local_58 [2];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_18006bb00(local_58,param_1,param_2);
  iVar3 = *param_2;
  while (lVar1 = local_58[0], iVar3 == 0) {
    if (local_58[0] == 0) goto LAB_18006ba4e;
    FUN_18006c530(local_58[0],local_68,6);
    iVar3 = local_60;
    uVar4 = FUN_180002218();
    *param_2 = iVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
    bVar2 = true;
    if (iVar3 != 0) goto LAB_18006ba51;
    lVar6 = lVar1 + 0x20;
    if (local_68[0] == 3) {
      FUN_18006b922(lVar6,param_2,param_3);
    }
    else {
      if (7 < *(ulonglong *)(lVar1 + 0x38)) {
        lVar6 = *(longlong *)(lVar1 + 0x20);
      }
      uVar4 = FUN_18023a990(lVar6);
      uVar5 = FUN_180002218();
      *param_2 = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined8 *)(param_2 + 2) = uVar5;
      *param_3 = *param_3 + (ulonglong)((uint)uVar4 & 1);
    }
    if (*param_2 != 0) goto LAB_18006ba51;
    iVar3 = FUN_18006c624(local_58);
    uVar4 = FUN_180002218();
    *param_2 = iVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
  }
  lVar1 = *(longlong *)(param_2 + 2);
  lVar6 = FUN_180002218();
  bVar2 = true;
  if (*(longlong *)(lVar1 + 8) == *(longlong *)(lVar6 + 8)) {
    iVar3 = *param_2;
    if (iVar3 < 0x7b) {
      if ((0x3e < iVar3 - 2U) ||
         ((0x4008000000000003U >> ((ulonglong)(iVar3 - 2U) & 0x3f) & 1) == 0)) goto LAB_18006ba51;
    }
    else if (((iVar3 != 0x7b) && (iVar3 != 0x10b)) && (iVar3 != 0xa1)) goto LAB_18006ba51;
LAB_18006ba4e:
    bVar2 = false;
  }
LAB_18006ba51:
  FUN_1800578f2(local_58);
  if (!bVar2) {
    iVar3 = 10;
    do {
      puVar8 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar8 = (undefined8 *)*param_1;
      }
      uVar7 = FUN_18023a990(puVar8);
      *param_3 = *param_3 + (ulonglong)((uint)uVar7 & 1);
      uVar4 = FUN_180002218();
      iVar9 = (int)(uVar7 >> 0x20);
      *param_2 = iVar9;
      *(undefined8 *)(param_2 + 2) = uVar4;
    } while (((uVar7 >> 0x20 == 0x91) || (iVar9 == 5)) && (iVar3 = iVar3 + -1, iVar3 != 0));
  }
  return;
}

