/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f166 */

int FUN_14016f166(uint *param_1,undefined8 param_2)

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
        iVar3 = FUN_14016f1e4(param_1,uVar1,uVar4);
        if (iVar3 != 0) {
          iVar3 = FUN_14016f268(param_1,uVar4,uVar1,param_2);
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

