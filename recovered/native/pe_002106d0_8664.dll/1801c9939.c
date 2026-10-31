/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c9939 */

void FUN_1801c9939(longlong param_1,int param_2,ulonglong param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x78);
  uVar3 = 10;
  if ((param_4 & 1) != 0) {
    uVar3 = uVar4;
  }
  do {
    iVar2 = FUN_1801caef1(param_1,param_2 + (int)uVar4,param_4 | 0x100);
    if (iVar2 != 0) {
      return;
    }
    *(int *)(param_5 + uVar4 * 4) =
         *(int *)(lVar1 + ((ulonglong)((param_4 & 0x10) >> 2) | 0x58)) << (sbyte)uVar3;
    uVar4 = uVar4 + 1;
  } while ((param_3 & 0xffffffff) != uVar4);
  return;
}

