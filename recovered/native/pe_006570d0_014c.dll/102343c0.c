/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102343c0 */

int __thiscall FUN_102343c0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == 0) && (param_3 == 0 && param_4 == 0)) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar2 = FUN_102702af(*(undefined4 *)(param_1 + 0x4c),param_2,uVar1,param_3 * 2);
    if (iVar2 == 0) {
      FUN_10234510(*(undefined4 *)(param_1 + 0x4c),1);
      return param_1;
    }
  }
  return 0;
}

