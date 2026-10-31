/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f7dbf */

void __fastcall FUN_101f7dbf(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    if (param_1[8] != 0) {
      FUN_101c4c3e(iVar1,param_1 + 8);
    }
    FUN_101c0017(uVar2,param_1[7]);
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

