/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043c05d */

void __fastcall FUN_0043c05d(int *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = **(uint **)(*param_1 + 0x2e0);
  if (uVar1 < (param_1[6] - param_1[5]) + 1U) {
    uVar2 = (*(uint **)(*param_1 + 0x2e0))[2];
    if (uVar2 == 0) {
      if (uVar1 != 0) {
        _memset(param_2,0,uVar1 * 4);
      }
    }
    else if (uVar1 != 0) {
      uVar3 = 0;
      do {
        *(int *)((int)param_2 + uVar3 * 4) = *(int *)(uVar2 + uVar3 * 4) >> 2;
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    param_1[9] = param_1[9] + uVar1;
  }
  else {
    param_1[4] = 0x82;
  }
  return;
}

