/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016fd35 */

int __fastcall FUN_1016fd35(uint *param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_10178c66(param_1 + 1,param_1 + 2);
  *param_4 = iVar1;
  if (iVar1 != 0) {
    if ((param_1[1] < 0x1000001) && (*param_1 < 0x1000001)) {
      *param_2 = *param_1;
      uVar5 = param_1[1];
      *param_3 = uVar5;
      iVar1 = *param_4;
      iVar2 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      iVar2 = iVar2 >> 3;
      uVar4 = *param_1;
      uVar3 = param_1[2];
      iVar1 = FUN_10178dfb(uVar5,iVar2,uVar3,uVar4,uVar5);
      if ((iVar1 != 0) && (iVar1 = FUN_10178e4b(uVar5,iVar2), iVar1 != 0)) {
        iVar2 = FUN_10171bb6(uVar4 * uVar3 * iVar2 * uVar5);
        if (iVar2 != 0) {
          if (param_1[2] == 4) {
            return iVar1;
          }
          if (*param_4 == 0x10) {
            iVar1 = FUN_10171952(*param_1,param_1[1]);
            return iVar1;
          }
          iVar1 = FUN_101717e3(*param_1,param_1[1]);
          return iVar1;
        }
        thunk_FUN_10274120(iVar1);
      }
    }
    FUN_10170e07();
  }
  return 0;
}

