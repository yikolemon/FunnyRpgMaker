/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00455127 */

void __fastcall FUN_00455127(int param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  FUN_004551f9(param_1);
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (((uint)piVar1[1] <=
       (uint)*(ushort *)((int)piVar1 + 0x3a) + (uint)*(ushort *)((int)piVar1 + 0x16)) ||
     ((uint)piVar1[2] <= (uint)*(ushort *)(piVar1 + 0xe) + (uint)*(ushort *)(piVar1 + 5))) {
    iVar2 = FUN_0041c799(piVar1,1,1);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_004550d4(param_1,param_2);
  return;
}

