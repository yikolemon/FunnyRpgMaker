/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125db1 */

void __fastcall FUN_10125db1(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (1 < *param_1 - param_2) {
    iVar4 = *param_1 - param_2;
    do {
      iVar5 = param_2;
      iVar6 = param_2 * 0xc;
      do {
        iVar1 = param_1[2];
        if (*(int *)(iVar1 + 0xc + iVar6) < *(int *)(iVar1 + iVar6)) {
          FUN_10125ebb(iVar1 + iVar6,iVar1 + iVar6 + 0xc);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar5 < iVar4 + param_2 + -1);
      bVar2 = 2 < iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar2);
    iVar4 = *param_1;
    while (iVar5 = param_2, param_2 = iVar5 + 1, param_2 < iVar4) {
      iVar6 = param_1[2];
      iVar1 = *(int *)(iVar6 + param_2 * 0xc);
      if (iVar1 <= *(int *)(iVar6 + 4 + iVar5 * 0xc)) {
        uVar3 = FUN_100fa683(*(undefined4 *)(iVar6 + iVar5 * 0xc),iVar1);
        iVar4 = iVar5 * 0xc;
        *(undefined4 *)(param_1[2] + iVar4) = uVar3;
        param_2 = param_2 * 0xc;
        uVar3 = FUN_100fbc6a(*(undefined4 *)(param_1[2] + 4 + iVar4),
                             *(undefined4 *)(param_1[2] + 4 + param_2));
        *(undefined4 *)(param_1[2] + 4 + iVar4) = uVar3;
        FUN_1025b2d0(param_1[2] + param_2,param_1[2] + param_2 + 0xc,
                     (*param_1 - iVar5) * 0xc + -0x18);
        iVar4 = *param_1 + -1;
        *param_1 = iVar4;
        param_2 = iVar5;
      }
    }
  }
  return;
}

