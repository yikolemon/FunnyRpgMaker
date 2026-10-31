/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041e8b8 */

undefined4 __cdecl FUN_0041e8b8(int param_1,int *param_2,char param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar1 = 0x23;
  if (((*(byte *)(param_1 + 8) & 2) != 0) && (uVar1 = 7, *param_2 == 0)) {
    iVar6 = param_2[1];
    iVar2 = iVar6;
    if (param_2[3] != 0) {
      iVar2 = (param_2[3] * iVar6 + 0x24) / 0x48;
    }
    iVar8 = param_2[2];
    iVar4 = iVar8;
    if (param_2[4] != 0) {
      iVar4 = (param_2[4] * iVar8 + 0x24) / 0x48;
    }
    iVar7 = iVar4;
    if (iVar8 == 0) {
      iVar7 = iVar2;
    }
    iVar8 = iVar7;
    if (iVar6 == 0) {
      iVar8 = iVar4;
      iVar2 = iVar7;
    }
    uVar1 = 0x17;
    uVar3 = iVar2 + 0x20U & 0xffffffc0;
    if (((uVar3 != 0) && (uVar9 = iVar8 + 0x20U & 0xffffffc0, uVar9 != 0)) &&
       (0 < *(int *)(param_1 + 0x1c))) {
      piVar5 = (int *)(*(int *)(param_1 + 0x20) + 0xc);
      iVar6 = 0;
      do {
        if ((uVar9 == (*piVar5 + 0x20U & 0xffffffc0)) &&
           ((param_3 != '\0' || (uVar3 == (piVar5[-1] + 0x20U & 0xffffffc0))))) {
          if (param_4 == (int *)0x0) {
            return 0;
          }
          *param_4 = iVar6;
          return 0;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 4;
      } while (*(int *)(param_1 + 0x1c) != iVar6);
    }
  }
  return uVar1;
}

