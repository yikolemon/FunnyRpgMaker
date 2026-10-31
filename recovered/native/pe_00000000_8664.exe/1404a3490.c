/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a3490 */

undefined8 FUN_1404a3490(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (DAT_1406615a0 == -1) {
    return 0xc0000225;
  }
  if ((DAT_1406615a0 == 0) &&
     (lVar1 = FUN_1404a3748(0x1a,L"lt-lt",&DAT_140564c00,&DAT_140564c04), lVar1 == 0)) {
    return 0xc0000225;
  }
  uVar2 = FUN_1404b9600(0xfffffffffffffffa,param_1);
  return uVar2;
}

