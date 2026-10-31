/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021eb8e */

undefined4 __fastcall FUN_1021eb8e(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (param_3 != iVar1) {
    if (*(int *)(param_1 + 0x50) != (param_3 <= iVar1) + 1) {
      if ((*(int *)(param_1 + 0x50) != 0) && (cVar2 = FUN_1021ea91(), cVar2 != '\0')) {
        return 1;
      }
      cVar2 = FUN_1021ef1e();
      if (cVar2 != '\0') {
        return 1;
      }
    }
    if (iVar1 < param_3) {
      cVar2 = FUN_1021eff7(*(undefined4 *)(param_1 + 0x30),param_2,param_3,
                           *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    }
    else {
      cVar2 = FUN_1021f162(*(undefined4 *)(param_1 + 0x30),param_2,param_3,
                           *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    }
    if (cVar2 != '\0') {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_3;
  return 0;
}

