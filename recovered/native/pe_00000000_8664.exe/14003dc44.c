/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003dc44 */

ulonglong FUN_14003dc44(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(longlong *)param_1[7] != 0) {
    iVar2 = *(int *)param_1[10];
    if (1 < iVar2) {
      *(int *)param_1[10] = iVar2 + -1;
      lVar1 = *(longlong *)param_1[7];
      *(longlong *)param_1[7] = lVar1 + 1;
      return (ulonglong)*(byte *)(lVar1 + 1);
    }
  }
  iVar2 = FUN_140015b3c(param_1);
  if (iVar2 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((*(byte **)param_1[7] == (byte *)0x0) || (*(int *)param_1[10] < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00014003dcab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)**(byte **)param_1[7];
  }
  return uVar3;
}

