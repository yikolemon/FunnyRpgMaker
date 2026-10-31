/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0d6a */

uint __fastcall FUN_100a0d6a(int *param_1)

{
  ushort *puVar1;
  short sVar2;
  uint uVar3;
  
  sVar2 = (**(code **)(*param_1 + 0x18))();
  if (sVar2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    *(int *)param_1[0xb] = *(int *)param_1[0xb] + -1;
    puVar1 = *(ushort **)param_1[7];
    *(ushort **)param_1[7] = puVar1 + 1;
    uVar3 = (uint)*puVar1;
  }
  return uVar3;
}

