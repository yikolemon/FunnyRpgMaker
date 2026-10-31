/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019261e */

void __fastcall
FUN_1019261e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (1 < param_5) {
    iVar2 = param_5 + -1;
    iVar3 = iVar2;
    iVar1 = param_4;
    do {
      *(int *)(iVar1 + 8) = iVar1 + 0xc;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0xc;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_4 + 8 + iVar2 * 0xc) = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[7] = param_4;
  param_1[6] = param_1 + 8;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  FUN_10195401();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_1 + 0xb;
  param_1[0xb] = param_2;
  param_1[0xc] = 0x40000000;
  param_1[0xd] = 0;
  return;
}

