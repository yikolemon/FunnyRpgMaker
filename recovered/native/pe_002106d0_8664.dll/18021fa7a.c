/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021fa7a */

int FUN_18021fa7a(uint *param_1,undefined8 param_2)

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
        iVar3 = FUN_18021faf8(param_1,uVar1,uVar4);
        if (iVar3 != 0) {
          iVar3 = FUN_18021fb7c(param_1,uVar4,uVar1,param_2);
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

