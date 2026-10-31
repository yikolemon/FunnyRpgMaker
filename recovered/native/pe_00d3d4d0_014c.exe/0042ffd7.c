/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042ffd7 */

void __cdecl FUN_0042ffd7(byte *param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042fab9(param_2[9]);
  if ((char)uVar1 == '\0') {
    FUN_00430224(param_1,(int)param_2,param_3,param_4);
  }
  else {
    FUN_00430013((int)param_1,param_2,param_3,param_4);
  }
  return;
}

