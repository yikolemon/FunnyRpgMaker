/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140142996 */

undefined4
FUN_140142996(uint *param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (*param_1 == 0) {
    uVar3 = 0x10000;
  }
  else {
    uVar3 = 0x10000;
    uVar6 = 0;
    do {
      iVar5 = *(int *)(param_3 + uVar6 * 4);
      if (iVar5 != 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 4) + uVar6 * 4);
        if (iVar4 == 0) {
          return 0;
        }
        if (iVar5 != iVar4) {
          if ((param_2 >> 0xe & 1) == 0) {
            if (iVar5 <= iVar4 || iVar4 < 1) {
              if (iVar4 <= iVar5) {
                return 0;
              }
              if (-1 < iVar4) {
                return 0;
              }
            }
          }
          else {
            iVar1 = *(int *)(param_4 + uVar6 * 4);
            if (iVar4 - iVar1 == 0 || iVar4 < iVar1) {
              return 0;
            }
            iVar2 = *(int *)(param_5 + uVar6 * 4);
            if (iVar2 - iVar4 == 0 || iVar2 < iVar4) {
              return 0;
            }
            if (iVar4 < iVar5) {
              iVar5 = iVar5 - iVar1;
              iVar4 = iVar4 - iVar1;
            }
            else {
              iVar5 = iVar2 - iVar5;
              iVar4 = iVar2 - iVar4;
            }
          }
          uVar3 = FUN_14012a478(uVar3,iVar4,iVar5);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_1);
  }
  return uVar3;
}

