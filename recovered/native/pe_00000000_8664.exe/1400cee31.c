/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cee31 */

void FUN_1400cee31(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_1400c0656();
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  if (iVar1 != iVar2) {
    if (iVar1 < iVar2) {
      FUN_1400cee91(param_1,param_2,iVar1,iVar2 - iVar1);
      uVar3 = param_2[1];
      param_2[2] = uVar3;
    }
    else {
      FUN_1400cee91(param_1,param_2,iVar2);
      uVar3 = param_2[2];
      param_2[1] = uVar3;
    }
    *param_2 = uVar3;
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}

