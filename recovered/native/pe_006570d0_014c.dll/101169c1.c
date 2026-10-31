/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101169c1 */

void FUN_101169c1(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1039d74c;
  cVar2 = FUN_101168ea(param_2,*(undefined4 *)(DAT_1039d74c + 0x1e80));
  if (cVar2 != '\0') {
    if (param_1 == 0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x1e80);
    }
    else {
      uVar3 = FUN_101021d4(param_1,0);
    }
    FUN_10115eed(uVar3,param_2);
  }
  return;
}

