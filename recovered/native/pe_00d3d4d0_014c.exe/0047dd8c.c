/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047dd8c */

undefined4 __fastcall FUN_0047dd8c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  puVar2 = *(uint **)(iVar1 + 0x38);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)(**(code **)(param_1 + 0x20))
                               (*(undefined4 *)(param_1 + 0x28),
                                1 << (*(byte *)(iVar1 + 0x28) & 0x1f),1);
    *(uint **)(iVar1 + 0x38) = puVar2;
    if (puVar2 == (uint *)0x0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(iVar1 + 0x2c);
  if (uVar3 == 0) {
    uVar3 = 1 << (*(byte *)(iVar1 + 0x28) & 0x1f);
    *(uint *)(iVar1 + 0x2c) = uVar3;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (param_3 < uVar3) {
    uVar3 = uVar3 - *(int *)(iVar1 + 0x34);
    uVar4 = param_3;
    if (uVar3 < param_3) {
      uVar4 = uVar3;
    }
    FUN_004878c0((uint *)((int)puVar2 + *(int *)(iVar1 + 0x34)),(uint *)(param_2 - param_3),uVar4);
    if (param_3 <= uVar3) {
      uVar3 = *(int *)(iVar1 + 0x34) + uVar4;
      if (uVar3 == *(uint *)(iVar1 + 0x2c)) {
        uVar3 = 0;
      }
      *(uint *)(iVar1 + 0x34) = uVar3;
      if (*(uint *)(iVar1 + 0x2c) <= *(uint *)(iVar1 + 0x30)) {
        return 0;
      }
      *(uint *)(iVar1 + 0x30) = *(uint *)(iVar1 + 0x30) + uVar4;
      return 0;
    }
    uVar4 = param_3 - uVar4;
    FUN_004878c0(*(uint **)(iVar1 + 0x38),(uint *)(param_2 - uVar4),uVar4);
    *(uint *)(iVar1 + 0x34) = uVar4;
  }
  else {
    FUN_004878c0(puVar2,(uint *)(param_2 - uVar3),uVar3);
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
  return 0;
}

