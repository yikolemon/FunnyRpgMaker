/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e76a2 */

undefined4 __fastcall FUN_101e76a2(uint *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_20;
  
  if (*param_1 == 0) {
    local_20 = 0x10000;
  }
  else {
    local_20 = 0x10000;
    uVar4 = 0;
    do {
      iVar3 = *(int *)(param_3 + uVar4 * 4);
      if (iVar3 != 0) {
        iVar5 = *(int *)(param_1[2] + uVar4 * 4);
        if (iVar5 == 0) {
          return 0;
        }
        if (iVar3 != iVar5) {
          if ((param_2 >> 0xe & 1) == 0) {
            if (iVar3 <= iVar5 || iVar5 < 1) {
              if (iVar5 <= iVar3) {
                return 0;
              }
              if (-1 < iVar5) {
                return 0;
              }
            }
          }
          else {
            iVar1 = *(int *)(param_4 + uVar4 * 4);
            if (iVar5 - iVar1 == 0 || iVar5 < iVar1) {
              return 0;
            }
            iVar2 = *(int *)(param_5 + uVar4 * 4);
            if (iVar2 - iVar5 == 0 || iVar2 < iVar5) {
              return 0;
            }
            if (iVar5 < iVar3) {
              iVar3 = iVar3 - iVar1;
              iVar5 = iVar5 - iVar1;
            }
            else {
              iVar3 = iVar2 - iVar3;
              iVar5 = iVar2 - iVar5;
            }
          }
          local_20 = FUN_101c16ea(local_20,iVar5,iVar3);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_1);
  }
  return local_20;
}

