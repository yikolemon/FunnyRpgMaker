/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021002a */

int __fastcall FUN_1021002a(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_1;
  if (uVar5 != 0) {
    uVar1 = uVar5 - 1;
    uVar4 = uVar5;
    do {
      uVar2 = uVar1;
      for (uVar4 = uVar4 - 2; uVar4 < uVar2; uVar4 = uVar4 - 1) {
        iVar3 = FUN_1021008b(uVar4,param_2);
        if (iVar3 != 0) {
          iVar3 = FUN_10210102(uVar2,param_2);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar5 = *param_1;
          break;
        }
      }
      uVar1 = uVar2 - 1;
      uVar4 = uVar2;
    } while (uVar2 - 1 < uVar5);
  }
  return 0;
}

