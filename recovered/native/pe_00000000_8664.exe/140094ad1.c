/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140094ad1 */

void FUN_140094ad1(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_140f2a910;
  uVar1 = *(undefined8 *)(DAT_140f2a910 + 0x1608);
  cVar3 = FUN_1400949f6(param_2,*(undefined4 *)(DAT_140f2a910 + 0x1fe0));
  if (cVar3 != '\0') {
    if (param_1 == 0) {
      uVar4 = *(undefined4 *)(lVar2 + 0x1fe0);
    }
    else {
      uVar4 = FUN_140080066(uVar1,param_1,0);
    }
    FUN_140093fa1(uVar4,param_2);
    return;
  }
  return;
}

