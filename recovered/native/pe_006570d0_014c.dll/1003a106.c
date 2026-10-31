/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003a106 */

undefined4 * __thiscall
FUN_1003a106(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[3] = &DAT_1034bc89;
  param_1[4] = 0x40;
  iVar2 = *param_3;
  uVar1 = iVar2 - param_2;
  param_1[2] = uVar1;
  if (uVar1 != 0 && param_2 <= iVar2) {
    if (param_3[1] == 2) {
      FUN_1001909c(&DAT_1034bc89,&DAT_1034bc89 + (uVar1 >> 1));
      iVar2 = (uVar1 & 1) + (uVar1 >> 1);
    }
    else {
      if (param_3[1] != 0) {
        return param_1;
      }
      FUN_1001909c(&DAT_1034bc89,&DAT_1034bc89 + uVar1);
      iVar2 = 0;
    }
    param_1[2] = iVar2;
  }
  return param_1;
}

