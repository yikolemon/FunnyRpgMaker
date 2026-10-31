/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180155f01 */

void FUN_180155f01(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_180147726();
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  if (iVar1 != iVar2) {
    if (iVar1 < iVar2) {
      FUN_180155f61(param_1,param_2,iVar1,iVar2 - iVar1);
      uVar3 = param_2[1];
      param_2[2] = uVar3;
    }
    else {
      FUN_180155f61(param_1,param_2,iVar2);
      uVar3 = param_2[2];
      param_2[1] = uVar3;
    }
    *param_2 = uVar3;
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}

