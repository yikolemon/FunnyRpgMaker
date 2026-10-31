/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020ba97 */

undefined4 __fastcall FUN_1020ba97(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  uVar2 = param_2 + *(int *)(param_1 + 0x234);
  if (*(uint *)(param_1 + 0x22c) <= uVar2) {
    return 1;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x23c) + uVar2 * 4);
  param_3[1] = iVar3;
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (*(int *)(param_1 + 0x264) != 0) {
      if (iVar3 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0x264) + uVar2 * 4) + iVar3;
      }
      goto LAB_1020bafa;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x260)) {
      iVar1 = *(int *)(param_1 + 0x260);
    }
    iVar3 = iVar3 + iVar1;
    param_3[1] = iVar3;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x23c) + 4 + uVar2 * 4);
LAB_1020bafa:
  param_3[2] = iVar1;
  param_3[3] = iVar3;
  return 0;
}

