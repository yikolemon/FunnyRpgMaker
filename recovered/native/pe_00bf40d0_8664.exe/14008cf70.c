/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008cf70 */

longlong * FUN_14008cf70(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  uVar7 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar7;
  iVar2 = FUN_14009d7f0(param_3,param_2);
  *param_4 = *param_1;
  if (uVar7 == 0) {
    return param_4;
  }
  do {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    if ((*(int *)(lVar6 + 4) < iVar2) && (iVar2 <= *(int *)(lVar6 + 8))) {
      p_Var4 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
      lVar9 = (longlong)*(int *)(lVar6 + 0x10) + local_res8;
      uVar1 = *(uint *)(lVar6 + 0xc);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((longlong)*(int *)(lVar9 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
          goto LAB_14008d020;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar1);
      }
      if ((uint)uVar5 < uVar1) {
LAB_14008d020:
        *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVar7 == 0) {
      return param_4;
    }
  } while( true );
}

