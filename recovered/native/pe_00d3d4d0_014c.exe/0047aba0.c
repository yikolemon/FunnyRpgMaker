/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047aba0 */

float10 __cdecl FUN_0047aba0(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  if (param_1 <= param_2) {
    dVar1 = param_2;
  }
  return (float10)((dVar1 + DAT_004f6cb8) /
                  ((double)(~-(ulonglong)(dVar1 == param_2) & (ulonglong)param_2 |
                           (ulonglong)param_1 & -(ulonglong)(dVar1 == param_2)) + DAT_004f6cb8));
}

