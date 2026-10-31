/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ea56e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407ea56e(undefined4 param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  int *piVar5;
  
  uVar4 = (int)&stack0xffffffffffffffe8 - 0x10;
  piVar5 = (int *)(ulonglong)uVar4;
  uVar6 = param_2 & 0xffffffff;
  *(undefined4 *)(param_2 + 0x14) = 0;
  uVar3 = *(uint *)(param_2 + 4);
  if ((uVar3 == 0) || (*(uint *)(uVar6 + 8) == 0)) {
    *(undefined4 *)(uVar6 + 0x10) = 0;
    *(undefined4 *)(uVar6 + 0xc) = 0;
LAB_1407ea5d5:
    *(undefined4 *)(uVar6 + 0x14) = 0;
  }
  else {
    *(ulonglong *)((longlong)piVar5 + -8) = (ulonglong)*(uint *)(uVar6 + 8);
    *(ulonglong *)((longlong)piVar5 + -0x10) = (ulonglong)uVar3;
    *(undefined8 *)((longlong)piVar5 + -0x18) = 0x1407ea5a3;
    FUN_1407ed2e2((ulonglong)uVar4,param_1);
    piVar5 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar5 + -0x10) + 8);
    if (*(int *)((ulonglong)uVar4 + 8) == 0) {
      *(undefined4 *)(uVar6 + 0x10) = 0x7fffffff;
      *(undefined4 *)(uVar6 + 0xc) = 0x7fffffff;
      uVar3 = 0;
    }
    else {
      iVar1 = *piVar5;
      *(int *)(uVar6 + 0xc) = iVar1;
      iVar2 = piVar5[1];
      *(int *)(uVar6 + 0x10) = iVar2;
      if (iVar1 != 0x7fffffff) goto LAB_1407ea5d5;
      uVar3 = (uint)(iVar2 != 0x7fffffff);
    }
    *(uint *)(uVar6 + 0x14) = uVar3;
  }
  if (_DAT_150b732e7 == (*(uint *)((longlong)piVar5 + 0xc) ^ (uint)piVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)piVar5 + -8) = FUN_1407ea60c;
  FUN_1408802b0(*(uint *)((longlong)piVar5 + 0xc) ^ (uint)piVar5);
}

