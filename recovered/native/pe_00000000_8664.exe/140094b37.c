/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140094b37 */

undefined8 FUN_140094b37(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar2 = DAT_140f2a910;
  if (*(char *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10e) != '\0') {
    return 0;
  }
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(DAT_140f2a910 + 0x1fe0);
    uVar4 = uVar1;
  }
  else {
    uVar4 = FUN_140080066(*(longlong *)(DAT_140f2a910 + 0x1608),param_1,0);
    uVar1 = *(undefined4 *)(lVar2 + 0x1fe0);
  }
  cVar3 = FUN_1400949f6(param_2,uVar1);
  if (cVar3 != '\0') {
    FUN_140093fa1(uVar4,param_2);
  }
  uVar5 = FUN_14009460b(uVar4,0x141);
  return uVar5;
}

