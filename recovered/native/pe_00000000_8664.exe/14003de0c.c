/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003de0c */

void FUN_14003de0c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_140013624((longlong)param_1 + (longlong)*(int *)(*param_1 + 4),
                    *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10) | 4,0,
                    param_4,uVar3);
    }
  }
  return;
}

