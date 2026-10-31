/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019afdb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1019afdb(int param_1,LPRECT param_2,DWORD param_3,DWORD param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = FUN_10198894();
  if ((((*(code **)(iVar1 + 0x2c) != (code *)0x0) && (*(char *)(iVar1 + 0x29) == '\x01')) &&
      (fVar3 = *(float *)(param_1 + 0x30) * _DAT_10301c10 + DAT_102b70e0, uVar2 = (uint)fVar3,
      uVar2 = (int)(fVar3 - DAT_1028f6d0) & (int)uVar2 >> 0x1f | uVar2, uVar2 != 0)) &&
     (iVar1 = (**(code **)(iVar1 + 0x2c))(param_2,param_3,0,param_4,uVar2), iVar1 != 0)) {
    return;
  }
  AdjustWindowRectEx(param_2,param_3,0,param_4);
  return;
}

