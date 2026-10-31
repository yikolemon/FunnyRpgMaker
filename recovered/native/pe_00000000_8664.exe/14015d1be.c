/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015d1be */

undefined8 FUN_14015d1be(longlong *param_1,int *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2[2];
  if (param_2[4] != 0) {
    iVar3 = (iVar3 * param_2[4] + 0x24) / 0x48;
  }
  if (*param_2 == 1) {
    uVar2 = (uint)*(ushort *)(*(longlong *)(*param_1 + 0xd8) + 0x60);
  }
  else {
    if (*param_2 != 0) {
      return 7;
    }
    uVar2 = *(int *)(*(longlong *)(*param_1 + 0x30) + 0xc) + 0x20 >> 6;
  }
  uVar1 = 0x17;
  if (iVar3 + 0x20 >> 6 == uVar2) {
    FUN_14015d238();
    uVar1 = 0;
  }
  return uVar1;
}

