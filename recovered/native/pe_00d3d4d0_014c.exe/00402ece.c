/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402ece */

void __cdecl FUN_00402ece(undefined4 param_1,LPVOID param_2,int param_3)

{
  code *pcVar1;
  LPVOID pvVar2;
  
  pvVar2 = param_2;
  if ((0xfff < param_3 * 2 + 2U) &&
     (pvVar2 = *(LPVOID *)((int)param_2 + -4), 0x1f < (uint)((int)param_2 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_0047f280(pvVar2);
  return;
}

