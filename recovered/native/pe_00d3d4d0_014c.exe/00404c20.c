/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404c20 */

void __fastcall FUN_00404c20(int *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (LPVOID)*param_1;
    pvVar3 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar3 = *(LPVOID *)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    FUN_0047f280(pvVar3);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

