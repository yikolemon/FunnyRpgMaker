/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa60b */

void FUN_1407aa60b(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  uint unaff_EBP;
  int *piVar4;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  piVar4 = (int *)(ulonglong)param_2;
  uStack_28 = 0x1407aa620;
  FUN_14079ac5c();
  uStack_28 = 0x1407aa629;
  FUN_1407a9c0f(param_1,piVar4);
  uStack_30 = unaff_RBX >> 0x20;
  uStack_28 = (ulonglong)unaff_EBP;
  uVar2 = FUN_1407a9e5b(param_1,*piVar4);
  uVar3 = (ulonglong)((int)&uStack_30 + 8);
  if ((int)uVar2 != 0) {
    iVar1 = *piVar4;
    *(undefined8 *)(uVar3 - 8) = uVar2;
    *(undefined8 *)(uVar3 - 0x10) = 0x1407aa647;
    FUN_1407aa335(param_2,iVar1);
    *piVar4 = *piVar4 + (int)uVar2;
    *(undefined1 *)((longlong)piVar4 + 0x16) = 0;
  }
  return;
}

