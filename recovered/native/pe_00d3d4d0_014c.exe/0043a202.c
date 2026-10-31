/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a202 */

void __fastcall FUN_0043a202(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  uVar3 = param_2[1];
  uVar7 = *(int *)(param_1 + 0x180) + 1;
  uVar4 = 0x86;
  if (uVar3 < uVar7) {
    piVar2 = *(int **)(param_1 + 0x170);
    if ((uVar7 == *(uint *)(param_1 + 0x168)) && (piVar2[uVar3 * 5 + 3] == uVar3)) {
      piVar2 = piVar2 + uVar3 * 5;
    }
    else {
      piVar6 = piVar2 + *(uint *)(param_1 + 0x168) * 5;
      if (piVar2 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      for (; (piVar2 < piVar6 && (piVar2[3] != uVar3)); piVar2 = piVar2 + 5) {
      }
      if (piVar2 == piVar6) goto LAB_0043a2d1;
    }
    if ((char)piVar2[4] != '\0') {
      uVar4 = 0x82;
      if (*(int *)(param_1 + 0x188) < *(int *)(param_1 + 0x18c)) {
        if (*param_2 < 1) {
          return;
        }
        iVar1 = *(int *)(param_1 + 400);
        iVar5 = *(int *)(param_1 + 0x188) * 0x10;
        *(undefined4 *)(iVar1 + iVar5) = *(undefined4 *)(param_1 + 0x138);
        *(int *)(iVar1 + 4 + iVar5) = *(int *)(param_1 + 0x140) + 1;
        *(int *)(iVar1 + 8 + iVar5) = *param_2;
        *(int **)(iVar1 + 0xc + iVar5) = piVar2;
        *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
        FUN_0044427c(param_1,*piVar2,piVar2[1]);
        uVar3 = *(int *)(param_1 + 0x20c) + *param_2;
        *(uint *)(param_1 + 0x20c) = uVar3;
        uVar4 = 0x8b;
        if (uVar3 <= *(uint *)(param_1 + 0x210)) {
          return;
        }
      }
    }
  }
LAB_0043a2d1:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}

