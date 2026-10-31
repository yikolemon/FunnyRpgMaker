/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bb3a0 */

void __fastcall FUN_101bb3a0(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    iVar2 = param_1[2];
    iVar3 = *param_1 * 0x38;
    do {
      uVar1 = 1;
      if (*(char *)(iVar2 + 0x24) == '\0') {
        if (*(char *)(iVar2 + 0x25) == '\x01') {
          FUN_1015153a(iVar2);
          uVar1 = *(undefined1 *)(iVar2 + 0x24);
        }
        else {
          uVar1 = 0;
        }
      }
      *(undefined1 *)(iVar2 + 0x25) = uVar1;
      iVar2 = iVar2 + 0x38;
      iVar3 = iVar3 + -0x38;
    } while (iVar3 != 0);
  }
  return;
}

