/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010b2c5 */

void __fastcall FUN_1010b2c5(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar4 * 4);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar3,param_1[2],*param_1 << 2);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar3;
    param_1[1] = iVar4;
    iVar2 = *param_1;
  }
  else {
    iVar3 = param_1[2];
  }
  *(int *)(iVar3 + iVar2 * 4) = param_2;
  *param_1 = *param_1 + 1;
  if (*(char *)(param_2 + 0xf9) == '\x01') {
    uVar1 = *(uint *)(param_2 + 0x1d8);
    if (1 < uVar1) {
      FUN_1026fb00(*(undefined4 *)(param_2 + 0x1e0),uVar1,4,&LAB_101260b3);
    }
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (*(char *)(*(int *)(*(int *)(param_2 + 0x1e0) + uVar5 * 4) + 0xf9) == '\x01') {
          FUN_1010b2c5();
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  return;
}

