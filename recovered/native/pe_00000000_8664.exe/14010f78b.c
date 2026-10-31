/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010f78b */

void FUN_14010f78b(longlong param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_14007b71f(param_2[0x11],param_2[0x12]);
  fVar2 = fVar2 - (float)param_2[0xe];
  uVar1 = *param_2;
  if ((uVar1 >> 0xd & 1) == 0) {
    fVar2 = (float)FUN_14007b71f(fVar2,(float)param_2[0x14] - (float)param_2[0xe]);
    uVar1 = *param_2;
  }
  if ((((uVar1 & 0x10) != 0) && (0.0 < (float)param_2[8])) &&
     (((uVar1 & 0x20) != 0 || ((*(uint *)(param_1 + 4) & 1) == 0)))) {
    fVar2 = (float)param_2[8];
  }
  FUN_14007b71f(fVar2,*(undefined4 *)(param_1 + 0xb8));
  return;
}

