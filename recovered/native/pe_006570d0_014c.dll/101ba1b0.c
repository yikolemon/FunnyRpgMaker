/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ba1b0 */

void __fastcall FUN_101ba1b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[2] != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    FUN_100fa2cb(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[0x49] != 0) {
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    FUN_100fa2cb(param_1[0x49]);
    param_1[0x49] = 0;
  }
  iVar2 = param_1[0x47];
  if (iVar2 == 0) {
    iVar1 = 8;
  }
  else {
    iVar1 = iVar2 / 2 + iVar2;
  }
  iVar3 = iVar2 + 1;
  if (iVar2 + 1 < iVar1) {
    iVar3 = iVar1;
  }
  iVar2 = FUN_100fa1fa(iVar3 * 4);
  if (param_1[0x49] != 0) {
    FUN_1025b2d0(iVar2,param_1[0x49],param_1[0x47] << 2);
    FUN_100fa2cb(param_1[0x49]);
  }
  param_1[0x49] = iVar2;
  param_1[0x48] = iVar3;
  *(undefined4 *)(iVar2 + param_1[0x47] * 4) = 0;
  param_1[0x47] = param_1[0x47] + 1;
  return;
}

