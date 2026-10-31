/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10101c74 */

void __fastcall FUN_10101c74(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1[5] + 4 + iVar2 * 8) != -1) {
        FUN_1012c72a();
        iVar1 = param_1[3];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (param_1[5] != 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    FUN_100fa2cb(param_1[5]);
    param_1[5] = 0;
  }
  if (param_1[2] != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    FUN_100fa2cb(param_1[2]);
    param_1[2] = 0;
  }
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}

