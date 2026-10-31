/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140143eb9 */

undefined8 FUN_140143eb9(longlong param_1,char *param_2,undefined4 *param_3)

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

