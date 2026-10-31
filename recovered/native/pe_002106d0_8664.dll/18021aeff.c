/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021aeff */

undefined8 FUN_18021aeff(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  uVar3 = param_2 + *(int *)(param_1 + 0x350);
  if (*(uint *)(param_1 + 0x348) <= uVar3) {
    return 1;
  }
  uVar4 = (ulonglong)uVar3;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x358) + uVar4 * 8);
  param_3[1] = lVar1;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    if (*(longlong *)(param_1 + 0x3a0) != 0) {
      if (lVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x3a0) + uVar4 * 4) + lVar1;
      }
      goto LAB_18021af73;
    }
    uVar5 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x398)) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x398);
    }
    lVar1 = lVar1 + uVar5;
    param_3[1] = lVar1;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x358) + 8 + uVar4 * 8);
LAB_18021af73:
  param_3[2] = lVar2;
  param_3[3] = lVar1;
  return 0;
}

