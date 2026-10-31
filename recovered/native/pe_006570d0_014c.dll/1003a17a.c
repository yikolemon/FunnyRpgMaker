/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003a17a */

void __fastcall FUN_1003a17a(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1[2];
  if (iVar1 < 0) {
    if (*(char *)(*param_1 + 8) == '\x01') {
      iVar2 = param_1[1];
      uVar3 = iVar1 + *(int *)(iVar2 + 4);
      uVar4 = 0;
      if (0 < (int)uVar3) {
        uVar4 = uVar3;
      }
      uVar3 = *(uint *)(iVar2 + 8);
      if (uVar3 < uVar4) {
        (**(code **)(iVar2 + 0xc))(iVar2,uVar4);
        uVar3 = *(uint *)(iVar2 + 8);
      }
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      *(uint *)(iVar2 + 4) = uVar3;
    }
  }
  else {
    FUN_1001909c(param_1[3],iVar1 + param_1[3]);
  }
  return;
}

