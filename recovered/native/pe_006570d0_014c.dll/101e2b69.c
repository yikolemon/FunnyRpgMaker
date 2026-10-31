/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2b69 */

void __fastcall FUN_101e2b69(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  uVar6 = *(int *)(param_1 + 0x180) + 1;
  if ((uVar6 <= uVar1) || (uVar4 = *(uint *)(param_1 + 0x170), uVar4 == 0)) goto LAB_101e2c16;
  uVar2 = *(uint *)(param_1 + 0x168);
  if (uVar6 == uVar2) {
    if (*(uint *)(uVar4 + 0xc + uVar1 * 0x14) != uVar1) {
      uVar6 = uVar4 + uVar2 * 0x14;
LAB_101e2bb4:
      do {
        if (*(uint *)(uVar4 + 0xc) == uVar1) break;
        uVar4 = uVar4 + 0x14;
      } while (uVar4 < uVar6);
      goto LAB_101e2bc0;
    }
    uVar4 = uVar4 + uVar1 * 0x14;
  }
  else {
    uVar6 = uVar4 + uVar2 * 0x14;
    if (uVar2 != 0) goto LAB_101e2bb4;
LAB_101e2bc0:
    if (uVar4 == uVar6) goto LAB_101e2c16;
  }
  if (*(char *)(uVar4 + 0x10) != '\0') {
    if (*(int *)(param_1 + 0x188) < *(int *)(param_1 + 0x18c)) {
      iVar3 = *(int *)(param_1 + 400);
      iVar5 = *(int *)(param_1 + 0x188) * 0x10;
      *(undefined4 *)(iVar3 + iVar5) = *(undefined4 *)(param_1 + 0x138);
      *(int *)(iVar3 + 4 + iVar5) = *(int *)(param_1 + 0x140) + 1;
      *(undefined4 *)(iVar3 + 8 + iVar5) = 1;
      *(uint *)(iVar3 + 0xc + iVar5) = uVar4;
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
      FUN_101ecb07(*(undefined4 *)(uVar4 + 4));
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 0x82;
    return;
  }
LAB_101e2c16:
  *(undefined4 *)(param_1 + 0x10) = 0x86;
  return;
}

