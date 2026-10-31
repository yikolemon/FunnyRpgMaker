/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007e2a0 */

void __thiscall FUN_1007e2a0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != param_2) {
    iVar2 = *(int *)(*param_1 + 4);
    iVar3 = *(int *)(*param_2 + 4);
    FUN_1007e4c4((int)param_2 + iVar3);
    uVar1 = *(undefined1 *)((int)param_1 + iVar2 + 0x40);
    *(undefined1 *)((int)param_1 + iVar2 + 0x40) = *(undefined1 *)((int)param_2 + iVar3 + 0x40);
    *(undefined1 *)((int)param_2 + iVar3 + 0x40) = uVar1;
    uVar4 = *(undefined4 *)((int)param_1 + iVar2 + 0x3c);
    *(undefined4 *)((int)param_1 + iVar2 + 0x3c) = *(undefined4 *)((int)param_2 + iVar3 + 0x3c);
    *(undefined4 *)((int)param_2 + iVar3 + 0x3c) = uVar4;
  }
  return;
}

