/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043ee12 */

uint __fastcall FUN_0043ee12(uint *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_20;
  
  if (*param_1 == 0) {
    local_20 = 0x10000;
  }
  else {
    local_20 = 0x10000;
    uVar4 = 0;
    do {
      uVar3 = *(uint *)(param_3 + uVar4 * 4);
      if (uVar3 != 0) {
        uVar5 = *(uint *)(param_1[2] + uVar4 * 4);
        if (uVar5 == 0) {
          return 0;
        }
        if (uVar3 != uVar5) {
          if ((param_2 >> 0xe & 1) == 0) {
            if ((int)uVar3 <= (int)uVar5 || (int)uVar5 < 1) {
              if ((int)uVar5 <= (int)uVar3) {
                return 0;
              }
              if (-1 < (int)uVar5) {
                return 0;
              }
            }
          }
          else {
            iVar1 = *(int *)(param_4 + uVar4 * 4);
            if (uVar5 - iVar1 == 0 || (int)uVar5 < iVar1) {
              return 0;
            }
            iVar2 = *(int *)(param_5 + uVar4 * 4);
            if (iVar2 - uVar5 == 0 || iVar2 < (int)uVar5) {
              return 0;
            }
            if ((int)uVar5 < (int)uVar3) {
              uVar3 = uVar3 - iVar1;
              uVar5 = uVar5 - iVar1;
            }
            else {
              uVar3 = iVar2 - uVar3;
              uVar5 = iVar2 - uVar5;
            }
          }
          local_20 = FUN_0041dcda(local_20,uVar5,uVar3);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_1);
  }
  return local_20;
}

