/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004984eb */

undefined4 __cdecl FUN_004984eb(FILE *param_1)

{
  byte bVar1;
  FILE *pFVar2;
  uint uVar3;
  undefined3 extraout_var;
  
  pFVar2 = (FILE *)FUN_00488b0f(2);
  if (param_1 == pFVar2) {
    return CONCAT31((int3)((uint)pFVar2 >> 8),1);
  }
  pFVar2 = (FILE *)FUN_00488b0f(1);
  if (param_1 == pFVar2) {
    uVar3 = __fileno(param_1);
    bVar1 = FUN_004a38de(uVar3);
    return CONCAT31(extraout_var,CONCAT31(extraout_var,bVar1) != 0);
  }
  return (uint)pFVar2 & 0xffffff00;
}

