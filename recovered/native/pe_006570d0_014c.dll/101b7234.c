/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7234 */

void __thiscall FUN_101b7234(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = (int *)(param_1 + param_2 * 0xc);
  iVar3 = *piVar1;
  iVar6 = piVar1[2];
  if (iVar3 != 0) {
    piVar2 = (int *)(param_1 + param_3 * 0xc);
    iVar9 = *piVar2;
    iVar7 = 0;
    do {
      uVar4 = *(undefined4 *)(iVar6 + iVar7);
      if (iVar9 == piVar2[1]) {
        if (iVar9 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar9 / 2 + iVar9;
        }
        iVar8 = iVar9 + 1;
        if (iVar9 + 1 < iVar5) {
          iVar8 = iVar5;
        }
        iVar5 = FUN_100fa1fa(iVar8 * 4);
        if (piVar2[2] != 0) {
          FUN_1025b2d0(iVar5,piVar2[2],*piVar2 << 2);
          FUN_100fa2cb(piVar2[2]);
        }
        piVar2[2] = iVar5;
        piVar2[1] = iVar8;
        iVar9 = *piVar2;
      }
      else {
        iVar5 = piVar2[2];
      }
      *(undefined4 *)(iVar5 + iVar9 * 4) = uVar4;
      iVar9 = *piVar2 + 1;
      *piVar2 = iVar9;
      iVar7 = iVar7 + 4;
    } while (iVar3 << 2 != iVar7);
    iVar6 = piVar1[2];
  }
  if (iVar6 != 0) {
    piVar1[1] = 0;
    *piVar1 = 0;
    FUN_100fa2cb(iVar6);
    piVar1[2] = 0;
  }
  FUN_1026fb00(*(undefined4 *)(param_1 + 8 + param_3 * 0xc),*(undefined4 *)(param_1 + param_3 * 0xc)
               ,4,&LAB_101b74ec);
  FUN_1014b10a(param_1 + param_3 * 0x20 + 0x18);
  FUN_1014b0b0();
  return;
}

