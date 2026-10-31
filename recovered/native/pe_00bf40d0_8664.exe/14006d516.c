/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d516 */

undefined8 FUN_14006d516(uint *param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *param_1 + 1;
  if (param_1[1] < uVar3) {
    uVar1 = FUN_14006d61a((longlong)param_1,uVar3,param_2);
    if ((int)uVar1 != 0) {
      lVar2 = 0;
      goto LAB_14006d557;
    }
  }
  lVar2 = *(longlong *)(param_1 + 2) + (ulonglong)uVar3 * 0xc + -0xc;
  *param_1 = uVar3;
  uVar1 = 0;
LAB_14006d557:
  *param_3 = lVar2;
  return uVar1;
}

