/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101527b6 */

void __fastcall FUN_101527b6(int *param_1)

{
  int iVar1;
  
  if (param_1[1] < 0) {
    iVar1 = FUN_100fa1fa(0);
    if (param_1[2] != 0) {
      FUN_1025b2d0(iVar1,param_1[2],*param_1 * 0x18);
      FUN_100fa2cb(param_1[2]);
    }
    param_1[2] = iVar1;
    param_1[1] = 0;
  }
  *param_1 = 0;
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}

