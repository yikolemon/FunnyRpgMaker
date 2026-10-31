/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424e07 */

float10 __cdecl FUN_00424e07(uint param_1,int param_2)

{
  float10 fVar1;
  double dVar2;
  
  dVar2 = (double)CONCAT44(param_2,param_1);
  if (0.0 <= dVar2) {
    if (DAT_004d7f98 <= dVar2) {
      fVar1 = (float10)FUN_00490fd0(param_1,param_2,0,0x40768000);
      return fVar1;
    }
  }
  else {
    fVar1 = (float10)FUN_00490fd0(param_1,param_2,0,0x40768000);
    dVar2 = (double)fVar1 + DAT_004d7f98;
  }
  return (float10)dVar2;
}

