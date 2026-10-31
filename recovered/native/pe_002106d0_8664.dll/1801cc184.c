/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc184 */

undefined8 FUN_1801cc184(longlong param_1,int *param_2,char param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = 0x23;
  if (((*(byte *)(param_1 + 8) & 2) != 0) && (uVar3 = 7, *param_2 == 0)) {
    iVar1 = param_2[1];
    iVar9 = iVar1;
    if (param_2[3] != 0) {
      iVar9 = (param_2[3] * iVar1 + 0x24) / 0x48;
    }
    iVar2 = param_2[2];
    iVar7 = iVar2;
    if (param_2[4] != 0) {
      iVar7 = (param_2[4] * iVar2 + 0x24) / 0x48;
    }
    iVar5 = iVar7;
    if (iVar2 == 0) {
      iVar5 = iVar9;
    }
    iVar2 = iVar5;
    if (iVar1 == 0) {
      iVar2 = iVar7;
      iVar9 = iVar5;
    }
    uVar3 = 0x17;
    uVar10 = iVar9 + 0x20U & 0xffffffc0;
    if (((uVar10 != 0) && (uVar6 = iVar2 + 0x20U & 0xffffffc0, uVar6 != 0)) &&
       (0 < (longlong)*(int *)(param_1 + 0x28))) {
      piVar8 = (int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = 0;
      do {
        if ((uVar6 == (*piVar8 + 0x20U & 0xffffffc0)) &&
           ((param_3 != '\0' || (uVar10 == (piVar8[-1] + 0x20U & 0xffffffc0))))) {
          if (param_4 == (undefined4 *)0x0) {
            return 0;
          }
          *param_4 = (int)lVar4;
          return 0;
        }
        lVar4 = lVar4 + 1;
        piVar8 = piVar8 + 4;
      } while (*(int *)(param_1 + 0x28) != lVar4);
    }
  }
  return uVar3;
}

