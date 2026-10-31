/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c4a2 */

undefined4 * __thiscall FUN_1001c4a2(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = iVar1 + 0x1c;
    if (*(int *)(iVar1 + 0x18) != 0) {
      iVar2 = *(int *)(iVar1 + 0x18);
    }
    FUN_10001f66(iVar2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0xf;
  return param_2;
}

