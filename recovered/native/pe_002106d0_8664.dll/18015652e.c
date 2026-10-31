/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015652e */

longlong FUN_18015652e(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_18015658c(param_1,param_3);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    if (param_3 != 0) {
      iVar1 = *(int *)(param_1 + 0xa1c);
      puVar2[3] = iVar1;
      *(int *)(param_1 + 0xa1c) = param_3 + iVar1;
      return (int)puVar2[3] + param_1 + 0x630;
    }
    puVar2[3] = 0xffffffff;
  }
  return 0;
}

