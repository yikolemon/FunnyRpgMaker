/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401603fe */

undefined8 FUN_1401603fe(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = param_2[2];
  if (param_2[4] != 0) {
    iVar2 = (iVar2 * param_2[4] + 0x24) / 0x48;
  }
  if (*param_2 == 1) {
    lVar1 = *(longlong *)(*param_1 + 0xe8);
    iVar3 = *(int *)(lVar1 + 0x2c) + *(int *)(lVar1 + 0x28);
  }
  else {
    if (*param_2 != 0) {
      return 7;
    }
    iVar3 = *(int *)(*(longlong *)(*param_1 + 0x30) + 0xc) + 0x20 >> 6;
  }
  uVar4 = 0x17;
  if (iVar2 + 0x20 >> 6 == iVar3) {
    uVar4 = 0;
    FUN_140160488(param_1,0);
  }
  return uVar4;
}

