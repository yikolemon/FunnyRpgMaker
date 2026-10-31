/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101610c2 */

int __fastcall FUN_101610c2(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_10125d9a(param_3,0,*(int *)(param_1 + 0x40) + -1);
  iVar3 = param_2;
  if (param_2 != iVar2) {
    iVar3 = (int)*(short *)(param_1 + 0x1e0);
    if (0 < iVar3) {
      if (param_2 < iVar3) {
        iVar2 = FUN_100fa683(iVar2,iVar3 + -1);
      }
      else {
        iVar2 = FUN_100fbc6a(iVar2,iVar3);
      }
    }
    iVar3 = iVar2;
    if (param_2 != iVar2) {
      iVar1 = (uint)(param_2 < iVar2) * 2 + -1;
      iVar4 = 0;
      do {
        if ((*(byte *)(*(int *)(param_1 + 0x10) +
                      *(short *)(param_2 * 2 + *(int *)(param_1 + 0x18) + iVar4 * 2) * 0x74) & 0x40)
            != 0) {
          if (iVar4 == 0) {
            return param_2;
          }
          return (param_2 - iVar1) + iVar4;
        }
        iVar5 = iVar1 + param_2 + iVar4;
        iVar4 = iVar4 + iVar1;
      } while ((param_2 < iVar2 && iVar5 <= iVar2) || (iVar2 <= iVar5 && iVar2 < param_2));
    }
  }
  return iVar3;
}

