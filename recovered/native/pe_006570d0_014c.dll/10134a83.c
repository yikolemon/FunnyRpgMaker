/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134a83 */

undefined4 __fastcall FUN_10134a83(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == (uint *)0x0) {
LAB_10134a96:
    if (param_3 != (uint *)0x0) {
      uVar1 = *param_3;
      uVar3 = param_3[1];
      if (uVar3 < param_1[1] || uVar3 - param_1[1] < (uint)(uVar1 < *param_1)) goto LAB_10134aac;
    }
    uVar2 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar3 = param_2[1];
    if (uVar3 <= param_1[1] && (uint)(*param_1 < uVar1) <= param_1[1] - uVar3) goto LAB_10134a96;
LAB_10134aac:
    *param_1 = uVar1;
    param_1[1] = uVar3;
    uVar2 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar2;
}

