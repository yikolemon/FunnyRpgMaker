/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008d1a0 */

undefined8 *
FUN_14008d1a0(undefined8 *param_1,undefined8 param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_3c;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar2 = FUN_14009d7f0(param_5,param_4);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140096cf8();
  }
  uVar6 = param_4[1];
  uVar9 = 0xffffffff;
  lVar7 = (longlong)*(int *)(param_5 + 0x10);
  uVar8 = 0xffffffff;
  lVar1 = uVar6 + lVar7;
  uVar4 = uVar3;
  while( true ) {
    uVar5 = uVar4 - 1;
    if ((*(int *)(uVar6 + (ulonglong)uVar5 * 0x14 + 4 + lVar7) < iVar2) &&
       (iVar2 <= *(int *)(lVar1 + 8 + (ulonglong)uVar5 * 0x14))) break;
    uVar4 = uVar5;
    if (uVar5 == 0) {
      lVar7 = 0;
LAB_14008d22c:
      uVar4 = 0;
      uVar5 = uVar4;
      do {
        uVar6 = (ulonglong)uVar5;
        if ((((lVar7 == 0) ||
             ((*(int *)(lVar7 + 4) < *(int *)(lVar1 + uVar6 * 0x14) &&
              (*(int *)(lVar1 + 4 + uVar6 * 0x14) <= *(int *)(lVar7 + 8))))) &&
            (*(int *)(lVar1 + uVar6 * 0x14) <= param_3)) &&
           ((param_3 <= *(int *)(lVar1 + 4 + uVar6 * 0x14) && (uVar8 = uVar5, uVar9 == 0xffffffff)))
           ) {
          uVar9 = uVar5;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      *param_1 = param_2;
      param_1[2] = param_2;
      uVar3 = uVar4;
      if (uVar9 != 0xffffffff) {
        uVar3 = uVar9;
      }
      *(uint *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
      if (uVar9 != 0xffffffff) {
        uVar4 = uVar8 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_3c;
      *(uint *)(param_1 + 3) = uVar4;
      return param_1;
    }
  }
  lVar7 = uVar6 + (ulonglong)(uVar4 - 1) * 0x14 + lVar7;
  goto LAB_14008d22c;
}

