/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00410f9a */

void __cdecl FUN_00410f9a(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  bool bVar2;
  
  bVar2 = FUN_00410ffe(param_3);
  if (bVar2) {
    FUN_0041100a(param_1,(int)param_2 - (int)param_1 >> 1);
  }
  else if (param_1 != param_2) {
    sVar1 = *param_3;
    do {
      *param_1 = sVar1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

