/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c5bd */

uint FUN_1026c5bd(int param_1,int *param_2)

{
  undefined2 uVar1;
  uint in_EAX;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2[2] == 0) {
    if ((param_2[1] != 2) || (in_EAX = FUN_1026c49c(*param_2,2), (char)in_EAX == '\0')) {
      if (param_2[1] != 3) goto LAB_1026c669;
      iVar4 = *param_2;
      do {
        uVar1 = *(undefined2 *)(iVar4 + uVar5 * 2);
        puVar2 = ___pctype_func();
        iVar3 = ___acrt_locale_get_ctype_array_value(puVar2,uVar1,4);
        in_EAX = 0;
        if (iVar3 == 0) goto LAB_1026c669;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 3);
    }
    iVar4 = FUN_1027bc60(param_1 + 0x80,0x40,*param_2,param_2[1]);
    if (iVar4 == 0) {
      iVar4 = FUN_1027bb30(param_1 + 0x120,0x55,&DAT_1035a720,1);
      if ((iVar4 == 0) &&
         (iVar4 = FUN_1027bb30(param_1 + 0x120,0x55,*param_2,param_2[1]), iVar4 == 0)) {
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_1026c669:
  return in_EAX & 0xffffff00;
}

