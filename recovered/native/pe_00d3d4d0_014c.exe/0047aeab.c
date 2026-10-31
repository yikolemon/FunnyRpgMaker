/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047aeab */

float10 __cdecl
FUN_0047aeab(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  ulonglong uVar2;
  
  fVar1 = FUN_0047ac7f((double)CONCAT44(param_2,param_1),(double)CONCAT44(param_4,param_3));
  uVar2 = -(ulonglong)((double)fVar1 < 0.0);
  return (float10)(double)(~uVar2 & (ulonglong)(double)fVar1 | DAT_004d7da0 & uVar2);
}

