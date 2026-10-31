/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140049122 */

undefined8 FUN_140049122(longlong param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x2a8);
  if (lVar2 == 0) {
    uVar5 = 6;
  }
  else {
    if (*(int *)(lVar2 + 0x28) != 0) {
      lVar7 = 0x10;
      uVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + 0x20);
        if (*(int *)(lVar3 + -0x10 + lVar7) == param_3) {
          iVar4 = *(int *)(lVar3 + -0xc + lVar7);
          if (param_2 < iVar4) {
            iVar4 = *(int *)(lVar3 + -8 + lVar7);
          }
          else {
            iVar1 = *(int *)(lVar3 + -4 + lVar7);
            if (iVar1 < param_2) {
              iVar4 = *(int *)(lVar3 + lVar7);
            }
            else {
              iVar4 = FUN_14001de7c(param_2 - iVar4,
                                    *(int *)(lVar3 + lVar7) - *(int *)(lVar3 + -8 + lVar7),
                                    iVar1 - iVar4);
              iVar4 = iVar4 + *(int *)(lVar3 + -8 + lVar7);
            }
          }
          *param_4 = iVar4;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x14;
      } while (uVar6 < *(uint *)(lVar2 + 0x28));
    }
    uVar5 = 0;
  }
  return uVar5;
}

