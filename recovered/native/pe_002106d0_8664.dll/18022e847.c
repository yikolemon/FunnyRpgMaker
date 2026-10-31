/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022e847 */

void FUN_18022e847(int param_1,int param_2,ushort *param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_1 + 3;
  if (-1 < param_1) {
    iVar5 = param_1;
  }
  if (param_2 != 0) {
    lVar2 = *param_4 - (longlong)(iVar5 >> 2) * (longlong)(int)param_4[1];
    do {
      if (param_3[1] != 0) {
        uVar1 = param_3[2];
        uVar3 = 0;
        do {
          uVar4 = (ulonglong)(*param_3 + uVar3 >> 2);
          iVar5 = (uint)*(byte *)(lVar2 + uVar4) + ((byte)uVar1 + 8 >> 4);
          *(char *)(lVar2 + uVar4) = (char)iVar5 - (char)((uint)iVar5 >> 8);
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_3[1]);
      }
      param_2 = param_2 + -1;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
  }
  return;
}

