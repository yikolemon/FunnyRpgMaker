/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400408de */

uint FUN_1400408de(uint *param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*param_1 == 0) {
    uVar3 = 0x10000;
  }
  else {
    uVar3 = 0x10000;
    uVar6 = 0;
    do {
      uVar5 = *(uint *)(param_3 + uVar6 * 4);
      if (uVar5 != 0) {
        uVar4 = *(uint *)(*(longlong *)(param_1 + 4) + uVar6 * 4);
        if (uVar4 == 0) {
          return 0;
        }
        if (uVar5 != uVar4) {
          if ((param_2 >> 0xe & 1) == 0) {
            if ((int)uVar5 <= (int)uVar4 || (int)uVar4 < 1) {
              if ((int)uVar4 <= (int)uVar5) {
                return 0;
              }
              if (-1 < (int)uVar4) {
                return 0;
              }
            }
          }
          else {
            iVar1 = *(int *)(param_4 + uVar6 * 4);
            if (uVar4 - iVar1 == 0 || (int)uVar4 < iVar1) {
              return 0;
            }
            iVar2 = *(int *)(param_5 + uVar6 * 4);
            if (iVar2 - uVar4 == 0 || iVar2 < (int)uVar4) {
              return 0;
            }
            if ((int)uVar4 < (int)uVar5) {
              uVar5 = uVar5 - iVar1;
              uVar4 = uVar4 - iVar1;
            }
            else {
              uVar5 = iVar2 - uVar5;
              uVar4 = iVar2 - uVar4;
            }
          }
          uVar3 = FUN_14001de7c(uVar3,uVar4,uVar5);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_1);
  }
  return uVar3;
}

