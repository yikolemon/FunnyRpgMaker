/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407a64 */

void __fastcall FUN_00407a64(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    iVar3 = **(int **)(param_1 + 0x20);
    iVar4 = 0x30;
    if (iVar3 == 0) {
      iVar3 = **(int **)(param_1 + 0x1c);
      iVar4 = 0x2c;
    }
    pvVar1 = (LPVOID)**(int **)(param_1 + 0xc);
    pvVar5 = pvVar1;
    if ((0xfff < (uint)((iVar3 + **(int **)(param_1 + iVar4) * 2) - (int)pvVar1)) &&
       (pvVar5 = *(LPVOID *)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar5)))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    FUN_0047f280(pvVar5);
  }
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  **(undefined4 **)(param_1 + 0x2c) = 0;
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe;
  return;
}

