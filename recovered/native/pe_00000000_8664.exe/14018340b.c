/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018340b */

undefined8 FUN_14018340b(longlong param_1,char *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = strcmp(param_2,"svg-hooks");
  uVar4 = 0xc;
  if (iVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    param_3[2] = *(undefined8 *)(param_1 + 0x90);
    param_3[3] = uVar2;
    *param_3 = uVar4;
    param_3[1] = uVar1;
    uVar4 = 0;
  }
  return uVar4;
}

