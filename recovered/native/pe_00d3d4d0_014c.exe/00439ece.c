/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00439ece */

void __fastcall FUN_00439ece(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  uVar4 = 0xffff;
  if (uVar1 < 0xffff) {
    uVar4 = uVar1;
  }
  puVar3 = (uint *)(param_1 + 0x10);
  uVar2 = 0x84;
  if (-1 < (int)uVar1) {
    puVar3 = (uint *)(param_1 + 0x100);
    uVar2 = uVar4;
  }
  *puVar3 = uVar2;
  return;
}

