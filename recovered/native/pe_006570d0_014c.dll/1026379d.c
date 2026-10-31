/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026379d */

uint FUN_1026379d(int param_1,uint param_2,int *param_3)

{
  ushort *puVar1;
  uint uVar2;
  
  if (param_3 == (int *)0x0) {
    puVar1 = ___pctype_func();
    uVar2 = ___acrt_locale_get_ctype_array_value(puVar1,param_1,param_2);
    return uVar2;
  }
  if (param_1 + 1U < 0x101) {
    param_2 = *(ushort *)(*(int *)*param_3 + param_1 * 2) & param_2;
  }
  else if (((int *)*param_3)[1] < 2) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_1027882e(param_1,param_2,param_3);
  }
  return param_2;
}

