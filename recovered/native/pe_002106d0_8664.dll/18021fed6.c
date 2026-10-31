/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021fed6 */

undefined8 FUN_18021fed6(uint *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *param_1 + 1;
  if (param_1[1] < uVar3) {
    uVar1 = FUN_18021ffda(param_1,uVar3,param_2);
    if ((int)uVar1 != 0) {
      lVar2 = 0;
      goto LAB_18021ff17;
    }
  }
  lVar2 = *(longlong *)(param_1 + 2) + (ulonglong)uVar3 * 0xc + -0xc;
  *param_1 = uVar3;
  uVar1 = 0;
LAB_18021ff17:
  *param_3 = lVar2;
  return uVar1;
}

