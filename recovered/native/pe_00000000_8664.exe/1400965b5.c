/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400965b5 */

void FUN_1400965b5(undefined4 param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_140f2a910;
  if ((*(char *)(DAT_140f2a910 + 0x2a40) == '\0') &&
     (((param_2 != (char *)0x0 ||
       (param_2 = *(char **)(DAT_140f2a910 + 0x58), param_2 != (char *)0x0)) && (*param_2 != '\0')))
     ) {
    lVar2 = FUN_1400780ec(param_2,&DAT_140ecc14f);
    if (lVar2 != 0) {
      FUN_140096502(2,param_1);
      *(longlong *)(lVar1 + 0x2a50) = lVar2;
    }
  }
  return;
}

