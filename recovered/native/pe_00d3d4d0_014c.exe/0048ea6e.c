/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048ea6e */

uint __cdecl FUN_0048ea6e(int param_1,int *param_2)

{
  ushort uVar1;
  uint in_EAX;
  ushort *puVar2;
  undefined2 extraout_var;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2[2] == 0) {
    if ((param_2[1] != 2) || (in_EAX = FUN_0048e94d(*param_2,2), (char)in_EAX == '\0')) {
      if (param_2[1] != 3) goto LAB_0048eb1a;
      iVar3 = *param_2;
      do {
        uVar1 = *(ushort *)(iVar3 + uVar4 * 2);
        puVar2 = ___pctype_func();
        uVar1 = ___acrt_locale_get_ctype_array_value((int)puVar2,(uint)uVar1,4);
        in_EAX = 0;
        if (CONCAT22(extraout_var,uVar1) == 0) goto LAB_0048eb1a;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
    }
    iVar3 = FUN_0049a930((short *)(param_1 + 0x80),0x40,*param_2,param_2[1]);
    if (iVar3 == 0) {
      iVar3 = FUN_0049a800((short *)(param_1 + 0x120),0x55,L"-",1);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_0049a800((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]),
         iVar3 == 0)) {
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_0048eb1a:
  return in_EAX & 0xffffff00;
}

