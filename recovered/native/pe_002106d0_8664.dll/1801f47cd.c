/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f47cd */

undefined8 FUN_1801f47cd(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  uVar2 = 0xc;
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x70);
    uVar2 = 0;
  }
  return uVar2;
}

