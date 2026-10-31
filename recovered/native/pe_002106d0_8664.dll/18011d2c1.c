/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d2c1 */

void FUN_18011d2c1(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_180419160;
  if (*(char *)(DAT_180419160 + 0x2a40) == '\0') {
    FUN_18011d246(1,param_1);
    uVar2 = FUN_1802723a4(1);
    *(undefined8 *)(lVar1 + 0x2a50) = uVar2;
  }
  return;
}

