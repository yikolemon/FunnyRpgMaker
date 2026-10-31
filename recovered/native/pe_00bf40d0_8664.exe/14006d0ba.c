/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d0ba */

int FUN_14006d0ba(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  if (uVar5 != 0) {
    uVar4 = uVar5;
    uVar1 = uVar5 - 1;
    do {
      for (uVar4 = uVar4 - 2; uVar4 < uVar1; uVar4 = uVar4 - 1) {
        uVar2 = FUN_14006d138((longlong)param_1,(ulonglong)uVar1,(ulonglong)uVar4);
        if (uVar2 != 0) {
          iVar3 = FUN_14006d1bc(param_1,uVar4,uVar1,param_2);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar5 = *param_1;
          break;
        }
      }
      uVar2 = uVar1 - 1;
      uVar4 = uVar1;
      uVar1 = uVar2;
    } while (uVar2 < uVar5);
  }
  return 0;
}

