/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140106c10 */

undefined8 *
FUN_140106c10(undefined8 *param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined4 local_3c;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar5 = FUN_14011d840(param_5,param_4);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140115938();
  }
  lVar4 = *(longlong *)(param_4 + 8);
  iVar10 = -1;
  lVar8 = (longlong)*(int *)(param_5 + 0x10);
  iVar9 = -1;
  lVar2 = lVar4 + lVar8;
  uVar6 = uVar3;
  while( true ) {
    uVar1 = uVar6 - 1;
    if ((*(int *)(lVar4 + (ulonglong)uVar1 * 0x14 + 4 + lVar8) < iVar5) &&
       (iVar5 <= *(int *)(lVar2 + 8 + (ulonglong)uVar1 * 0x14))) break;
    uVar6 = uVar1;
    if (uVar1 == 0) {
      lVar8 = 0;
LAB_140106c9c:
      uVar7 = 0;
      do {
        iVar5 = (int)uVar7;
        if ((((lVar8 == 0) ||
             ((*(int *)(lVar8 + 4) < *(int *)(lVar2 + uVar7 * 0x14) &&
              (*(int *)(lVar2 + 4 + uVar7 * 0x14) <= *(int *)(lVar8 + 8))))) &&
            (*(int *)(lVar2 + uVar7 * 0x14) <= param_3)) &&
           ((param_3 <= *(int *)(lVar2 + 4 + uVar7 * 0x14) && (iVar9 = iVar5, iVar10 == -1)))) {
          iVar10 = iVar5;
        }
        uVar7 = (ulonglong)(iVar5 + 1U);
      } while (iVar5 + 1U < uVar3);
      *param_1 = param_2;
      param_1[2] = param_2;
      iVar5 = 0;
      if (iVar10 != -1) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
      iVar5 = 0;
      if (iVar10 != -1) {
        iVar5 = iVar9 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_3c;
      *(int *)(param_1 + 3) = iVar5;
      return param_1;
    }
  }
  lVar8 = lVar4 + (ulonglong)(uVar6 - 1) * 0x14 + lVar8;
  goto LAB_140106c9c;
}

