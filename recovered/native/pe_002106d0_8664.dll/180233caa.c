/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180233caa */

undefined8 FUN_180233caa(longlong param_1,char *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = strcmp(param_2,"svg-hooks");
  uVar5 = 0xc;
  if ((((iVar4 == 0) && (uVar5 = 6, param_4 != '\x01')) && (*param_3 != 0)) &&
     (((param_3[1] != 0 && (param_3[2] != 0)) && (param_3[3] != 0)))) {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    lVar3 = param_3[3];
    *(longlong *)(param_1 + 0x90) = param_3[2];
    *(longlong *)(param_1 + 0x98) = lVar3;
    *(longlong *)(param_1 + 0x80) = lVar1;
    *(longlong *)(param_1 + 0x88) = lVar2;
    *(undefined1 *)(param_1 + 0x79) = 1;
    uVar5 = 0;
  }
  return uVar5;
}

