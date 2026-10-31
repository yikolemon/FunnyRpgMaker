/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407821f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407821f4(uint param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)_DAT_150b1f94d;
  FUN_14075b315();
  uVar2 = *(undefined8 *)((ulonglong)param_1 + 0x34);
  *(ulonglong *)(uVar3 + 0x1540) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(uVar3 + 0xac8) >> 0x20) -
                (float)((ulonglong)uVar2 >> 0x20),
                (float)*(undefined8 *)(uVar3 + 0xac8) - (float)uVar2);
  *(undefined4 *)(uVar3 + 0x14dc) = param_2;
  pbVar1 = (byte *)((ulonglong)param_1 + 0xad);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

