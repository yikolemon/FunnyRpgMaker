/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112e9f */

ulonglong FUN_140112e9f(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  
  if (*(short *)(param_1 + 0x5e) == -1) {
    bVar1 = *(byte *)(param_1 + 0x72);
    uVar4 = (undefined7)((ulonglong)param_2 >> 8);
LAB_140112ee9:
    uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffffffffff03;
  }
  else {
    bVar1 = 1;
    iVar2 = 0;
    do {
      if (((*(byte *)(param_1 + 0x72) >> ((byte)iVar2 & 0x1f) ^ *(byte *)(param_1 + 0x71)) & 3) == 0
         ) {
        bVar1 = *(byte *)(param_1 + 0x72) >> (bVar1 % (*(byte *)(param_1 + 0x71) >> 2 & 3)) * '\x02'
        ;
        uVar4 = 0;
        goto LAB_140112ee9;
      }
      bVar1 = bVar1 + 1;
      iVar2 = iVar2 + 2;
    } while (iVar2 != 6);
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}

