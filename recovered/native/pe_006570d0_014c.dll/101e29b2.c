/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e29b2 */

void __fastcall FUN_101e29b2(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x17c);
  if ((uVar3 != 0) && (*(int *)(param_1 + 0x174) != 0)) {
    uVar1 = uVar3 + *(int *)(param_1 + 0x174) * 0x14;
    do {
      if ((*(char *)(param_1 + 0x148) == *(char *)(uVar3 + 0xc)) &&
         (*(char *)(uVar3 + 0x10) != '\0')) {
        iVar4 = *(int *)(param_1 + 0x188);
        if (iVar4 < *(int *)(param_1 + 0x18c)) {
          iVar2 = *(int *)(param_1 + 400);
          *(int *)(param_1 + 0x188) = iVar4 + 1;
          iVar4 = iVar4 * 0x10;
          *(undefined4 *)(iVar2 + iVar4) = *(undefined4 *)(param_1 + 0x138);
          *(int *)(iVar2 + 4 + iVar4) = *(int *)(param_1 + 0x140) + 1;
          *(undefined4 *)(iVar2 + 8 + iVar4) = 1;
          *(uint *)(iVar2 + 0xc + iVar4) = uVar3;
          FUN_101ecb07(*(undefined4 *)(uVar3 + 4));
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 0x82;
        return;
      }
      uVar3 = uVar3 + 0x14;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0x80;
  return;
}

