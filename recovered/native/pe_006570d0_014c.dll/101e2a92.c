/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2a92 */

void __fastcall FUN_101e2a92(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = param_2[1];
  uVar6 = *(int *)(param_1 + 0x180) + 1;
  uVar4 = 0x86;
  if (uVar3 < uVar6) {
    uVar2 = *(uint *)(param_1 + 0x170);
    if ((uVar6 == *(uint *)(param_1 + 0x168)) && (*(uint *)(uVar2 + 0xc + uVar3 * 0x14) == uVar3)) {
      uVar2 = uVar2 + uVar3 * 0x14;
    }
    else {
      uVar6 = uVar2 + *(uint *)(param_1 + 0x168) * 0x14;
      if (uVar2 == 0) {
        uVar6 = 0;
      }
      for (; (uVar2 < uVar6 && (*(uint *)(uVar2 + 0xc) != uVar3)); uVar2 = uVar2 + 0x14) {
      }
      if (uVar2 == uVar6) goto LAB_101e2b61;
    }
    if (*(char *)(uVar2 + 0x10) != '\0') {
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
        *(uint *)(iVar1 + 0xc + iVar5) = uVar2;
        *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
        FUN_101ecb07(*(undefined4 *)(uVar2 + 4));
        uVar3 = *(int *)(param_1 + 0x20c) + *param_2;
        *(uint *)(param_1 + 0x20c) = uVar3;
        uVar4 = 0x8b;
        if (uVar3 <= *(uint *)(param_1 + 0x210)) {
          return;
        }
      }
    }
  }
LAB_101e2b61:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}

