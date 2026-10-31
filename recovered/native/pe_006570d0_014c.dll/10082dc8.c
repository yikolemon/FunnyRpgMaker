/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10082dc8 */

undefined4 __thiscall FUN_10082dc8(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  FUN_10003d9a((int)*(char *)(param_1 + 0xc));
  while( true ) {
    if (param_2 == param_3) {
      return 1;
    }
    FUN_10082c38();
    iVar1 = *(int *)(param_1 + 0xc);
    if ((iVar1 < *param_2) || (param_2[1] < iVar1)) break;
    FUN_10003d9a((int)(char)iVar1);
    param_2 = param_2 + 2;
  }
  *(char **)(param_1 + 0x44) = "invalid string: ill-formed UTF-8 byte";
  return 0;
}

