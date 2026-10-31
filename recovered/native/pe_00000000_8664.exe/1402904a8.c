/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402904a8 */

void FUN_1402904a8(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    lVar3 = (longlong)*(int *)(*param_1 + 4);
    lVar4 = (longlong)*(int *)(*param_2 + 4);
    FUN_140290742((longlong)param_1 + lVar3,(longlong)param_2 + lVar4);
    uVar1 = *(undefined1 *)((longlong)param_1 + lVar3 + 0x58);
    *(undefined1 *)((longlong)param_1 + lVar3 + 0x58) =
         *(undefined1 *)((longlong)param_2 + lVar4 + 0x58);
    *(undefined1 *)((longlong)param_2 + lVar4 + 0x58) = uVar1;
    uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x50);
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x50) =
         *(undefined8 *)((longlong)param_2 + lVar4 + 0x50);
    *(undefined8 *)((longlong)param_2 + lVar4 + 0x50) = uVar2;
  }
  return;
}

