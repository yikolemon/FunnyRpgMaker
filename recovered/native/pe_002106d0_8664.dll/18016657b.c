/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016657b */

int FUN_18016657b(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = FUN_18012bcdf(param_3,0,*(int *)(param_1 + 0x6c) + -1);
  iVar4 = param_2;
  if (param_2 != iVar2) {
    iVar4 = (int)*(short *)(param_1 + 0x22c);
    if (0 < iVar4) {
      if (param_2 < iVar4) {
        iVar2 = FUN_1800fed00(iVar2,iVar4 + -1);
      }
      else {
        iVar2 = FUN_1801003e9(iVar2);
      }
    }
    iVar4 = iVar2;
    if (param_2 != iVar2) {
      lVar1 = (ulonglong)(param_2 < iVar2) * 2 + -1;
      lVar6 = (longlong)param_2;
      iVar5 = 0;
      do {
        iVar3 = (int)lVar1;
        if ((*(byte *)(*(longlong *)(param_1 + 0x18) +
                      (longlong)*(short *)(*(longlong *)(param_1 + 0x28) + lVar6 * 2) * 0x74) & 0x40
            ) != 0) {
          if (iVar5 == 0) {
            return param_2;
          }
          return (param_2 - iVar3) - iVar5;
        }
        lVar6 = lVar6 + lVar1;
        iVar5 = iVar5 - iVar3;
      } while ((param_2 < iVar2 && lVar6 <= iVar2) || (iVar2 <= lVar6 && iVar2 < param_2));
    }
  }
  return iVar4;
}

