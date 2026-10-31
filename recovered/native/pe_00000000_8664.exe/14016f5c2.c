/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f5c2 */

undefined8 FUN_14016f5c2(uint *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *param_1 + 1;
  if (param_1[1] < uVar3) {
    uVar1 = FUN_14016f6c6(param_1,uVar3,param_2);
    if ((int)uVar1 != 0) {
      lVar2 = 0;
      goto LAB_14016f603;
    }
  }
  lVar2 = *(longlong *)(param_1 + 2) + (ulonglong)uVar3 * 0xc + -0xc;
  *param_1 = uVar3;
  uVar1 = 0;
LAB_14016f603:
  *param_3 = lVar2;
  return uVar1;
}

