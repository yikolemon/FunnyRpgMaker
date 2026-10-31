/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10162427 */

void FUN_10162427(int param_1,uint *param_2)

{
  uint uVar1;
  float10 fVar2;
  float fVar3;
  
  fVar2 = (float10)FUN_100fdbca(param_2[0x11],param_2[0x12]);
  fVar3 = (float)fVar2 - (float)param_2[0xe];
  uVar1 = *param_2;
  if ((uVar1 >> 0xd & 1) == 0) {
    fVar2 = (float10)FUN_100fdbca(fVar3,(float)param_2[0x14] - (float)param_2[0xe]);
    fVar3 = (float)fVar2;
    uVar1 = *param_2;
  }
  if ((((uVar1 & 0x10) != 0) && (0.0 < (float)param_2[8])) &&
     (((uVar1 & 0x20) != 0 || ((*(uint *)(param_1 + 4) & 1) == 0)))) {
    fVar3 = (float)param_2[8];
  }
  FUN_100fdbca(fVar3,*(undefined4 *)(param_1 + 0x8c));
  return;
}

