/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f2c7 */

uint FUN_14004f2c7(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  pbVar1 = (byte *)*param_2;
  if (*pbVar1 == 0xff) {
    iVar2 = ((uint)pbVar1[3] | (uint)pbVar1[2] << 8 | (uint)pbVar1[1] << 0x10) * 0x100 + 0x8000;
  }
  else {
    if (*pbVar1 != 0x1e) {
      uVar3 = FUN_14004fc21(pbVar1,*(byte **)(param_1 + 0x10));
      return uVar3;
    }
    iVar2 = FUN_14004f85b(pbVar1,*(byte **)(param_1 + 0x10),0,(int *)0x0);
  }
  return iVar2 >> 0x10;
}

