/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008ce40 */

void FUN_14008ce40(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  PVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong local_res8;
  ulonglong local_res18 [2];
  
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  iVar2 = FUN_14009d7f0(param_3,param_2);
  local_res8 = *param_1;
  do {
    do {
      if (uVar9 == 0) goto LAB_14008cf05;
      uVar9 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar9;
      lVar7 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var4 = RtlLookupFunctionEntry(*param_2,local_res18,(PUNWIND_HISTORY_TABLE)0x0);
    lVar11 = (longlong)*(int *)(lVar7 + 0x10) + local_res18[0];
    uVar1 = *(uint *)(lVar7 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar11 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
        goto LAB_14008cef0;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
LAB_14008cef0:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar11 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_14008cf05:
  iVar2 = FUN_14009d7f0(param_3,param_2);
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  do {
    if (uVar9 == 0) {
      iVar10 = -1;
      break;
    }
    pvVar6 = FUN_14009d690();
    uVar9 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar9;
    lVar7 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)((longlong)pvVar6 + 0x60);
    iVar10 = *(int *)(lVar7 + 4 + uVar8 * 0x14);
  } while ((iVar2 <= iVar10) || (*(int *)(lVar7 + 8 + uVar8 * 0x14) < iVar2));
  FUN_14009e1c0(&local_res8,param_2,param_3,iVar10);
  return;
}

