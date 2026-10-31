/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044f537 */

void __fastcall FUN_0044f537(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x1c);
    if (param_1[8] != 0) {
      FUN_00420cb6(iVar1,param_1 + 8);
    }
    FUN_0041c607(iVar2,param_1[7]);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
  }
  return;
}

