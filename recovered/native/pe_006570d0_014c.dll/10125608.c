/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125608 */

void FUN_10125608(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar1 = DAT_1039d74c;
  iVar4 = *(int *)(DAT_1039d74c + 0x27b8) + -1 + (uint)(*(int *)(DAT_1039d74c + 0x27b8) == 0);
  if (*(char *)(DAT_1039d74c + 0x20) == '\0') {
    FUN_100fb9a2(DAT_1039d74c + 0x27b8,"[%05d] ",*(undefined4 *)(DAT_1039d74c + 4));
  }
  else {
    FUN_100fb9a2(DAT_1039d74c + 0x27b8,&DAT_1034baa5,DAT_1039d74c + 0x20,
                 *(undefined4 *)(DAT_1039d74c + 4));
  }
  FUN_100fb9e6(param_1,param_2);
  puVar3 = *(undefined **)(iVar1 + 0x27c0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &DAT_1039d750;
  }
  FUN_100fbada(puVar3,iVar4,*(int *)(iVar1 + 0x27b8) + -1 + (uint)(*(int *)(iVar1 + 0x27b8) == 0));
  uVar2 = *(uint *)(iVar1 + 0x27b4);
  puVar3 = *(undefined **)(iVar1 + 0x27c0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &DAT_1039d750;
  }
  if ((uVar2 >> 0x14 & 1) != 0) {
    FUN_101256d3("%s",puVar3 + iVar4);
    uVar2 = *(uint *)(iVar1 + 0x27b4);
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    OutputDebugStringA("[imgui] ");
    OutputDebugStringA(puVar3 + iVar4);
  }
  return;
}

