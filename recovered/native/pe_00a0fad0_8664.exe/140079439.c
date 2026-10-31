/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140079439 */

void FUN_140079439(undefined8 *param_1,int *param_2,longlong *param_3)

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
  FUN_140078fcc(local_58,param_1,param_2);
  iVar3 = *param_2;
  while (lVar1 = local_58[0], iVar3 == 0) {
    if (local_58[0] == 0) goto LAB_140079565;
    FUN_1400435b2(local_58[0],local_68,6);
    iVar3 = local_60;
    uVar4 = FUN_140007025();
    *param_2 = iVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
    bVar2 = true;
    if (iVar3 != 0) goto LAB_140079568;
    lVar6 = lVar1 + 0x20;
    if (local_68[0] == 3) {
      FUN_140079439(lVar6,param_2,param_3);
    }
    else {
      if (7 < *(ulonglong *)(lVar1 + 0x38)) {
        lVar6 = *(longlong *)(lVar1 + 0x20);
      }
      uVar4 = FUN_1400dd250(lVar6);
      uVar5 = FUN_140007025();
      *param_2 = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined8 *)(param_2 + 2) = uVar5;
      *param_3 = *param_3 + (ulonglong)((uint)uVar4 & 1);
    }
    if (*param_2 != 0) goto LAB_140079568;
    iVar3 = FUN_140043a64(local_58);
    uVar4 = FUN_140007025();
    *param_2 = iVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
  }
  lVar1 = *(longlong *)(param_2 + 2);
  lVar6 = FUN_140007025();
  bVar2 = true;
  if (*(longlong *)(lVar1 + 8) == *(longlong *)(lVar6 + 8)) {
    iVar3 = *param_2;
    if (iVar3 < 0x7b) {
      if ((0x3e < iVar3 - 2U) ||
         ((0x4008000000000003U >> ((ulonglong)(iVar3 - 2U) & 0x3f) & 1) == 0)) goto LAB_140079568;
    }
    else if (((iVar3 != 0x7b) && (iVar3 != 0x10b)) && (iVar3 != 0xa1)) goto LAB_140079568;
LAB_140079565:
    bVar2 = false;
  }
LAB_140079568:
  FUN_140005942(local_58);
  if (!bVar2) {
    iVar3 = 10;
    do {
      puVar8 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar8 = (undefined8 *)*param_1;
      }
      uVar7 = FUN_1400dd250(puVar8);
      *param_3 = *param_3 + (ulonglong)((uint)uVar7 & 1);
      uVar4 = FUN_140007025();
      iVar9 = (int)(uVar7 >> 0x20);
      *param_2 = iVar9;
      *(undefined8 *)(param_2 + 2) = uVar4;
    } while (((uVar7 >> 0x20 == 0x91) || (iVar9 == 5)) && (iVar3 = iVar3 + -1, iVar3 != 0));
  }
  return;
}

