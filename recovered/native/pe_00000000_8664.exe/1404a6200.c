/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a6200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1404a6200(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = (byte)ram0x000140613b10 & 0x3f;
  if ((DAT_140632d48 ^ ram0x000140613b10) >> bVar2 == 0 &&
      (DAT_140632d48 ^ ram0x000140613b10) << 0x40 - bVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_1404b9600(param_1);
  return uVar1;
}

