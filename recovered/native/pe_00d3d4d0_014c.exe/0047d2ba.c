/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047d2ba */

void __fastcall FUN_0047d2ba(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  
  bVar3 = FUN_0047d28a(param_1);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(uint *)(iVar2 + 0xc) != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(iVar2 + 0xc) & 1;
    }
    *(undefined4 *)(iVar2 + 4) = 0x3f34;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x18) = 0x8000;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    iVar1 = iVar2 + 0x534;
    *(int *)(iVar2 + 0x70) = iVar1;
    *(int *)(iVar2 + 0x54) = iVar1;
    *(int *)(iVar2 + 0x50) = iVar1;
    *(undefined4 *)(iVar2 + 0x1bc4) = 1;
    *(undefined4 *)(iVar2 + 0x1bc8) = 0xffffffff;
  }
  return;
}

