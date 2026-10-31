/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018f6e0 */

void FUN_14018f6e0(longlong *param_1,DWORD64 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong local_res8;
  ulonglong local_res18 [2];
  
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulonglong)uVar8;
  iVar2 = FUN_1401aaf90(param_3);
  local_res8 = *param_1;
  do {
    do {
      if (uVar8 == 0) goto LAB_14018f7a5;
      uVar8 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar8;
      lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar7 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar6 + 4)) || (*(int *)(lVar6 + 8) < iVar2));
    p_Var4 = RtlLookupFunctionEntry(*param_2,local_res18,(PUNWIND_HISTORY_TABLE)0x0);
    lVar10 = (longlong)*(int *)(lVar6 + 0x10) + local_res18[0];
    uVar1 = *(uint *)(lVar6 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar10 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
        goto LAB_14018f790;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
LAB_14018f790:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar10 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_14018f7a5:
  iVar2 = FUN_1401aaf90(param_3,param_2);
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar7 = (ulonglong)uVar8;
  do {
    if (uVar8 == 0) {
      iVar9 = -1;
      break;
    }
    lVar6 = FUN_1401aae30();
    uVar8 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar8;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)(lVar6 + 0x60);
    iVar9 = *(int *)(lVar6 + 4 + uVar7 * 0x14);
  } while ((iVar2 <= iVar9) || (*(int *)(lVar6 + 8 + uVar7 * 0x14) < iVar2));
  FUN_1401ab960(&local_res8,param_2,param_3,iVar9);
  return;
}

