/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192a7d */

void __fastcall FUN_10192a7d(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[6] < param_2) {
    iVar2 = param_1[1];
    if (iVar2 < param_2) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      if (iVar2 <= param_2) {
        iVar2 = param_2;
      }
      iVar1 = FUN_100fa1fa(iVar2 * 4);
      if (param_1[2] != 0) {
        FUN_1025b2d0(iVar1,param_1[2],*param_1 << 2);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = iVar1;
      param_1[1] = iVar2;
    }
    iVar2 = *param_1;
    if (iVar2 < param_2) {
      do {
        *(undefined4 *)(param_1[2] + iVar2 * 4) = 0xbf800000;
        iVar2 = iVar2 + 1;
      } while (param_2 != iVar2);
    }
    *param_1 = param_2;
    iVar2 = param_1[7];
    if (iVar2 < param_2) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      if (iVar2 <= param_2) {
        iVar2 = param_2;
      }
      iVar1 = FUN_100fa1fa(iVar2 * 2);
      if (param_1[8] != 0) {
        FUN_1025b2d0(iVar1,param_1[8],param_1[6] * 2);
        FUN_100fa2cb(param_1[8]);
      }
      param_1[8] = iVar1;
      param_1[7] = iVar2;
    }
    iVar2 = param_1[6];
    if (iVar2 < param_2) {
      do {
        *(undefined2 *)(param_1[8] + iVar2 * 2) = 0xffff;
        iVar2 = iVar2 + 1;
      } while (param_2 != iVar2);
    }
    param_1[6] = param_2;
  }
  return;
}

