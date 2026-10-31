/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c49c */

undefined4 FUN_1026c49c(int param_1,uint param_2)

{
  undefined2 uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(undefined2 *)(param_1 + uVar4 * 2);
      puVar2 = ___pctype_func();
      iVar3 = ___acrt_locale_get_ctype_array_value(puVar2,uVar1,0x103);
      if (iVar3 == 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return 1;
}

