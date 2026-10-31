/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004677aa */

int __fastcall FUN_004677aa(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  if (uVar5 != 0) {
    uVar2 = uVar5 - 1;
    uVar4 = uVar5;
    do {
      uVar1 = uVar2;
      for (uVar4 = uVar4 - 2; uVar4 < uVar1; uVar4 = uVar4 - 1) {
        uVar2 = FUN_0046780b((int)param_1,uVar1,uVar4);
        if (uVar2 != 0) {
          iVar3 = FUN_00467882(param_1,uVar4,uVar1,param_2);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar5 = *param_1;
          break;
        }
      }
      uVar2 = uVar1 - 1;
      uVar4 = uVar1;
    } while (uVar1 - 1 < uVar5);
  }
  return 0;
}

