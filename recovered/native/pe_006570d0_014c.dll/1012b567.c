/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012b567 */

void __fastcall FUN_1012b567(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = *param_4;
      if (iVar1 == param_4[1]) {
        if (iVar1 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = iVar1 / 2 + iVar1;
        }
        iVar3 = iVar1 + 1;
        if (iVar1 + 1 < iVar2) {
          iVar3 = iVar2;
        }
        iVar2 = FUN_100fa1fa(iVar3 * 4);
        if (param_4[2] != 0) {
          FUN_1025b2d0(iVar2,param_4[2],*param_4 << 2);
          FUN_100fa2cb(param_4[2]);
        }
        param_4[2] = iVar2;
        param_4[1] = iVar3;
        iVar1 = *param_4;
      }
      else {
        iVar2 = param_4[2];
      }
      *(int *)(iVar2 + iVar1 * 4) = param_1;
      *param_4 = *param_4 + 1;
      return;
    }
    if (((*(byte *)(iVar1 + 0xac) & 1) != 0) &&
       (((param_3 == 0 || (*(int *)(param_1 + 0x4c) != param_2)) ||
        ((*(byte *)(*(int *)(param_1 + 0x20) + 0xac) & 1) == 0)))) {
      FUN_1012b567(param_3,param_4);
    }
    iVar2 = *(int *)(param_1 + 0x20);
    if ((*(byte *)(iVar2 + 0xac) & 1) == 0) break;
    if (((param_3 == 0) && (*(int *)(param_1 + 0x4c) == param_2)) &&
       ((*(byte *)(*(int *)(param_1 + 0x1c) + 0xac) & 1) != 0)) {
      return;
    }
    iVar1 = *(int *)(iVar2 + 0x1c);
    param_1 = iVar2;
  }
  return;
}

