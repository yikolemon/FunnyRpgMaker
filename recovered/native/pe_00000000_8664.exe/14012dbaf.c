/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012dbaf */

uint FUN_14012dbaf(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = 0;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    if ((code *)param_1[4] == (code *)0x0) {
      uVar2 = *(uint *)(param_1 + 1) - uVar1;
      if (param_3 <= uVar2) {
        uVar2 = param_3;
      }
      if (param_3 != 0) {
        FUN_1401c5180(param_2,(ulonglong)uVar1 + *param_1,uVar2);
      }
    }
    else {
      uVar2 = (*(code *)param_1[4])(param_1,(ulonglong)uVar1,param_2);
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar2;
  }
  return uVar2;
}

