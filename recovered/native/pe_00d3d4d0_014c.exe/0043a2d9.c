/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a2d9 */

void __fastcall FUN_0043a2d9(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  uVar1 = *param_2;
  uVar6 = *(int *)(param_1 + 0x180) + 1;
  if ((uVar6 <= uVar1) || (piVar4 = *(int **)(param_1 + 0x170), piVar4 == (int *)0x0))
  goto LAB_0043a386;
  uVar2 = *(uint *)(param_1 + 0x168);
  if (uVar6 == uVar2) {
    if (piVar4[uVar1 * 5 + 3] != uVar1) {
      piVar7 = piVar4 + uVar2 * 5;
LAB_0043a324:
      do {
        if (piVar4[3] == uVar1) break;
        piVar4 = piVar4 + 5;
      } while (piVar4 < piVar7);
      goto LAB_0043a330;
    }
    piVar4 = piVar4 + uVar1 * 5;
  }
  else {
    piVar7 = piVar4 + uVar2 * 5;
    if (uVar2 != 0) goto LAB_0043a324;
LAB_0043a330:
    if (piVar4 == piVar7) goto LAB_0043a386;
  }
  if ((char)piVar4[4] != '\0') {
    if (*(int *)(param_1 + 0x188) < *(int *)(param_1 + 0x18c)) {
      iVar3 = *(int *)(param_1 + 400);
      iVar5 = *(int *)(param_1 + 0x188) * 0x10;
      *(undefined4 *)(iVar3 + iVar5) = *(undefined4 *)(param_1 + 0x138);
      *(int *)(iVar3 + 4 + iVar5) = *(int *)(param_1 + 0x140) + 1;
      *(undefined4 *)(iVar3 + 8 + iVar5) = 1;
      *(int **)(iVar3 + 0xc + iVar5) = piVar4;
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
      FUN_0044427c(param_1,*piVar4,piVar4[1]);
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 0x82;
    return;
  }
LAB_0043a386:
  *(undefined4 *)(param_1 + 0x10) = 0x86;
  return;
}

