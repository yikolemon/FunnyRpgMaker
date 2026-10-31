/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101183b4 */

void FUN_101183b4(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1039d74c;
  if ((*(char *)(DAT_1039d74c + 0x2748) == '\0') &&
     (((param_2 != (char *)0x0 ||
       (param_2 = *(char **)(DAT_1039d74c + 0x54), param_2 != (char *)0x0)) && (*param_2 != '\0'))))
  {
    iVar2 = FUN_100fa7a5(param_2,&DAT_1033b52f);
    if (iVar2 != 0) {
      FUN_101182f9(2,param_1);
      *(int *)(iVar1 + 0x2754) = iVar2;
    }
  }
  return;
}

