/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140148e2f */

undefined8 FUN_140148e2f(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_140149002();
  lVar3 = 0;
  do {
    lVar2 = FUN_1401908c0(uVar1,&DAT_140e9bb00 + lVar3);
    if (lVar2 != 0) {
      return 1;
    }
    lVar3 = lVar3 + 0x14;
  } while (lVar3 != 400);
  return 0;
}

