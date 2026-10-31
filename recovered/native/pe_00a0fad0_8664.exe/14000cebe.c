/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000cebe */

void FUN_14000cebe(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar2 = (longlong)*(int *)(*param_1 + 4);
  if ((*(int *)((longlong)param_1 + lVar2 + 0x10) == 0) &&
     ((*(byte *)((longlong)param_1 + lVar2 + 0x18) & 2) != 0)) {
    iVar1 = (**(code **)(**(longlong **)((longlong)param_1 + lVar2 + 0x48) + 0x68))();
    if (iVar1 == -1) {
      FUN_14000a9f0((longlong)param_1 + (longlong)*(int *)(*param_1 + 4),
                    *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) | 4,0,
                    param_4,uVar3);
    }
  }
  return;
}

