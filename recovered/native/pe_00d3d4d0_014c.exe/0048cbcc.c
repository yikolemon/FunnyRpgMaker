/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048cbcc */

uint __cdecl FUN_0048cbcc(int param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined2 extraout_var;
  uint uVar3;
  
  if (param_3 == (int *)0x0) {
    puVar2 = ___pctype_func();
    uVar1 = ___acrt_locale_get_ctype_array_value((int)puVar2,param_1,(ushort)param_2);
    return CONCAT22(extraout_var,uVar1);
  }
  if (param_1 + 1U < 0x101) {
    uVar3 = *(ushort *)(*(int *)*param_3 + param_1 * 2) & param_2;
  }
  else if (((int *)*param_3)[1] < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00499a3e(param_1,param_2,param_3);
  }
  return uVar3;
}

