/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b350 */

undefined4 __fastcall FUN_1020b350(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar10 = *(int *)(param_1 + 0x14) * param_3;
  uVar3 = FUN_1020b545();
  uVar4 = 0xa1;
  iVar8 = uVar3 - uVar10;
  if (uVar10 <= uVar3) {
    if (param_3 != 0) {
      iVar5 = iVar8 + param_3;
      iVar9 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar13 = iVar9 + iVar8;
        iVar12 = param_1;
        iVar6 = FUN_1020b54f(iVar5,iVar8,param_2,param_1,uVar10,iVar13);
        if (1 < *(uint *)(param_1 + 0x14)) {
          uVar3 = 1;
          iVar11 = iVar5;
          do {
            iVar7 = FUN_1020b54f(iVar11,iVar8,param_2,iVar12,uVar10,iVar13);
            lVar2 = (longlong)iVar7 * (longlong)*(int *)(iVar1 + uVar3 * 4);
            iVar7 = (int)(lVar2 >> 0x3f);
            lVar2 = lVar2 + CONCAT44(iVar7,iVar7) + 0x8000;
            iVar6 = iVar6 + ((int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10);
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(iVar12 + 0x14));
          iVar5 = iVar5 + uVar3 + -1;
        }
        FUN_1020bcc7(iVar6);
        iVar9 = iVar9 + 1;
        param_1 = iVar12;
      } while (iVar9 != param_3);
    }
    FUN_1020beb1();
    uVar4 = 0;
  }
  return uVar4;
}

