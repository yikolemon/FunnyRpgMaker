/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00468158 */

void __fastcall FUN_00468158(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)param_1[2];
  if (iVar2 != 0) {
    do {
      FUN_004681b0(puVar1,param_2);
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined4 *)param_1[2];
  }
  FUN_0041c607(param_2,(int)puVar1);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

