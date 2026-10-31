/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00431cd1 */

void __fastcall FUN_00431cd1(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar4 = 0;
    bVar3 = true;
    do {
      bVar5 = bVar3;
      piVar1 = param_1 + iVar4 * 0x151 + 0xd;
      *piVar1 = 0;
      piVar1[1] = 0;
      if ((int *)piVar1[2] != piVar1 + 7) {
        FUN_0041c607(iVar2,piVar1[2]);
        param_1[iVar4 * 0x151 + 0xf] = 0;
      }
      param_1[iVar4 * 0x151 + 0x10] = 0;
      param_1[iVar4 * 0x151 + 0x11] = 0;
      if ((int *)param_1[iVar4 * 0x151 + 0x12] != param_1 + iVar4 * 0x151 + 0xda) {
        FUN_0041c607(iVar2,param_1[iVar4 * 0x151 + 0x12]);
        param_1[iVar4 * 0x151 + 0x12] = 0;
      }
      iVar4 = 1;
      bVar3 = false;
    } while (bVar5);
    if ((int *)param_1[10] != param_1 + 0x2b2) {
      FUN_0041c607(iVar2,param_1[10]);
      param_1[10] = 0;
    }
    if ((int *)param_1[0xb] != param_1 + 0x2ba) {
      FUN_0041c607(iVar2,param_1[0xb]);
      param_1[0xb] = 0;
    }
    if ((int *)param_1[0xc] != param_1 + 0x2c2) {
      FUN_0041c607(iVar2,param_1[0xc]);
      param_1[0xc] = 0;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    if ((int *)param_1[7] != param_1 + 0x2ca) {
      FUN_0041c607(iVar2,param_1[7]);
      param_1[7] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = 0;
  }
  return;
}

