/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c54d */

uint FUN_1026c54d(int param_1,undefined4 *param_2)

{
  uint in_EAX;
  int iVar1;
  
  if (((param_2[2] == 0) && (param_2[1] == 4)) &&
     (in_EAX = FUN_1026c49c(*param_2,4), (char)in_EAX != '\0')) {
    iVar1 = FUN_1027bb30(param_1 + 0x120,0x55,&DAT_1035a720,1);
    if ((iVar1 == 0) && (iVar1 = FUN_1027bb30(param_1 + 0x120,0x55,*param_2,param_2[1]), iVar1 == 0)
       ) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_EAX & 0xffffff00;
}

