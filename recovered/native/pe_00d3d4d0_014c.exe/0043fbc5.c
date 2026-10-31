/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043fbc5 */

uint __fastcall FUN_0043fbc5(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint local_20;
  
  if (param_2 == 0) {
    local_20 = 0x10000;
  }
  else {
    piVar8 = (int *)(param_1 + 8);
    local_20 = 0x10000;
    iVar7 = 0;
    do {
      iVar1 = *(int *)(param_3 + iVar7 * 4);
      iVar2 = piVar8[-1];
      if ((iVar2 != iVar1) && (iVar2 != 0)) {
        iVar3 = piVar8[-2];
        if (iVar1 - iVar3 == 0 || iVar1 < iVar3) {
          return 0;
        }
        iVar4 = *piVar8;
        uVar5 = iVar4 - iVar1;
        if (uVar5 == 0 || iVar4 < iVar1) {
          return 0;
        }
        if (iVar1 < iVar2) {
          uVar6 = iVar2 - iVar3;
          uVar5 = iVar1 - iVar3;
        }
        else {
          uVar6 = iVar4 - iVar2;
        }
        local_20 = FUN_0041dcda(local_20,uVar5,uVar6);
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 3;
    } while (param_2 != iVar7);
  }
  return local_20;
}

